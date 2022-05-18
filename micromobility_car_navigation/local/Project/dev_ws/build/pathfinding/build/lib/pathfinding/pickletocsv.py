import pickle as pkl
import pandas as pd
import csv
from six.moves import cPickle as pickle
import numpy as np

graph_object_file = "/home/jan/Documents/MicroMobility_Golfcart_Combined/micromobility_car_navigation/local/Project/data/graph_object.pkl"
csv_path = "/home/jan/Documents/MicroMobility_Golfcart_Combined/micromobility_car_navigation/local/Project/data"



df2 = pd.read_pickle(graph_object_file)
print(df2)