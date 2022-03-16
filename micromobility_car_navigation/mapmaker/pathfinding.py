import micromobility_map
import math
from mapsolver import MapSolver

def main():
    graph = micromobility_map.read_graph()
    nodes = graph.get_nodes()
    start_node = nodes[1]
    end_node = nodes[50]
    path = list(MapSolver.astar(MapSolver(),start_node, end_node, graph))
    micromobility_map.path_tp_csv(path)
    for n in path:
        print(n.id)



if __name__ == "__main__":
    main()
