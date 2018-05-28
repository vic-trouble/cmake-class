cmake_minimum_required(VERSION 3.0)

add_library(MyLoadLibrary SHARED question.h question.cpp)

target_include_directories(MyLoadLibrary INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/..)