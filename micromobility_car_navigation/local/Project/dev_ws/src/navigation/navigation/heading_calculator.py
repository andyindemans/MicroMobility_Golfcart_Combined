import math
import cv2 
import rclpy
import numpy as np
from rclpy.node import Node
from std_msgs.msg import String
from std_msgs.msg import Float64
from mm_interfaces.msg import CoordinateMsg
from mm_interfaces.srv import Proximity
from mm_interfaces.msg import CurrentNextLocation


class HeadingCalculator(Node):
    def __init__(self):
        super().__init__('heading_calculator')
        self.black_canvas = img = np.zeros((512,512,3), np.uint8)
        self.draw_compas()
        self.subscription = self.create_subscription(CurrentNextLocation, 'coorpair', self.calculate_heading_callback, 10)
        self.subscription #prevent unused variable warning
        self.publisher = self.create_publisher(Float64, 'next_heading', 10)
        self.get_logger().info("heading calculator running!")
        
        
    def draw_compas(self):
        font = cv2.FONT_HERSHEY_SIMPLEX
        cv2.putText(self.black_canvas,'Left',(10,30), font, 1,(0,0,255),2,cv2.LINE_AA)
        cv2.putText(self.black_canvas,'Right',(420,30), font, 1,(0,0,255),2,cv2.LINE_AA)
        
        
        mid = (int(self.black_canvas.shape[1]/2), int(self.black_canvas.shape[0]/2)) #mid image
        above = (int(self.black_canvas.shape[1]/2), int((self.black_canvas.shape[0]/2) - 100))
        below = (int(self.black_canvas.shape[1]/2), int((self.black_canvas.shape[0]/2) + 100))
        left = (int((self.black_canvas.shape[1]/2) - 100), int(self.black_canvas.shape[0]/2))
        right = (int((self.black_canvas.shape[1]/2) + 100), int(self.black_canvas.shape[0]/2))
        #testpoint = (int((self.black_canvas.shape[1]/2) + 100), int((self.black_canvas.shape[0]/2) - 90)) #delete for deploy
        
        cv2.line(self.black_canvas,mid,above,(255,0,0),5)
        cv2.line(self.black_canvas,mid,below,(255,0,0),5)
        cv2.line(self.black_canvas,mid,left,(255,0,0),5)
        cv2.line(self.black_canvas,mid,right,(255,0,0),5)
        #cv2.line(self.black_canvas,mid,testpoint,(0,0,255),5) #delete for deploy
        

    def show_compas(self, angle):
        copy_canvas = self.black_canvas.copy() 
        length = 150
        angle -= 90
        point1 = (int(copy_canvas.shape[1]/2), int(copy_canvas.shape[0]/2))
        point2 = ((int)(point1[0] + length * math.cos(angle * math.pi / 180.0)), (int)(point1[1] + length * math.sin(angle * math.pi / 180.0)))
        cv2.line(copy_canvas,point1,point2,(0,0,255),5)
        cv2.imshow('compas', copy_canvas)
        cv2.waitKey(0)

    def calculate_heading_callback(self, msg):
        heading = self.calculate_heading(msg.current_position.latitude, msg.next_position.latitude, msg.current_position.longitude, msg.next_position.longitude, msg.current_position.heading)
        heading_msg = Float64()
        heading_msg.data = heading
        self.show_compas(heading)
        self.publisher.publish(heading_msg)
        self.get_logger().info(f"Heading: {heading}")

    def calculate_heading(self, lat1, lat2, long1, long2, cart_bearing):
        lat1 = math.radians(lat1)
        lat2 = math.radians(lat2)
        delta_long = math.radians(long2 - long1)
        y = math.sin(delta_long) * math.cos(lat2)
        x = math.cos(lat1) * math.sin(lat2) - math.sin(lat1) * math.cos(lat2) * math.cos(delta_long)
        bearing = math.atan2(y, x)
        bearing = math.degrees(bearing)
        bearing = ((int(bearing) + 360) % 360)

        turn = abs(cart_bearing - bearing)
        if cart_bearing > bearing:
            turn *= -1

        return turn


def main(args=None):
    rclpy.init(args=args)
    heading_calculator = HeadingCalculator()
    #heading_calculator.publisher.publish(coordinate_msg)
    rclpy.spin(heading_calculator)
    
  

    heading_calculator.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
