#!/usr/bin/env python3

import rclpy
from turtlebot3_control.robot_controller import RobotController

def main(args=None):
    rclpy.init(args=args)
    controller = RobotController()
    
    try:
        controller.get_logger().info('=== Testing All Movements ===')
        
        # Test 1: Forward
        controller.get_logger().info('Test 1: Move Forward')
        controller.move_forward(duration=2.0)
        
        # Test 2: Backward
        controller.get_logger().info('Test 2: Move Backward')
        controller.move_backward(duration=2.0)
        
        # Test 3: Turn Left
        controller.get_logger().info('Test 3: Turn Left')
        controller.turn_left(duration=2.0)
        
        # Test 4: Turn Right
        controller.get_logger().info('Test 4: Turn Right')
        controller.turn_right(duration=2.0)
        
        # Test 5: Forward while turning left
        controller.get_logger().info('Test 5: Forward + Left')
        controller.move_forward_left(duration=2.0)
        
        # Test 6: Forward while turning right
        controller.get_logger().info('Test 6: Forward + Right')
        controller.move_forward_right(duration=2.0)
        
        controller.get_logger().info('=== All Tests Complete! ===')
        
    except KeyboardInterrupt:
        controller.get_logger().info('Tests interrupted')
    
    finally:
        controller.stop()
        controller.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
