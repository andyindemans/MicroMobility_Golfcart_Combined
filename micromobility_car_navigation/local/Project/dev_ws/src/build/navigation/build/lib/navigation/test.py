import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from mm_interfaces.msg import CoordinateMsg
from mm_interfaces.srv import Proximity
from mm_interfaces.srv import HeadingCalculator
from mm_interfaces.srv import Pathfinding
import time


class Test(Node):
    def __init__(self):
        super().__init__('test')
        self.current_location = (0.0,0.0) #tuple with (lat, long) of current location
        self.current_heading = 0.0 #heading of cart 
        self.turn_value = None #angle the cart should turn to reach next node
        self.path = None #list of nodes the cart should follow to reach goal node
        self.next_node = (50.9322978, 5.3472735) #tuple with (lat, long) of next location
        self.start_node_id = 1
        self.goal_node_id = 25
        

        self.subscription = self.create_subscription(CoordinateMsg, 'current_location', self.current_location_callback, 10)
        self.subscription #prevent unused variable warning

        self.heading_client = self.create_client(HeadingCalculator, 'heading_calculator_service')
        while not self.heading_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')

        self.path_client = self.create_client(Pathfinding, 'pathfinding_service')
        
        self.heading_request = HeadingCalculator.Request()
        self.path_request = Pathfinding.Request()
        
    def send_heading_request(self):
        self.heading_request.cart_bearing = self.current_heading
        self.heading_request.cart_lat = self.current_location[0]
        self.heading_request.cart_long = self.current_location[1]
        self.heading_request.next_node_lat = self.next_node[0]
        self.heading_request.next_node_long = self.next_node[1]
        wait = self.heading_client.call_async(self.heading_request)
        rclpy.spin_until_future_complete(self, wait)
        self.turn_value = wait.result().turn_value
        
    def send_path_request(self):
        self.path_request.start_node_id = self.start_node_id
        self.path_request.end_node_id = self.goal_node_id
        #
        

    



    def current_location_callback(self, msg):
        #self.get_logger().info(f"Recieving: {msg.latitude}, {msg.longitude}, {msg.heading} ")
        self.current_location = (msg.latitude, msg.longitude)
        self.current_heading = msg.heading
        
        


def main(args=None):
    i = 0
    rclpy.init(args=args)
    node = Test()
    while rclpy.ok():
        node.send_heading_request()
        rclpy.spin_once(node)
        print(f"{node.turn_value} {time.time()}") 
        
        
        

        
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()