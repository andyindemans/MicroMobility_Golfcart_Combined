import csv
import math
import micromobility_map
from micromobility_map import Graph, Node, DecimalCoordinate
import sys

path = "./capture.csv"

def csv_to_graph():
    with open(f'{path}') as csv_file:
        csv_reader = csv.reader(csv_file, delimiter=',')
        graph = Graph()
        id = 0
        for row in csv_reader:
            decimalcoordinate = DecimalCoordinate(row[0], row[1])
            node = Node(decimalcoordinate, "@Corda", id)
            id += 1
            graph.add_node(node)

        return graph

def main():
    graph = csv_to_graph()
    graph.relate_nodes()
    graph.print_graph()
    sys.setrecursionlimit(100000)
    micromobility_map.save_graph(graph)


       
if __name__ == "__main__":
    main()
