cmake_minimum_required(VERSION 3.0)

project(UseInstall)

set(MYFACTORIAL_INSTALL_DIR "" CACHE STRING "MyFactorial installation path")
if(NOT MYFACTORIAL_INSTALL_DIR)
	message(FATAL_ERROR "Please specify MYFACTORIAL_INSTALL_DIR")
endif()

include(${MYFACTORIAL_INSTALL_DIR}/cmake/UseMyFactorial.cmake)

add_executable(MyFactorialExe main.cpp)
target_link_libraries(MyFactorialExe MyFactorial)
