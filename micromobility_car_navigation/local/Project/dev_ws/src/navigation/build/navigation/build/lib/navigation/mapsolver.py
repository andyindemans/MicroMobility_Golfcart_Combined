from astar import AStar
from micromobility_map import Node
import math

class MapSolver(AStar):
    def __init__(self):
        pass

    def heuristic_cost_estimate(self, current, goal):
        return math.sqrt((float(goal.decimalcoordinate.latitude) - float(current.decimalcoordinate.latitude)) ** 2 + (
                float(goal.decimalcoordinate.longtitude) - float(current.decimalcoordinate.longtitude)) ** 2)

    def distance_between(self, n1, n2):
        return 1

    def neighbors(self, node):
        return node.get_neighbours()



