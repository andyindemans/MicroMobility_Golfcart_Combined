import rclpy
from rclpy.node import Node
from std_msgs.msg import Float64
from math import radians, cos, sin, asin, sqrt
from mm_interfaces.msg import CoordinateMsg
from mm_interfaces.msg import CurrentNextLocation


class Proximity_calculator(Node):
    def __init__(self):
        super().__init__('proximity_calculator')
        self.subscription = self.create_subscription(CurrentNextLocation, 'coorpair', self.resolve, 10)
        self.subscription  # prevent unused variable warning

        self.publisher = self.create_publisher(Float64, 'distance_to_node', 10)
        self.publisher  # prevent unused variable warning
        self.get_logger().info("proximity calculator running!")

    def resolve(self, msg):
        distance_to = Float64()
        distance_to.data = self.get_haversine_distance(msg.current_position, msg.next_position)
        self.publisher.publish(distance_to)

    def get_haversine_distance(self, coordinate1, coordinate2):
        # convert decimal degrees to radians 
        lon1, lat1, lon2, lat2 = map(radians, [coordinate1.longitude, coordinate1.latitude, coordinate2.longitude,
                                               coordinate2.latitude])

        # haversine formula 
        dlon, dlat = lon2 - lon1, lat2 - lat1
        a = sin(dlat / 2) ** 2 + cos(lat1) * cos(lat2) * sin(dlon / 2) ** 2
        c = 2 * asin(sqrt(a))

        # Radius of earth in kilometers is 6371
        distance_in_m = 6371 * c * 1000

        # Round up to 3 digits after the comma
        distance_in_m = "%.3f" % distance_in_m
        print(f"calculated distance: {distance_in_m}")
        return float(distance_in_m)


def main(args=None):
    rclpy.init(args=args)
    proximity_calculator = Proximity_calculator()

    rclpy.spin(proximity_calculator)
    proximity_calculator.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
