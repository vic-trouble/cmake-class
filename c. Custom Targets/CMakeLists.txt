cmake_minimum_required(VERSION 3.0)

project(CustomTargets)

set(RANDOM_POOL_SIZE "1000" CACHE STRING "Random table size")

add_executable(Generator generator.cpp)
set(TABLE_H ${CMAKE_BINARY_DIR}/table.h)
add_custom_target(GenerateTable COMMAND $<TARGET_FILE:Generator> ${RANDOM_POOL_SIZE} ${TABLE_H})

add_executable(FastRandom main.cpp)
target_include_directories(FastRandom PRIVATE ${CMAKE_BINARY_DIR})
add_custom_command(TARGET FastRandom POST_BUILD COMMAND $<TARGET_FILE:FastRandom> --sanity)

add_dependencies(FastRandom GenerateTable)

