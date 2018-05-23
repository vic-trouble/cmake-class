cmake_minimum_required(VERSION 3.0)

add_library(MyLib lib.h lib.cpp)

add_executable(MyExe exe.cpp)
target_link_libraries(MyExe MyLib)
