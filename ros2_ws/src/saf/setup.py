from setuptools import setup

package_name = 'saf'

setup(
    name=package_name,
    version='1.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Hans Henrik Dalgaard',
    maintainer_email='hans.henrik.dalgaard@gmail.com',
    description='ROS2 NODES FOR SAF MINIPROJECT',
    license='MIT',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'tcp_server = saf.TCP_server:main',
            'carrier_handler = saf.carrier_handler:main',
        ],
    },
)
