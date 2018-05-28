cmake_minimum_required(VERSION 3.0)

project(Targets2)

include(config.cmake)

add_subdirectory(MyExe)
add_subdirectory(MyLib)
add_subdirectory(MyLoadLibrary)

set_property(GLOBAL PROPERTY USE_FOLDERS ON)
set_target_properties(MyExe MyLib MyLoadLibrary PROPERTIES FOLDER My)