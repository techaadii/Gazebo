#!/usr/bin/env python3

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, ExecuteProcess
from launch.substitutions import LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare

def generate_launch_description():
    
    # 1. SETUP PACKAGE
    package_name = 'turtlebot3_simulation'
    pkg_share = FindPackageShare(package_name)
    
    # 2. DEFINE THE WORLD (Change this line for Exp 3 and Exp 4)
    world_arg = DeclareLaunchArgument(
        'world',
        default_value='my_world_exp4.sdf',  # <--- CHANGED HERE
        description='World file name (in worlds/ directory)'
    )
    
    use_sim_time_arg = DeclareLaunchArgument(
        'use_sim_time',
        default_value='true',
        description='Use simulation time'
    )
    
    world_file = PathJoinSubstitution([
        pkg_share,
        'worlds',
        LaunchConfiguration('world')
    ])
    
    # 3. LAUNCH GAZEBO
    gazebo = ExecuteProcess(
        cmd=['ign', 'gazebo', world_file, '-r'],
        output='screen',
    )
    
    # 4. BRIDGE: CMD_VEL
    bridge_cmd_vel = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=['/cmd_vel@geometry_msgs/msg/Twist@gz.msgs.Twist'],
        parameters=[
            {'use_sim_time': LaunchConfiguration('use_sim_time')},
            {'qos_overrides./cmd_vel.publisher.reliability': 'best_effort'}
        ],
        output='screen'
    )
    
    # 5. BRIDGE: ODOMETRY
    bridge_odom = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=['/model/turtlebot3_Burger/odometry@nav_msgs/msg/Odometry[gz.msgs.Odometry]'],
        remappings=[('/model/turtlebot3_Burger/odometry', '/odom')],
        output='screen'
    )
    
    # 6. BRIDGE: LIDAR
    # Note: Ensure your SDF world name is still 'my_world', otherwise change '/world/my_world/...' below
    bridge_scan = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=['/world/my_world/model/turtlebot3_Burger/link/lidar/sensor/hls_lfcd_lds/scan@sensor_msgs/msg/LaserScan[gz.msgs.LaserScan]'],
        remappings=[('/world/my_world/model/turtlebot3_Burger/link/lidar/sensor/hls_lfcd_lds/scan', '/scan')],
        output='screen'
    )
    
    # 7. BRIDGE: CAMERA (ADDED - Essential for your Thesis/Project)
    bridge_camera = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=['/camera/image_raw@sensor_msgs/msg/Image@gz.msgs.Image'],
        output='screen'
    )
    
    # 8. BRIDGE: CLOCK
    bridge_clock = Node(
        package='ros_gz_bridge',
        executable='parameter_bridge',
        arguments=['/clock@rosgraph_msgs/msg/Clock[gz.msgs.Clock]'],
        output='screen'
    )
    
    return LaunchDescription([
        world_arg,
        use_sim_time_arg,
        gazebo,
        bridge_cmd_vel,
        bridge_odom,
        bridge_scan,
        bridge_camera, # <--- Added to return list
        bridge_clock,
    ])