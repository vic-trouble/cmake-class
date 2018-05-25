cmake_minimum_required(VERSION 3.0)

project(CustomTargets)

add_executable(Fail fail.cpp)
add_custom_command(TARGET Fail POST_BUILD COMMAND $<TARGET_FILE:Fail>)

add_custom_target(MyCustomTarget COMMAND echo "DOING STUFF")

