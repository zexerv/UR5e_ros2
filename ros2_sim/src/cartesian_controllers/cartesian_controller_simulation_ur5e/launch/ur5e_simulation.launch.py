################################################################################
# Copyright 2022 FZI Research Center for Information Technology
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#
# 1. Redistributions of source code must retain the above copyright notice,
# this list of conditions and the following disclaimer.
#
# 2. Redistributions in binary form must reproduce the above copyright notice,
# this list of conditions and the following disclaimer in the documentation
# and/or other materials provided with the distribution.
#
# 3. Neither the name of the copyright holder nor the names of its
# contributors may be used to endorse or promote products derived from this
# software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
# AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
# IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
# LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
# CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
# SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
# CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
# ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
# POSSIBILITY OF SUCH DAMAGE.
################################################################################

# -----------------------------------------------------------------------------
# \file    simulation.launch.py
#
# \author  Stefan Scherzinger <scherzin@fzi.de>
# \date    2022/02/14
#
# -----------------------------------------------------------------------------

from launch.event_handlers import OnProcessExit

from launch import LaunchDescription
from launch.substitutions import (
    Command,
    FindExecutable,
    PathJoinSubstitution,
    LaunchConfiguration
)
from launch.actions import (
    DeclareLaunchArgument,
    IncludeLaunchDescription,
    OpaqueFunction,
    RegisterEventHandler,
)
from launch_ros.substitutions import FindPackageShare
from launch_ros.actions import Node
import os

distro = os.environ["ROS_DISTRO"]
if distro in ["galactic", "humble", "iron"]:
    spawner = "spawner"
else:  # foxy
    spawner = "spawner.py"



def launch_setup(context, *args, **kwargs):
    # Initialize Arguments
    ur_type = LaunchConfiguration("ur_type")
    safety_limits = LaunchConfiguration("safety_limits")
    safety_pos_margin = LaunchConfiguration("safety_pos_margin")
    safety_k_position = LaunchConfiguration("safety_k_position")
    prefix = LaunchConfiguration("prefix")

    # Build the URDF with command line xacro.
    # We also pass parameters for the system_interface here.
    robot_description_content = Command(
        [
            PathJoinSubstitution([FindExecutable(name="xacro")]),
            " ",
            PathJoinSubstitution(
                [
                    FindPackageShare("cartesian_controller_simulation_ur5e"),
                    "urdf",
                    "robot_ur5e.urdf.xacro",
                ]
            ),
            " ",
            "mujoco_model:=",
            PathJoinSubstitution(
                [
                    FindPackageShare("cartesian_controller_simulation_ur5e"),
                    "etc",
                    "robot_mujoco_ur5e.xml",
                ]
            ),
            " ",
            "safety_limits:=",
            safety_limits,
            " ",
            "safety_pos_margin:=",
            safety_pos_margin,
            " ",
            "safety_k_position:=",
            safety_k_position,
            " ",
            "name:=",
            "ur",
            " ",
            "ur_type:=",
            ur_type,
            " ",
            "tf_prefix:=",
            prefix,
            " ",
        ]
    )
    robot_description = {"robot_description": robot_description_content}

    robot_controllers = PathJoinSubstitution(
        [
            FindPackageShare("cartesian_controller_simulation_ur5e"),
            "config",
            "controller_manager.yaml",
        ]
    )

    # The actual simulation is a ROS2-control system interface.
    # Start that with the usual ROS2 controller manager mechanisms.
    control_node = Node(
        package="controller_manager",
        executable="ros2_control_node",
        parameters=[robot_description, robot_controllers],
        # prefix="screen -d -m gdb -command=/home/scherzin/.ros/my_debug_log --ex run --args",  # noqa: E501
        output="both",
        remappings=[
            ("motion_control_handle/target_frame", "target_frame"),
            ("cartesian_motion_controller/target_frame", "target_frame"),
            ("cartesian_compliance_controller/target_frame", "target_frame"),
            ("cartesian_force_controller/target_wrench", "target_wrench"),
            ("cartesian_compliance_controller/target_wrench", "target_wrench"),
            ("cartesian_force_controller/ft_sensor_wrench", "ft_sensor_wrench"),
            ("cartesian_compliance_controller/ft_sensor_wrench", "ft_sensor_wrench"),
        ],
    )

    # Convenience function for easy spawner construction
    def controller_spawner(name, *args):
        return Node(
            package="controller_manager",
            executable=spawner,
            output="screen",
            arguments=[name] + [a for a in args],
        )

    # Active controllers
    active_list = [
        "joint_state_broadcaster",
    ]
    active_spawners = [controller_spawner(controller) for controller in active_list]

    # Inactive controllers
    inactive_list = [
        "cartesian_compliance_controller",
        "cartesian_force_controller",
        "cartesian_motion_controller",
        "motion_control_handle",
        "joint_trajectory_controller",
    ]
    state = "--inactive" if distro in ["humble", "iron"] else "--stopped"
    inactive_spawners = [
        controller_spawner(controller, state) for controller in inactive_list
    ]

    # TF tree
    robot_state_publisher = Node(
        package="robot_state_publisher",
        executable="robot_state_publisher",
        output="both",
        parameters=[robot_description],
    )

    # Visualization
    rviz_config = PathJoinSubstitution(
        [FindPackageShare("cartesian_controller_simulation_ur5e"), "etc", "robot_ur5e.rviz"]
    )
    rviz = Node(
        package="rviz2",
        executable="rviz2",
        name="rviz2",
        output="log",
        arguments=["-d", rviz_config],
    )

    # Delay rviz start after last active spawner
    delay_rviz_after_active_spawners = RegisterEventHandler(
        event_handler=OnProcessExit(
            target_action=active_spawners[-1],
            on_exit=[rviz],
        )
    )

    # Nodes to start
    nodes = (
        [control_node, robot_state_publisher]
        + inactive_spawners
        + active_spawners
        + [delay_rviz_after_active_spawners]
    )
    return nodes

def generate_launch_description():
    # Declare arguments
    declared_arguments = []
   # UR specific arguments
    declared_arguments.append(
        DeclareLaunchArgument(
            "ur_type",
            description="Type/series of used UR robot.",
            choices=["ur3", "ur3e", "ur5", "ur5e", "ur10", "ur10e", "ur16e"],
            default_value="ur5e",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "safety_limits",
            default_value="true",
            description="Enables the safety limits controller if true.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "safety_pos_margin",
            default_value="0.15",
            description="The margin to lower and upper limits in the safety controller.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "safety_k_position",
            default_value="20",
            description="k-position factor in the safety controller.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "prefix",
            default_value='""',
            description="Prefix of the joint names, useful for \
        multi-robot setup. If changed than also joint names in the controllers' configuration \
        have to be updated.",
        )
    )
    return LaunchDescription(declared_arguments + [OpaqueFunction(function=launch_setup)])
