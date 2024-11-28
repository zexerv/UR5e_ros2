#!/bin/bash

# List of packages to ignore
IGNORE_PACKAGES=("my_robot_control" "image_listener")

# Temporary directory to move ignored packages
TEMP_DIR=$(mktemp -d)

# Move ignored packages to temporary directory
for pkg in "${IGNORE_PACKAGES[@]}"; do
  if [ -d "src/$pkg" ]; then
    mv "src/$pkg" "$TEMP_DIR/"
  fi
done

# Run rosdep install
rosdep install --from-paths src --ignore-src --rosdistro $ROS_DISTRO -r -y
# Move ignored packages back to the workspace
for pkg in "${IGNORE_PACKAGES[@]}"; do
  if [ -d "$TEMP_DIR/$pkg" ]; then
    mv "$TEMP_DIR/$pkg" "src/"
  fi
done

# Remove the temporary directory
rm -rf "$TEMP_DIR"