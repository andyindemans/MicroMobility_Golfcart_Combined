import math
import rclpy
from rclpy.node import Node
from mm_interfaces.srv import HeadingCalculator

class HeadingCalculatorService(Node):
    def __init__(self):
        super().__init__('heading_calculator_service')
        self.srv = self.create_service(HeadingCalculator, 'heading_calculator_service', self.calculate_heading_callback)
        print("heading calculator service running...")
        print("send request to /heading_calculator_service")
        

    def calculate_heading_callback(self, request, response):
        cart_bearing = request.cart_bearing
        cart_lat = request.cart_lat
        cart_long = request.cart_long
        next_node_lat = request.next_node_lat
        next_node_long = request.next_node_long
        turn_angle = self.calculate_bearing(cart_lat, next_node_lat, cart_long, next_node_long, cart_bearing)
        response.turn_value = turn_angle
        print(f"received request with values {request.cart_bearing}, {request.cart_lat}, {request.cart_long}, {request.next_node_lat}, {request.next_node_long}")
        print(f"sending back response with value  {response} ")
        return response

    def calculate_bearing(self, lat1, lat2, long1, long2, cart_bearing):
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

    heading_service = HeadingCalculatorService()

    rclpy.spin(heading_service)

    rclpy.shutdown()

if __name__ == '__main__':
    main()