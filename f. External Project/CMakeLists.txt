cmake_minimum_required(VERSION 3.0)

project(ExternalProject)

include(gtest.cmake)

add_executable(MyExe main.cpp)
target_link_libraries(MyExe gtest)