from setuptools import find_packages
from setuptools import setup

setup(
    name='my_sim_tesi_ros2_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('my_sim_tesi_ros2_interfaces', 'my_sim_tesi_ros2_interfaces.*')),
)
