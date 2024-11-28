from launch import LaunchDescription
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    OpaqueFunction,
    RegisterEventHandler,
)
from launch.conditions import IfCondition, UnlessCondition
from launch.event_handlers import OnProcessExit
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import Command, FindExecutable, LaunchConfiguration, PathJoinSubstitution
from launch_ros.actions import Node
from launch_ros.substitutions import FindPackageShare


def launch_setup(context, *args, **kwargs):
    # Spawn box in Gazebo simulation
    gazebo_spawn_box = Node(
        package="gazebo_ros",
        executable="spawn_entity.py",
        name="spawn_box",
        arguments=["-entity", "box", "-file", "/Project/ros2_ws/src/Universal_Robots_ROS2_Gazebo_Simulation/ur_simulation_gazebo/urdf/box_gazebo.urdf.xacro"],
        output="screen",
    )

    nodes_to_start = [
        gazebo_spawn_box
    ]

    return nodes_to_start


def generate_launch_description():
    

    return LaunchDescription( [OpaqueFunction(function=launch_setup)])
