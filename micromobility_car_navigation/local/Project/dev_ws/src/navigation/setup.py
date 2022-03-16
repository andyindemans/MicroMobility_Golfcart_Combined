from setuptools import setup

package_name = 'navigation'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='user',
    maintainer_email='user@todo.todo',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'gps_publisher = navigation.gps_publisher:main',
            'navigation_handler = navigation.navigation_handler:main',
            'heading_calculator = navigation.heading_calculator:main',
            'proximity_calculator = navigation.proximity_calculator:main',
            'test_node = navigation.test_node:main'
        ],
    },
)
