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

    def find_path_callback(self, request, response):
        start_node = self.nodes[request.start_node_id]
        end_node = self.nodes[request.end_node_id]
        path = list(MapSolver.astar(MapSolver(),start_node, end_node, self.graph))
        #micromobility_map.path_to_csv(path)
        
        for n in path:
            coordinate_msg = CoordinateMsg()
            coordinate_msg.latitude = float(n.decimalcoordinate.latitude)
            coordinate_msg.longitude = float(n.decimalcoordinate.longtitude)
            coordinate_msg.heading = float(404)
            response.path.append(coordinate_msg)
        return response

def main(args=None):
    rclpy.init(args=args)

    pathfinding_service = PathfindingService()

    rclpy.spin(pathfinding_service)

    rclpy.shutdown()

if __name__ == '__main__':
    main()
