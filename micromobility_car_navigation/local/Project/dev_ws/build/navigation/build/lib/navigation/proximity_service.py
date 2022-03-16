
import rclpy
from rclpy.node import Node
from mm_interfaces.srv import Proximity
from math import radians, cos, sin, asin, sqrt

# Use follow command to test service 

'''
ros2 service call /proximity_service mm_interfaces/srv/Proximity "{current_position: {latitude: 50.95265, longitude: 5.35294, heading: 404}, next_node: {latitude: 50.95273, longitude: 5.35298, heading: 404}}"
'''

class Proximity_service(Node):
    def __init__(self):
        super().__init__('proximity_service')
        self.srv = self.create_service(Proximity, 'proximity_service', self.resolve)
        print("Proximity service running... \n")

    def resolve(self, request, response):
        response.distance_to  = self.get_haversine_distance(request.current_position, request.next_node)
        return response
    
    def get_haversine_distance(self, coordinate1, coordinate2):
        # convert decimal degrees to radians 
        lon1, lat1, lon2, lat2 = map(radians, [coordinate1.longitude, coordinate1.latitude, coordinate2.longitude, coordinate2.latitude])

        # haversine formula 
        dlon, dlat = lon2 - lon1, lat2 - lat1 
        a = sin(dlat/2)**2 + cos(lat1) * cos(lat2) * sin(dlon/2)**2
        c = 2 * asin(sqrt(a)) 

        # Radius of earth in kilometers is 6371
        distance_in_m = 6371 * c * 1000

        #Round up to 3 digits after the comma 
        distance_in_m = "%.3f" % distance_in_m
        print(f"calculated distance: {distance_in_m}")
        return float(distance_in_m)

def main(args=None):
    rclpy.init(args=args)
    proximity_service = Proximity_service()

    rclpy.spin(proximity_service)
    rclpy.shutdown()

if __name__ == '__main__':
    main()
