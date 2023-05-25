from setuptools import find_packages
from setuptools import setup

setup(
    name='saf_msgs',
    version='1.0.0',
    packages=find_packages(
        include=('saf_msgs', 'saf_msgs.*')),
)
