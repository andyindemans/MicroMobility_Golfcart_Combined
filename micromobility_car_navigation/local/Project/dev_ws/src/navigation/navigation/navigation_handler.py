import bluetooth, subprocess, csv
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from std_msgs.msg import Float64
from std_msgs.msg import Int64
from std_msgs.msg import Bool
from std_msgs.msg import Int64MultiArray
from mm_interfaces.msg import CoordinateMsg
from mm_interfaces.msg import CurrentNextLocation
from mm_interfaces.srv import Pathfinding
from .coordinate import Coordinate
import pickle
import math
import os
import logging
from logging.handlers import RotatingFileHandler

logger = logging.getLogger(__name__)

class NavigationHandler(Node):
    def __init__(self):
        super().__init__('navigation_handler')

        log_file = "../output/logs/" + "navigation.log"

        log_format = logging.Formatter("%(asctime)s - %(name)s - %(levelname)s - %(message)s")
        rotating_file_handler = RotatingFileHandler(log_file, mode="w", maxBytes=1000000 * 10, backupCount=7)
        rotating_file_handler.setFormatter(log_format)
        rotating_file_handler.setLevel(logging.DEBUG)  # Levels: DEBUG < INFO < WARNING < ERROR

        root_logger = logging.getLogger("")
        root_logger.setLevel(logging.DEBUG)
        root_logger.addHandler(rotating_file_handler)

        logger.info("\nNEW RUN IN PROGRESS")

        # self.start_lat = 50.9522165216667
        # self.start_long = 5.35655798333333
        self.start_lat = None
        self.start_long = None
        self.current_location_subscription = self.create_subscription(CoordinateMsg, 'current_location',
                                                                      self.current_location_callback, 10)
        self.current_location_subscription  # prevent unused variable warning
        self.destination_subscription = self.create_subscription(Int64, 'destination_id', self.destination_id_callback,
                                                                 10)
        self.next_node_reached_subscription = self.create_subscription(Float64, 'distance_to_node',
                                                                       self.distance_to_node_callback, 10)

        self.proximity = int(os.environ['PROXIMITY'])

        self.client = self.create_client(Pathfinding, '/pathfinding_service')
        while not self.client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('service not available, waiting again...')

        self.pathfinding_request = Pathfinding.Request()

        self.publisher = self.create_publisher(CurrentNextLocation, 'coorpair', 10)
        self.path_publisher = self.create_publisher(Int64MultiArray, 'path', 10)

        self.delete_next_node_subscriber = self.create_subscription(Bool, 'delete_next_node',
                                                                    self.delete_next_node_callback, 10)

        self.path = None
        self.path_ids = []
        self.destination_id = None
        logger.debug("Navigation Handler running")
        #self.get_logger().info("navigation handler running!")

    def destination_id_callback(self, msg):
        self.destination_id = msg.data
        logger.debug(f'Recieved destination ID: {msg.data} from dashboard')
        # self.get_logger().info(f'Recieved destination ID: {msg.data} from dashboard')

    def distance_to_node_callback(self, msg):
        logger.debug(str(msg.data))
        # self.get_logger().info(str(msg.data))
        if len(self.path) != 0:
            if msg.data < self.proximity:
                self.get_logger().info(f"{self.path[0]} reached!")
                del self.path[0]
        else:
            print("End node reached!")

    def current_location_callback(self, msg):
        # logger.debug(f"current location: {msg.latitude}, {msg.longitude}")
        # self.get_logger().info(f"current location: {msg.latitude}, {msg.longitude}")
        if self.start_lat == None or self.start_long == None:
            self.start_lat = msg.latitude
            self.start_long = msg.longitude

        if self.path is not None:
            proximity_msg = CurrentNextLocation()
            proximity_msg.current_position = msg
            proximity_msg.next_position.latitude = self.path[0].latitude
            proximity_msg.next_position.longitude = self.path[0].longitude
            # self.get_logger().info(f"distance between {msg.latitude},{msg.longitude} and {self.path[0].latitude}, {self.path[0].longitude}")
            self.publisher.publish(proximity_msg)

    def send_request(self):
        logger.info(f"Destination ID is set to {self.destination_id}")
        #self.get_logger().info(f"Destination ID is set to {self.destination_id}")
        self.pathfinding_request.current_lat = self.start_lat
        self.pathfinding_request.current_long = self.start_long
        # self.pathfinding_request.end_node_id = int(os.environ['END_NODE_ID'])  #will be replaced by user input

        self.pathfinding_request.end_node_id = self.destination_id

        wait = self.client.call_async(self.pathfinding_request)
        rclpy.spin_until_future_complete(self, wait)
        if wait.result() is not None:
            logger.debug(f"Received path from pathfinding_service")
            #self.get_logger().info(f"Received path from pathfinding_service")
            self.path = []
            path = []
            path = wait.result().path
            for node in path:
                coordinate = Coordinate(node.id, node.latitude, node.longitude)
                self.path.append(coordinate)
                self.path_ids.append(int(coordinate.id))

            path_msg = Int64MultiArray()
            path_msg.data = self.path_ids
            self.path_publisher.publish(path_msg)
            logger.debug("published path ids")
            #self.get_logger().info("published path ids")
        else:
            self.get_logger().info("Request failed")

    def delete_next_node_callback(self, msg):
        if msg.data == True:
            del self.path[0]


def main(args=None):
    rclpy.init(args=args)
    navigation_handler = NavigationHandler()
    while (navigation_handler.destination_id == None):
        rclpy.spin_once(navigation_handler)
    navigation_handler.send_request()
    rclpy.spin(navigation_handler)
    navigation_handler.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
