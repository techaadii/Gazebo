#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist
import time

class TurtleBotCommander(Node):
    def __init__(self):
        super().__init__('turtlebot_commander')
        
        # 1. Create a publisher to the topic defined in your bridge
        # Your launch file bridges: /cmd_vel -> geometry_msgs/msg/Twist
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)
        
        # Log that we are ready
        self.get_logger().info('TurtleBot Commander Node Started')

    def publish_cmd(self, linear_x, angular_z):
        """Helper function to create and publish the Twist message"""
        msg = Twist()
        msg.linear.x = float(linear_x)
        msg.angular.z = float(angular_z)
        self.publisher_.publish(msg)

    def move_forward(self, speed=0.2, duration=1.0):
        """Moves the robot forward for a specific duration"""
        self.get_logger().info(f'Moving Forward at {speed} m/s for {duration} s')
        
        start_time = time.time()
        while time.time() - start_time < duration:
            self.publish_cmd(speed, 0.0)
            time.sleep(0.1) # Publish at 10Hz inside the loop
            
        self.stop() # Safety stop after movement

    def rotate(self, speed=0.5, duration=1.0):
        """Rotates the robot for a specific duration"""
        # speed > 0: Left/CCW, speed < 0: Right/CW
        direction = "Left" if speed > 0 else "Right"
        self.get_logger().info(f'Rotating {direction} at {speed} rad/s for {duration} s')
        
        start_time = time.time()
        while time.time() - start_time < duration:
            self.publish_cmd(0.0, speed)
            time.sleep(0.1)
            
        self.stop()

    def stop(self):
        """Forces the robot to stop"""
        self.get_logger().info('Stopping')
        # Publish a message with all zeros
        self.publish_cmd(0.0, 0.0)

def main(args=None):
    rclpy.init(args=args)
    commander = TurtleBotCommander()

    try:
        # --- MANEUVER SEQUENCE START ---
        
        # Wait a moment for connections to establish
        time.sleep(2) 

        # 1. Move Forward
        commander.move_forward(speed=0.3, duration=10)
        time.sleep(0.5) # Short pause

        # 2. Turn Left
        commander.rotate(speed=0.5, duration=5)
        time.sleep(0.5)

        # 3. Move Backward
        commander.move_forward(speed=-0.2, duration=5)
        
        # 4. Turn Right
        commander.rotate(speed=-0.8, duration=10)

        # --- MANEUVER SEQUENCE END ---

    except KeyboardInterrupt:
        pass
    finally:
        commander.stop()
        commander.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()