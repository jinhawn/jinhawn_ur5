from setuptools import find_packages
from setuptools import setup

setup(
    name='interfaces_ur5ik',
    version='0.0.0',
    packages=find_packages(
        include=('interfaces_ur5ik', 'interfaces_ur5ik.*')),
)
