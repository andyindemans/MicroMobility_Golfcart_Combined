import rclpy
import numpy as np
from rclpy.node import Node
from std_msgs.msg import String
from std_msgs.msg import Float64
from math import radians, cos, sin, asin, sqrt
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import Image
from cv_bridge import CvBridge, CvBridgeError
import cv2

class Brake(Node):
    def __init__(self):
        super().__init__('Brake')
        self.flag_right = False
        self.flag_left = False
        self.subscription = self.create_subscription(Image, '/camera/depth/image_rect_raw', self.resolve, qos_profile_sensor_data)
        self.publisher = self.create_publisher(String, 'brake_topic', 10)
        self.subscription #prevent unused variable warning
    
    def convert_img(self, msg):
        bridge = CvBridge()
        cv_image = bridge.imgmsg_to_cv2(msg, "passthrough")
        arr8 = (cv_image/256).astype(np.uint8)
        image_enhanced = cv2.equalizeHist(arr8)
        colormap = cv2.applyColorMap(image_enhanced,  cv2.COLORMAP_TURBO)
        colormap_hsv = cv2.cvtColor(colormap, cv2.COLOR_BGR2HSV)
        return colormap_hsv
    
    def crop_img(self, img):
        img_center = img[0:img.shape[0] , int(img.shape[1]/3) : int(img.shape[1]/3) * 2 ]
        img_left = img[0:img.shape[0] , 40: int(img.shape[1]/3) ] #40 because of camera malfunction 
        img_right = img[0:img.shape[0] , int(img.shape[1]/3) * 2 : img.shape[1] ]
        return img_center, img_left, img_right

    def find_obstacles(self, mask, img):
        obstacle_contours, centroids  = [], []
        contours,hierarchy = cv2.findContours(mask, cv2.RETR_TREE, cv2.CHAIN_APPROX_SIMPLE)
        if len(contours) != 0:
            for contour in contours:
                if cv2.contourArea(contour) > 1000:
                    M  = cv2.moments(contour)
                    cx, cy = int(M['m10']/M['m00']), int(M['m01']/M['m00'])
                    centroids.append((cx, cy))
                    obstacle_contours.append(contour)

            #draw centroids and contours  
            for point in centroids: 
                cv2.circle(img, point, radius=0, color=(0, 0, 255), thickness=5)  
            cv2.drawContours(img, obstacle_contours, -1, (255,255,0), 2)
            
        return obstacle_contours, centroids, img

    def remove_ground(self, mask):
        #this code tries to remove ground #IMPROVEMENT NEEDED
        for i in range(len(mask)):
            if 0 not in mask[i]:
                cv2.rectangle(mask, (0, i - 60),(mask.shape[1], mask.shape[0]), (0,0,0), -1 )
                break
        return mask
    def mask_close_objects(self, img):
        lower_range = np.array([85,0,0])
        upper_range = np.array([130,255,255])
        mask = cv2.inRange(img, lower_range, upper_range)
        return mask

    def obstacle_avoid(self, img_center, img_left, img_right):

        
        mask_center = self.remove_ground(self.mask_close_objects(img_center))
        obstacle_contours_center, centroids_center, img_center = self.find_obstacles(mask_center, img_center)
        
        cv2.imshow('centroids and contours', img_center)
        cv2.waitKey(0)
        

        if self.flag_left:
            mask_right = self.remove_ground(self.mask_close_objects(img_right))            
            obstacle_contours_right, centroids_right, img_right = self.find_obstacles(mask_right, img_right)
            cv2.imshow('centroid_right', img_right)
            if len(centroids_right) != 0 and len(centroids_center) == 0:
                return "stop turning left, go straight"
            elif len(centroids_right) == 0 and len(centroids_center) == 0:
                self.flag_left = False
                return "return to node"
            else:
                return "keep turning left"
        elif self.flag_right:
            mask_left = self.remove_ground(self.mask_close_objects(img_left))
            obstacle_contours_left, centroids_left, img_left = self.find_obstacles(mask_left, img_left)
            cv2.imshow('centroid_left', img_left)
            if len(centroids_left) != 0 and len(centroids_center) == 0:
                return "stop turning right, go straight"
            elif len(centroids_left) == 0 and len(centroids_center) == 0:
                self.flag_right = False
                return "return to node"
            else:
                return "keep turning right"


        if len(centroids_center) == 0:
            return "go straight"
        elif len(centroids_center) == 1:  
            if centroids_center[0][0] < img_center.shape[1] / 2 :
                self.flag_right = True
                return "turn right"
            else:
                self.flag_left = True
                return "turn left"
        else:
            return "meer obstaklel"
               
    def resolve(self, msg):
        try:
            cv_image = self.convert_img(msg)
            img_center, img_left, img_right = self.crop_img(cv_image)
            command = self.obstacle_avoid(img_center, img_left, img_right) 

            msg = String()
            msg.data = command
            self.publisher.publish(msg)
            self.get_logger().info('Publishing: "%s"' % msg.data)
            
        except CvBridgeError as e:
            print(e)
        
                
def main(args=None):
    rclpy.init(args=args)
    closest_depth_publisher = Brake()
    rclpy.spin(closest_depth_publisher)
    closest_depth_publisher.destroy_node()
    rclpy.shutdown()

   
if __name__ == '__main__':

    main()
