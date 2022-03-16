import rclpy
from rclpy.node import Node
from mm_interfaces.srv import Pathfinding
import micromobility_map
import math
from mapsolver import MapSolver

class PathfindingService(Node):
    def __init__(self):
        super().__init__('pathfinding_service')
        self.srv = self.create_service(Pathfinding, 'pathfinding', self.find_path_callback)
        self.graph = micromobility_map.read_graph()
        self.nodes = self.graph.get_nodes()

    def find_path_callback(self, request, response):
        start_node = self.nodes[request.start_node_id]
        end_node = self.nodes[request.end_node_id]
        path = list(MapSolver.astar(MapSolver(), start_node, end_node, self.graph))
        for n in path:
            response.path.append(n.id)

        return response


def main(args=None):
    rclpy.init(args=args)
    pathfinding_service = PathfindingService()
    rclpy.spin(pathfinding_service)
    rclpy.shutdown()

if __name__ == '__main__':
    main()