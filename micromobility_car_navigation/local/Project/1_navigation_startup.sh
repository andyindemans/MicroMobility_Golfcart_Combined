cd dev_ws
colcon build
. install/setup.bash
export PYTHONPATH="${PYTHONPATH}:/home/user/Projects/dev_ws/src/pathfinding/pathfinding/"

#tmux
session="navigation"
tmux new-session -d -s $session
tmux rename-window -t 0 'navigation handler'
tmux send-keys -t 'navigation handler' 'cd src' C-m
tmux send-keys -t 'navigation handler' 'cd launch' C-m 
tmux send-keys -t 'navigation handler' 'ros2 launch navigation_launch.py' C-m
tmux new-window -t $session:1 -n 'pathfinding service'
tmux send-keys -t 'pathfinding service' 'ros2 run pathfinding pathfinding_service' C-m
tmux attach-session -t $SESSION:0



