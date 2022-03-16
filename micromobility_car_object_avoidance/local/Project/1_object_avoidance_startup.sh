cd dev_ws
colcon build
. install/setup.bash

session="object_avoidance"
tmux new-session -d -s $session
tmux rename-window -t 0 'realsense_startup'
tmux send-keys -t 'realsense_startup' 'ros2 launch realsense2_camera rs_launch.py' C-m
tmux new-window -t $session:1 -n 'object avoidance node'
tmux send-keys -t 'object avoidance node' 'ros2 run avoidance obstacle_avoidance' C-m
tmux attach-session -t $SESSION:0

