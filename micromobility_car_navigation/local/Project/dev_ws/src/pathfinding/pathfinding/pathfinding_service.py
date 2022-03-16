from mm_interfaces.srv import Pathfinding
from mm_interfaces.msg import CoordinateMsg
import micromobility_map
import math
from mapsolver import MapSolver

import rclpy
from rclpy.node import Node

class PathfindingService(Node):
    def __init__(self):
        super().__init__('pathfinding_service')
        self.srv = self.create_service(Pathfinding, 'pathfinding_service', self.find_path_callback)
        self.graph = micromobility_map.read_graph()
        self.nodes = self.graph.get_nodes()
        self.nodes.sort(key=lambda x: x.id, reverse=False)
        print("pathfinding service running...")
        print("send start_node_id, end_node_id to /pathfinding_service")

    def find_start_node(self, current_long, current_lat):
        closest_prox = 1000000
        closest_node = None
        for node in self.graph.nodes:
            newprox = self.get_euclidean_distance(current_lat, current_long, node.decimalcoordinate.latitude, node.decimalcoordinate.longtitude)
            if newprox < closest_prox:
                closest_prox = newprox
                closest_node = node
        return closest_node.id

    def get_euclidean_distance(self, current_lat, current_long, node_lat, node_long):    
        return math.sqrt((float(node_lat) - float(current_lat)) ** 2 + (
                float(node_long) - float(current_long)) ** 2)
        
        
    def find_path_callback(self, request, response):
        start_node = self.nodes[self.find_start_node(request.current_lat, request.current_long)]
        end_node = self.nodes[request.end_node_id]
        self.get_logger().info(str(start_node))
        self.get_logger().info(str(end_node))
        path = list(MapSolver.astar(MapSolver(),start_node, end_node, self.graph))
        #micromobility_map.path_to_csv(path)
        
        for n in path:
            coordinate_msg = CoordinateMsg()
            coordinate_msg.longitude = float(n.decimalcoordinate.latitude)
            coordinate_msg.latitude = float(n.decimalcoordinate.longtitude)
            coordinate_msg.heading = float(404)
            coordinate_msg.id = int(n.id)
            response.path.append(coordinate_msg)

        self.get_logger().info(f"returned path from {start_node.id} to {end_node.id}")
        return response

def main(args=None):
    rclpy.init(args=args)

    pathfinding_service = PathfindingService()

    rclpy.spin(pathfinding_service)

    rclpy.shutdown()

if __name__ == '__main__':
    main()
