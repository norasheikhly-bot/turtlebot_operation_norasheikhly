from setuptools import find_packages
from setuptools import setup

setup(
    name='obstacle_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('obstacle_interfaces', 'obstacle_interfaces.*')),
)
