from setuptools import find_packages, setup

package_name = 'turtlebot3_control'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='moonlab',
    maintainer_email='adityasinofficial@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    extras_require={
        'test': [
            'pytest',
        ],
    },
    entry_points={
        'console_scripts': [
	'robot_controller = turtlebot3_control.robot_controller:main',
        'test_movements = turtlebot3_control.test_movements:main',
        ],
    },
)
