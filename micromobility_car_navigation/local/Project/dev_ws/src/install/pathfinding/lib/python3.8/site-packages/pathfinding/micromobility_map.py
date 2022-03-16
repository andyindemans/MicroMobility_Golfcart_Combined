import pickle
import math
import sys


#Graph class used to represent map
class Graph:
    def __init__(self):
        self.nodes = []

    def add_node(self, node):
        self.nodes.append(node)

    def get_nodes(self):
        return self.nodes

    def print_graph(self):
        for node in self.nodes:
            print(node)

    def get_euclidean_distance(self, coordinate1, coordinate2):
        # sqrt( (x2-x1)^2 + (y2-y1)^2 )
        return math.sqrt((float(coordinate2.latitude) - float(coordinate1.latitude)) ** 2 + (
                float(coordinate2.longtitude) - float(coordinate1.longtitude)) ** 2)

    def relate_nodes(self):
        proximity = 1.625666666704717e-05
        for node in self.nodes:
            # if counter == 3:
            #     break
            # counter += 1
            for compare_node in self.nodes:
                if node.id != compare_node.id:
                    eucl_dis = self.get_euclidean_distance(node.decimalcoordinate, compare_node.decimalcoordinate)
                    print(f"From: {node.id} To: {compare_node.id} -> {eucl_dis}")
                    if eucl_dis < proximity:
                        print("pass")
                        node.add_neighbour(compare_node)


class DecimalCoordinate:
    def __init__(self, longtitude, latitude):
        self.longtitude = longtitude
        self.latitude = latitude


#Node class (used as node in Graph class)
class Node:
    def __init__(self, decimalcoordinate, label, id):
        self.neighbours = []
        self.id = id
        self.decimalcoordinate = decimalcoordinate
        self.label = label


    def get_neighbours(self):
        return self.neighbours

    def add_neighbour(self, neighbour):
        self.neighbours.append(neighbour)

    def print_neighbours(self):
        print(f"Neighbours of node {self.label}")
        for neighbour in self.neighbours:
            print(f"    -> {neighbour.label} //")

    def __str__(self):
        return f"Latitude: {self.decimalcoordinate.latitude} \t Longtitude: {self.decimalcoordinate.longtitude} Label: {self.label} N: {len(self.neighbours)} ID: {self.id}"


graph_object_file = "/home/user/Projects/data/graph_object.pkl"

#function to serialize graph
def read_graph(object_filename=graph_object_file):
    with open(object_filename, 'rb') as graph_object_file:
        graph = pickle.load(graph_object_file)
        return graph

#function to read serialized graph
def save_graph(graph, object_filename=graph_object_file):
    print("serializing...")
    with open(object_filename, 'wb') as graph_object_file:
        pickle.dump(graph, graph_object_file)

def path_to_csv(path):
    open("../data/path.csv", 'w').close()
    f = open("../data/path.csv", "a")
    for node in path:
        f.write(node.decimalcoordinate.longtitude)
        f.write(",")
        f.write(node.decimalcoordinate.latitude)
        f.write("\n")

    f.close()