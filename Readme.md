# ROS 2 Humble + Ignition Fortress: Thesis & Robotics Simulation

**Author:** Aditya Sinha  
**Institution:** IISER Bhopal  
**Focus:** ROS 2 • Robotics • Simulation • AI

---

## 📖 Project Overview

This repository represents a comprehensive robotics simulation framework using **ROS 2 Humble** and **Ignition Gazebo Fortress**. It serves as a dual-purpose project:
1.  **Original Thesis:** This repository was an original work named as ros2_ignition_thesis where they have used pioneer3d and other robot to demonstrate a warehouse simulation.
2.  **New Extensions (Current Work):** A modular development environment for the **TurtleBot3 Burger**, featuring custom worlds, rigid body physics, and manual ROS-to-Ignition bridging. Many more integrations will come in this repo.

---

## 📂 Workspace & Package Structure

The project is organized as follows:

```text
ros2_ws/
└── src/
    ├── ros2_ignition_thesis/
    │   ├── my_sim_tesi_gazebo/       # Python Source Code
    │   │   ├── models/           // contains all the models that has been used in the code
    │   │   ├── launch/          // ignore this for now  
    │   |   ├── world/
    │   │       └── my_world_backup.sdf            # Backup of base env
                └── my_world.sdf                   # Base simulation environment from where all the worlds have been derived.
                └── my_world_exp1.sdf              # World file for experiment-1
                └── my_world_exp2.sdf              # World file for experiment-2
                └── my_world_exp3.sdf
                └── my_world_exp4.sdf
                
    │   ├── turtlebot3_simulation/
    │   │   └── launch/      # Folder containing all the launch files..
    |   |   |       |__ turtlebot3_sim.lauch.py    # launch file for my_world_exp1.sdf and so on from here
    |   │   │       ├── simulation_world2.launch.py
    |   │   │       |___simulation_world3.launch.py
    |   │   │       └── simulation_world3.launch.py
    |   │   │       └── simulation_world1_husky.launch.py # This launch file has husky robot inside it
    │   ├── turtlebot3_control/
    │   │   ├── turtlebot3_control/                # contains controller script for turtlebot3_movements
    │   │   |       ├── robot_controller.py        # script


## Installation & Setup

### Prerequisites
* Ubuntu 22.04 LTS
* ROS 2 Humble
* Ignition Gazebo Fortress
* TurtleBot3 Packages (`ros-humble-turtlebot3*`)

### Build Instructions
```bash
# 1. Create Workspace
# 2. Clone Repository
git clone <my_REPO_URL> .

# 3. Install Dependencies
cd ..
rosdep install --from-paths src --ignore-src -r -y

# 4. Build
colcon build

# 5. Source
source install/setup.bash

### Lanch Instructions
In one terminal lanch: ros2 launch turtlebot3_simulation simulation_world2.launch.py
In another terminal run the controller: <move to this directory/turtlebot3_control> python3 robot_controller.py

test push

