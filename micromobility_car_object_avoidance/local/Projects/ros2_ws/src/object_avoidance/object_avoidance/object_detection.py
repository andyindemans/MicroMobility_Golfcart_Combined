# ROS2
import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from std_msgs.msg import Float64
from math import radians, cos, sin, asin, sqrt
from rclpy.qos import qos_profile_sensor_data
from sensor_msgs.msg import Image
from std_msgs.msg import Bool

# OpenCV + RealSense
import cv2
import pyrealsense2
from .realsense_camera import *

# Object detection
import tensorflow as tf
import pandas as pd
#import tensorflow_hub as hub

# System libraries
from os import path
import pathlib
import sys
import os
import asyncio

GUI_UPDATE_PERIOD = 100
class Object_Detection(Node):
    def __init__(self):
        super().__init__('object_detection')
        self.dc = DepthCamera() # Initialize Intel Realsense
        self.point = (320, 240) # Screen is 640x480, so we're selecting the middle point
        self.rgb_image = []
        self.depth_frame = []
        self.distance = 0
        self.emergency_stop = self.create_publisher(String, 'emergency_stop', 1)
        #self.detector = hub.load("https://tfhub.dev/tensorflow/efficientdet/lite2/detection/1")
        self.detector = tf.saved_model.load('./model/');
        self.show_frames()

    def show_distance(self, event, x, y, args, params):
        self.point = (x, y)


    def show_frames(self):
        while True:
            ret, self.depth_frame, self.rgb_image = self.dc.get_frame()

            # Show distance for a specific point
            cv2.circle(self.rgb_image, self.point, 4, (0, 0, 255))
            self.distance = self.depth_frame[self.point[1], self.point[0]]
            self.object_detection()

            # Display measured distance
            cv2.putText(self.rgb_image, "{}mm".format(self.distance), (self.point[0], self.point[1] - 20), cv2.FONT_HERSHEY_PLAIN, 2, (255, 255, 0), 2)

            cv2.imshow("rgb_feed", self.rgb_image)
            key = cv2.waitKey(GUI_UPDATE_PERIOD)
            if key == 27:
                break

    def object_detection(self):
        rgb_tensor = tf.convert_to_tensor(self.rgb_image, dtype=tf.uint8)

        #Add dims to rgb_tensor
        rgb_tensor = tf.expand_dims(rgb_tensor , 0)

        boxes, scores, classes, num_detections = self.detector(rgb_tensor)

        pred_boxes = boxes.numpy()[0].astype('int')
        pred_scores = scores.numpy()[0]

        closest_object = (320, 240) # Point for tracking objects

       #loop throughout the detections and place a box around it
        for score, (ymin,xmin,ymax,xmax)in zip(pred_scores, pred_boxes):
            if score < 0.5:
                continue

            point = (int((xmax + xmin) / 2), int((ymax + ymin) / 2))
            object_distance = self.depth_frame[point[1], point[0]]
            if object_distance < self.distance:
                self.distance = object_distance
                closest_object = point

            img_boxes = cv2.rectangle(self.rgb_image,(xmin, ymax),(xmax, ymin),(0,255,0),1)
            font = cv2.FONT_HERSHEY_SIMPLEX

        self.point = closest_object
        if (self.distance < 400 and self.distance != 0):
            print("Too close! Stopping...")
            self.emergency_stop.publish("STOP")

def main():
    # ROS2 init
    rclpy.init(args=None)
    node = Object_Detection()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
