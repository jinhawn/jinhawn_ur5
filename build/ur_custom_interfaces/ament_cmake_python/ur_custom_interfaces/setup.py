from setuptools import find_packages
from setuptools import setup

setup(
    name='ur_custom_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('ur_custom_interfaces', 'ur_custom_interfaces.*')),
)
