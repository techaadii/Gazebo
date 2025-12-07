#!/usr/bin/env python3

import rclpy
from rclpy.node import Node
from std_srvs.srv import Trigger
import time

class RobotTester(Node):
    def __init__(self):
        super().__init__('robot_tester')
        
        # Create service clients
        self.forward_client = self.create_client(Trigger, 'robot/move_forward')
        self.backward_client = self.create_client(Trigger, 'robot/move_backward')
        self.left_client = self.create_client(Trigger, 'robot/turn_left')
        self.right_client = self.create_client(Trigger, 'robot/turn_right')
        self.stop_client = self.create_client(Trigger, 'robot/stop')
        
        # Wait for services to be available
        self.get_logger().info('Waiting for robot controller services...')
        self.forward_client.wait_for_service(timeout_sec=5.0)
        self.backward_client.wait_for_service(timeout_sec=5.0)
        self.left_client.wait_for_service(timeout_sec=5.0)
        self.right_client.wait_for_service(timeout_sec=5.0)
        self.stop_client.wait_for_service(timeout_sec=5.0)
        
        self.get_logger().info('All services ready!')
    
    def call_service(self, client, action_name):
        """Call a service and log the result"""
        request = Trigger.Request()
        future = client.call_async(request)
        
        # Wait for result
        rclpy.spin_until_future_complete(self, future, timeout_sec=2.0)
        
        if future.result() is not None:
            response = future.result()
            self.get_logger().info(f'{action_name}: {response.message}')
            return response.success
        else:
            self.get_logger().error(f'{action_name}: Service call failed')
            return False
    
    def run_test_sequence(self):
        """Run a test sequence of movements"""
        self.get_logger().info('='*50)
        self.get_logger().info('Starting robot movement test sequence')
        self.get_logger().info('='*50)
        
        # Test 1: Move forward
        self.get_logger().info('\nTest 1: Moving forward for 2 seconds')
        self.call_service(self.forward_client, 'Forward')
        time.sleep(2.0)
        self.call_service(self.stop_client, 'Stop')
        time.sleep(1.0)
        
        # Test 2: Move backward
        self.get_logger().info('\nTest 2: Moving backward for 2 seconds')
        self.call_service(self.backward_client, 'Backward')
        time.sleep(2.0)
        self.call_service(self.stop_client, 'Stop')
        time.sleep(1.0)
        
        # Test 3: Turn left
        self.get_logger().info('\nTest 3: Turning left for 2 seconds')
        self.call_service(self.left_client, 'Turn Left')
        time.sleep(2.0)
        self.call_service(self.stop_client, 'Stop')
        time.sleep(1.0)
        
        # Test 4: Turn right
        self.get_logger().info('\nTest 4: Turning right for 2 seconds')
        self.call_service(self.right_client, 'Turn Right')
        time.sleep(2.0)
        self.call_service(self.stop_client, 'Stop')
        time.sleep(1.0)
        
        # Test 5: Square pattern
        self.get_logger().info('\nTest 5: Moving in a square pattern')
        for i in range(4):
            self.get_logger().info(f'  Side {i+1}/4')
            self.call_service(self.forward_client, 'Forward')
            time.sleep(2.0)
            self.call_service(self.stop_client, 'Stop')
            time.sleep(0.5)
            self.call_service(self.right_client, 'Turn Right')
            time.sleep(1.6)  # Approximately 90 degrees
            self.call_service(self.stop_client, 'Stop')
            time.sleep(0.5)
        
        # Final stop
        self.get_logger().info('\nTest sequence complete!')
        self.call_service(self.stop_client, 'Final Stop')
        
        self.get_logger().info('='*50)
        self.get_logger().info('All tests completed successfully!')
        self.get_logger().info('='*50)


def main(args=None):
    rclpy.init(args=args)
    tester = RobotTester()
    
    try:
        # Run the test sequence
        tester.run_test_sequence()
    except KeyboardInterrupt:
        tester.get_logger().info('Test interrupted by user')
    except Exception as e:
        tester.get_logger().error(f'Test failed: {str(e)}')
    finally:
        # Make sure robot stops
        tester.call_service(tester.stop_client, 'Emergency Stop')
        tester.destroy_node()
        rclpy.shutdown()


if __name__ == '__main__':
    main()
