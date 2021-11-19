cmake_minimum_required(VERSION 3.0.2)
project(motor_drive)


find_package(catkin REQUIRED COMPONENTS
  i2cpwm_board
  roscpp
  rospy
)

catkin_package(
)

include_directories(
  ${catkin_INCLUDE_DIRS}
)


add_executable(abs_pub src/abs_pub.cpp)
target_link_libraries(abs_pub ${catkin_LIBRARIES})

