from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='navigation',
            executable='gps_publisher'
        ),
        Node(
            package='navigation',
            executable='navigation_handler'
        ),
        Node(
            package='navigation',
            executable='heading_calculator'
        ),
        Node(
            package='navigation',
            executable='proximity_calculator'
        )
    ])
