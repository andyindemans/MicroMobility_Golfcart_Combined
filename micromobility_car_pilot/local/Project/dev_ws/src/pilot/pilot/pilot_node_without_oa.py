import rclpy
import os
from rclpy.node import Node
from std_msgs.msg import String
from std_msgs.msg import Float64
from std_msgs.msg import Bool
from mm_interfaces.msg import CarInstructions


class PilotNodeWithoutOa(Node):

    def __init__(self):
        super().__init__('pilot_node')
        self.subscription = self.create_subscription(Float64, 'next_heading', self.next_heading_callback, 10)

        self.car_instructions_publisher = self.create_publisher(CarInstructions, 'instructions', 10)
        self.return_to_node_publisher = self.create_publisher(Bool, 'return_to_node', 10)

        self.angle = float(os.environ['AVOIDANCE_DISTANCE'])
        self.range = [-180.0, 180.0]
        self.throttle = int(os.environ['DEFAULT_THROTTLE'])
        self.next_heading = 0
        self.return_to_node_busy = False

    def next_heading_callback(self, msg):
        self.get_logger().info('Next heading: "%s"' % msg.data)
        self.next_heading = msg.data
        msg = CarInstructions()
        msg.steering_range = self.range
        msg.throttle = self.throttle
        msg.angle = self.next_heading

        self.get_logger().info("in next heading")
        self.car_instructions_publisher.publish(msg)
        # wordt deze callback ondertussen uitgevoerd?


def main(args=None):
    rclpy.init(args=args)

    pilot_nodeWithoutOa = PilotNodeWithoutOa()

    rclpy.spin(pilot_nodeWithoutOa)

    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    pilot_nodeWithoutOa.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()

