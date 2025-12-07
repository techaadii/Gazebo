from setuptools import setup

package_name = 'turtlebot3_control'

setup(
    name=package_name,
    version='0.0.1',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Aditya',
    maintainer_email='adityasinofficial@gmail.com',
    description='TurtleBot3 Control Package',
    license='Apache-2.0',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'robot_controller = turtlebot3_control.robot_controller:main',
            'simple_test = turtlebot3_control.simple_test:main',
        ],
    },
)