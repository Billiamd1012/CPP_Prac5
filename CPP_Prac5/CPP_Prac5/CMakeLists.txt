﻿# CMakeList.txt : CMake project for CPP_Prac5, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (CPP_Prac5 "CPP_Prac5.cpp" "CPP_Prac5.h" "applepie.cpp" "applepie.h" "apricotpie.cpp" "apricotpie.h" "pie.cpp" "pie.h" "piefactory.cpp" "piefactory.h" "raspberrypie.cpp" "raspberrypie.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CPP_Prac5 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
