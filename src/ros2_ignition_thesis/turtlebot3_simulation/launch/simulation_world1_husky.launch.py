#!/usr/bin/env python3

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare
import os
from launch.actions import SetEnvironmentVariable



def generate_launch_description():

    package_name = 'my_sim_tesi_gazebo'
    pkg_share = FindPackageShare(package_name)

    world_arg = DeclareLaunchArgument(
        'world',
        default_value='my_world_exp1_husky.sdf',
        description='World file'
    )

    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value='true'
    )

    world_file = PathJoinSubstitution([
        pkg_share,
        'worlds',
        LaunchConfiguration('world')
    ])

    gazebo = ExecuteProcess(
        cmd=['ign', 'gazebo', world_file, '-r'],
        output='screen'
    )

    # CMD_VEL (ROS → Ignition)
    bridge_cmd_vel = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/cmd_vel@geometry_msgs/msg/Twist@gz.msgs.Twist'
        ],
        parameters=[{'use_sim_time': LaunchConfiguration('use_sim_time')}],
        output='screen'
    )

    # ODOMETRY (Ignition → ROS)
    bridge_odom = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/model/husky/odometry@nav_msgs/msg/Odometry[gz.msgs.Odometry]'
        ],
        remappings=[
            ('/model/husky/odometry', '/odom')
        ],
        output='screen'
    )

    # TF (Ignition → ROS)
    bridge_tf = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/tf@tf2_msgs/msg/TFMessage[gz.msgs.Pose_V]'
        ],
        output='screen'
    )

    # CLOCK
    bridge_clock = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=[
            '/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock]'
        ],
        output='screen'
    )

    return LaunchDescription([
        world_arg,
        use_sim_time_arg,
        gazebo,
        bridge_cmd_vel,
        bridge_odom,
        bridge_tf,
        bridge_clock,
    ])
