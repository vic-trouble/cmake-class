cmake_minimum_required(VERSION 3.0)

file(GLOB SOURCES *.h *.cpp)
add_library(MyLib ${SOURCES})

target_compile_definitions(MyLib PUBLIC MYLIB_NAMESPACE=MyLib PRIVATE ANSWER=42)
target_include_directories(MyLib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/..)