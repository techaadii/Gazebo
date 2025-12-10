#!/usr/bin/env python3

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    # Get package share directory
    pkg_share = FindPackageShare('my_sim_tesi_gazebo')
    
    # Declare launch arguments
    world_arg = DeclareLaunchArgument(
        'world',
        default_value='my_world_exp1.sdf',
        description='World file name'
    )
    
    # Build path to world file
    world_file = PathJoinSubstitution([
        pkg_share,
        'worlds',
        LaunchConfiguration('world')
    ])
    
    # Launch Ignition Gazebo with the world file
    gazebo = ExecuteProcess(
        cmd=['ign', 'gazebo', world_file, '-r'],
        output='screen'
    )
    
    # Bridge for cmd_vel (ROS to Gazebo)
    bridge_cmd_vel = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=['/cmd_vel@geometry_msgs/msg/Twist]gz.msgs.Twist'],
        output='screen'
    )
    
    # Bridge for odometry (Gazebo to ROS)
    bridge_odom = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=['/model/turtlebot3_Burger/odometry@nav_msgs/msg/Odometry[gz.msgs.Odometry'],
        remappings=[('/model/turtlebot3_Burger/odometry', '/odom')],
        output='screen'
    )
    
    # Bridge for laser scan (Gazebo to ROS)
    bridge_scan = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=['/world/my_world/model/turtlebot3_Burger/link/lidar/sensor/hls_lfcd_lds/scan@sensor_msgs/msg/LaserScan[gz.msgs.LaserScan'],
        remappings=[('/world/my_world/model/turtlebot3_Burger/link/lidar/sensor/hls_lfcd_lds/scan', '/scan')],
        output='screen'
    )
    
    return LaunchDescription([
        world_arg,
        gazebo,
        bridge_cmd_vel,
        bridge_odom,
        bridge_scan,
    ])
