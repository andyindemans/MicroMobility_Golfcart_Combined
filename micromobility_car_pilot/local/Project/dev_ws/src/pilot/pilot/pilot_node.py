import rclpy
import os
from rclpy.node import Node
from std_msgs.msg import String
from std_msgs.msg import Float64
from std_msgs.msg import Bool
from mm_interfaces.msg import CarInstructions

class PilotNode(Node):

    def __init__(self):
        super().__init__('pilot_node')
        self.subscription = self.create_subscription(Float64, 'next_heading', self.next_heading_callback, 10)
        self.obstacle_avoidance_busy_subscription = self.create_subscription(Bool, 'obstacle_avoidance_busy', self.obstacle_avoidance_busy_callback, 10)
        self.avoidance_instructions_subscription = self.create_subscription(String, 'avoidance_instructions', self.avoidance_instructions_callback, 10)
        self.car_instructions_publisher = self.create_publisher(CarInstructions, 'instructions', 10)
        self.return_to_node_publisher = self.create_publisher(Bool, 'return_to_node', 10)
        self.avoidance_busy = False
        self.angle = float(os.environ['AVOIDANCE_DISTANCE'])
        self.range = [-180.0 , 180.0]
        self.throttle = int(os.environ['DEFAULT_THROTTLE'])
        self.next_heading = 0
        self.return_to_node_busy = False

    def next_heading_callback(self, msg):
        self.get_logger().info('Next heading: "%s"' % msg.data)
        self.next_heading = msg.data
        if not self.avoidance_busy and not self.return_to_node_busy:
            msg = CarInstructions()
            msg.steering_range = self.range
            msg.throttle = self.throttle
            msg.angle = self.next_heading
            
            self.get_logger().info("in next heading")
            self.car_instructions_publisher.publish(msg)
            #wordt deze callback ondertussen uitgevoerd?

    def obstacle_avoidance_busy_callback(self, msg):
        self.get_logger().info('Obstacle avoidance busy: "%s"' % msg.data)
        self.avoidance_busy = msg.data
    
    def avoidance_instructions_callback(self, msg):
        if self.avoidance_busy:
            car_msg = CarInstructions()
            car_msg.steering_range = self.range
            car_msg.throttle = self.throttle
            if msg.data == "left":
                car_msg.steering = -self.angle
                self.get_logger().info("left")
            elif msg.data == "right":
                car_msg.steering = self.angle
                self.get_logger().info("right")
            elif msg.data == "straight":
                car_msg.steering = 0.0
                self.get_logger().info("straight")
            elif msg.data == "return":
                self.get_logger().info("return to node")
                self.return_to_node()
            
            self.car_instructions_publisher.publish(car_msg)

    
    def return_to_node(self):
        #hier code die even kan duren
        max_angle = 45
        self.return_to_node_busy = True
        while self.next_heading < -max_angle or self.next_heading > max_angle:
            self.get_logger().info("in while loop")
            msg = Bool()
            msg.data = True
            self.inf
            self.return_to_node_publisher.publish(msg)
            

        return_to_node_busy = False

        


def main(args=None):
    rclpy.init(args=args)

    pilot_node = PilotNode()

    rclpy.spin(pilot_node)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    pilot_node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

