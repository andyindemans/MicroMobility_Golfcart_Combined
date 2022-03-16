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
        img_cropped = img[0:img.shape[0] , int(img.shape[1]/3) : int(img.shape[1]/3) * 2 ]
        return img_cropped

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

    def emergency_brake(self, img):
        lower_range = np.array([85,0,0])
        upper_range = np.array([130,255,255])
        mask = cv2.inRange(img, lower_range, upper_range)

        mask = self.remove_ground(mask)
        obstacle_contours, centroids, img = self.find_obstacles(mask, img)

        # cv2.imshow('centroids and contours', img)
        # cv2.waitKey(0)

        if len(centroids) == 0:
            return "letsgo"
        else:
            return "howlaa"

               
    def resolve(self, msg):
        try:
            cv_image = self.convert_img(msg)
            cv_image_cropped = self.crop_img(cv_image)
            command = self.emergency_brake(cv_image_cropped) 

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
