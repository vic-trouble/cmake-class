cmake_minimum_required(VERSION 3.0)

project(UseInstall)

find_package(MyFactorial REQUIRED)

add_executable(MyFactorialExe main.cpp)
target_link_libraries(MyFactorialExe MyFactorial)
