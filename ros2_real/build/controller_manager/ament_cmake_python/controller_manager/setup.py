from setuptools import find_packages
from setuptools import setup

setup(
    name='controller_manager',
    version='3.28.1',
    packages=find_packages(
        include=('controller_manager', 'controller_manager.*')),
)