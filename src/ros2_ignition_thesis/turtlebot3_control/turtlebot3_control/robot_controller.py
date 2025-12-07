#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
from nav_msgs.msg import Odometry
from sensor_msgs.msg import LaserScan
from std_srvs.srv import Trigger
import math
import time

class TurtleBot3Controller(Node):
    def __init__(self):
        super().__init__('turtlebot3_controller')
        
        # Publisher for velocity commands
        self.cmd_vel_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        
        # Subscribers for sensor data
        self.odom_sub = self.create_subscription(
            Odometry,
            '/odom',
            self.odom_callback,
            10
        )
        
        self.laser_sub = self.create_subscription(
            LaserScan,
            '/scan',
            self.laser_callback,
            10
        )
        
        # Services for control
        self.forward_srv = self.create_service(
            Trigger,
            'robot/move_forward',
            self.move_forward_callback
        )
        
        self.backward_srv = self.create_service(
            Trigger,
            'robot/move_backward',
            self.move_backward_callback
        )
        
        self.left_srv = self.create_service(
            Trigger,
            'robot/turn_left',
            self.turn_left_callback
        )
        
        self.right_srv = self.create_service(
            Trigger,
            'robot/turn_right',
            self.turn_right_callback
        )
        
        self.stop_srv = self.create_service(
            Trigger,
            'robot/stop',
            self.stop_callback
        )
        
        # Robot state variables
        self.current_pose = None
        self.current_velocity = None
        self.laser_data = None
        
        # Movement parameters
        self.linear_speed = 0.2  # m/s
        self.angular_speed = 0.5  # rad/s
        
        # Timer for continuous movement (if needed)
        self.movement_timer = None
        
        self.get_logger().info('TurtleBot3 Controller initialized')
        self.get_logger().info('Available services:')
        self.get_logger().info('  /robot/move_forward')
        self.get_logger().info('  /robot/move_backward')
        self.get_logger().info('  /robot/turn_left')
        self.get_logger().info('  /robot/turn_right')
        self.get_logger().info('  /robot/stop')
    
    def odom_callback(self, msg):
        """Callback for odometry data"""
        self.current_pose = msg.pose.pose
        self.current_velocity = msg.twist.twist
    
    def laser_callback(self, msg):
        """Callback for laser scan data"""
        self.laser_data = msg
    
    def publish_velocity(self, linear_x=0.0, angular_z=0.0):
        """Publish velocity command to the robot"""
        twist = Twist()
        twist.linear.x = linear_x
        twist.angular.z = angular_z
        self.cmd_vel_pub.publish(twist)
    
    def move_forward_callback(self, request, response):
        """Service callback to move forward"""
        self.get_logger().info('Moving forward')
        self.publish_velocity(self.linear_speed, 0.0)
        response.success = True
        response.message = 'Moving forward'
        return response
    
    def move_backward_callback(self, request, response):
        """Service callback to move backward"""
        self.get_logger().info('Moving backward')
        self.publish_velocity(-self.linear_speed, 0.0)
        response.success = True
        response.message = 'Moving backward'
        return response
    
    def turn_left_callback(self, request, response):
        """Service callback to turn left"""
        self.get_logger().info('Turning left')
        self.publish_velocity(0.0, self.angular_speed)
        response.success = True
        response.message = 'Turning left'
        return response
    
    def turn_right_callback(self, request, response):
        """Service callback to turn right"""
        self.get_logger().info('Turning right')
        self.publish_velocity(0.0, -self.angular_speed)
        response.success = True
        response.message = 'Turning right'
        return response
    
    def stop_callback(self, request, response):
        """Service callback to stop the robot"""
        self.get_logger().info('Stopping')
        self.publish_velocity(0.0, 0.0)
        response.success = True
        response.message = 'Robot stopped'
        return response
    
    # Additional utility functions
    
    def move_distance(self, distance, speed=None):
        """
        Move forward a specific distance
        
        Args:
            distance: Distance in meters (positive=forward, negative=backward)
            speed: Linear speed (optional, uses default if not provided)
        """
        if speed is None:
            speed = self.linear_speed
        
        if self.current_pose is None:
            self.get_logger().warning('No odometry data available')
            return False
        
        # Store starting position
        start_x = self.current_pose.position.x
        start_y = self.current_pose.position.y
        
        # Determine direction
        direction = 1 if distance > 0 else -1
        distance = abs(distance)
        
        rate = self.create_rate(10)  # 10 Hz
        
        while rclpy.ok():
            # Calculate distance traveled
            dx = self.current_pose.position.x - start_x
            dy = self.current_pose.position.y - start_y
            traveled = math.sqrt(dx*dx + dy*dy)
            
            if traveled >= distance:
                self.publish_velocity(0.0, 0.0)
                self.get_logger().info(f'Moved {traveled:.2f}m')
                return True
            
            # Continue moving
            self.publish_velocity(direction * speed, 0.0)
            rate.sleep()
        
        return False
    
    def rotate_angle(self, angle, angular_speed=None):
        """
        Rotate by a specific angle
        
        Args:
            angle: Angle in radians (positive=left, negative=right)
            angular_speed: Angular speed (optional)
        """
        if angular_speed is None:
            angular_speed = self.angular_speed
        
        if self.current_pose is None:
            self.get_logger().warning('No odometry data available')
            return False
        
        # Get starting orientation
        start_orientation = self.get_yaw_from_quaternion(self.current_pose.orientation)
        
        # Determine direction
        direction = 1 if angle > 0 else -1
        target_angle = abs(angle)
        
        rate = self.create_rate(10)  # 10 Hz
        
        while rclpy.ok():
            current_orientation = self.get_yaw_from_quaternion(self.current_pose.orientation)
            
            # Calculate angle rotated
            angle_diff = abs(self.normalize_angle(current_orientation - start_orientation))
            
            if angle_diff >= target_angle:
                self.publish_velocity(0.0, 0.0)
                self.get_logger().info(f'Rotated {math.degrees(angle_diff):.2f} degrees')
                return True
            
            # Continue rotating
            self.publish_velocity(0.0, direction * angular_speed)
            rate.sleep()
        
        return False
    
    def get_yaw_from_quaternion(self, quaternion):
        """Convert quaternion to yaw angle"""
        siny_cosp = 2 * (quaternion.w * quaternion.z + quaternion.x * quaternion.y)
        cosy_cosp = 1 - 2 * (quaternion.y * quaternion.y + quaternion.z * quaternion.z)
        return math.atan2(siny_cosp, cosy_cosp)
    
    def normalize_angle(self, angle):
        """Normalize angle to [-pi, pi]"""
        while angle > math.pi:
            angle -= 2 * math.pi
        while angle < -math.pi:
            angle += 2 * math.pi
        return angle
    
    def get_min_laser_distance(self, start_angle=-30, end_angle=30):
        """
        Get minimum distance from laser scan in a specific angle range
        
        Args:
            start_angle: Start angle in degrees
            end_angle: End angle in degrees
        
        Returns:
            Minimum distance in meters
        """
        if self.laser_data is None:
            return float('inf')
        
        # Convert angles to radians
        start_rad = math.radians(start_angle)
        end_rad = math.radians(end_angle)
        
        # Get angle range indices
        angle_min = self.laser_data.angle_min
        angle_increment = self.laser_data.angle_increment
        
        start_idx = int((start_rad - angle_min) / angle_increment)
        end_idx = int((end_rad - angle_min) / angle_increment)
        
        # Ensure indices are within bounds
        start_idx = max(0, start_idx)
        end_idx = min(len(self.laser_data.ranges) - 1, end_idx)
        
        # Get minimum distance in range
        min_dist = float('inf')
        for i in range(start_idx, end_idx + 1):
            if self.laser_data.ranges[i] > 0:  # Valid reading
                min_dist = min(min_dist, self.laser_data.ranges[i])
        
        return min_dist
    
    def obstacle_ahead(self, threshold=0.5):
        """Check if there's an obstacle ahead within threshold distance"""
        min_dist = self.get_min_laser_distance(-30, 30)
        return min_dist < threshold


def main(args=None):
    rclpy.init(args=args)
    controller = TurtleBot3Controller()
    
    try:
        rclpy.spin(controller)
    except KeyboardInterrupt:
        controller.get_logger().info('Shutting down')
    finally:
        controller.publish_velocity(0.0, 0.0)  # Stop the robot
        controller.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()