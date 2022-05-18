import rclpy
import os
from rclpy.node import Node
from std_msgs.msg import String
from std_msgs.msg import Float64
from std_msgs.msg import Bool
from mm_interfaces.msg import CarInstructions
import logging
from logging.handlers import RotatingFileHandler

logger = logging.getLogger(__name__)


class PilotNodeWithoutOa(Node):

    def __init__(self):
        super().__init__('pilot_node')

        log_file = "../output/logs/" + "navigation.log"

        log_format = logging.Formatter("%(asctime)s - %(name)s - %(levelname)s - %(message)s")
        rotating_file_handler = RotatingFileHandler(log_file, mode="w", maxBytes=1000000 * 10, backupCount=7)
        rotating_file_handler.setFormatter(log_format)
        rotating_file_handler.setLevel(logging.DEBUG)  # Levels: DEBUG < INFO < WARNING < ERROR

        root_logger = logging.getLogger("")
        root_logger.setLevel(logging.DEBUG)
        root_logger.addHandler(rotating_file_handler)

        logger.info("\nNEW RUN IN PROGRESS")

        self.subscription = self.create_subscription(Float64, 'next_heading', self.next_heading_callback, 10)

        self.car_instructions_publisher = self.create_publisher(CarInstructions, 'instructions', 10)
        self.final_car_instructions_publisher = self.create_publisher(CarInstructions, 'finalCarInstruction', 10)
        self.return_to_node_publisher = self.create_publisher(Bool, 'return_to_node', 10)

        self.angle = float(os.environ['AVOIDANCE_DISTANCE'])
        self.range = [-180.0, 180.0]
        self.throttle = int(os.environ['DEFAULT_THROTTLE'])
        self.next_heading = 0
        self.return_to_node_busy = False
        logger.debug("Pilot running")

    def next_heading_callback(self, msg):
        self.get_logger().info('Next heading: "%s"' % msg.data)
        self.next_heading = msg.data
        msg = CarInstructions()
        msg.steering_range = self.range
        msg.throttle = self.throttle
        msg.angle = self.next_heading

        #self.get_logger().info("angle: " + str(msg.angle))
        #self.get_logger().info("throttle: " + str(msg.throttle))
        #self.get_logger().info("in next heading")
        self.get_logger().info("to car, angle: " + str(msg.angle) + " and throttle: " + str(msg.throttle))
        logger.debug("to car, angle: " + str(msg.angle) + " and throttle: " + str(msg.throttle))
        self.car_instructions_publisher.publish(msg)
        self.final_car_instructions_publisher.publish(msg)
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

