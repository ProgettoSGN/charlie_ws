execute_process(COMMAND "/home/robot/charlie_ws/build/turtlebot3-kinetic-devel/turtlebot3_example/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/robot/charlie_ws/build/turtlebot3-kinetic-devel/turtlebot3_example/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
