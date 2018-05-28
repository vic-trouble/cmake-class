cmake_minimum_required(VERSION 3.0)

project(Testing)

add_library(MyFactorial factorial.cpp factorial.h)

add_executable(TestDriver tester.cpp)
target_link_libraries(TestDriver MyFactorial)

enable_testing()
add_test(NAME Five COMMAND $<TARGET_FILE:TestDriver> 5 120)
add_test(NAME Big COMMAND $<TARGET_FILE:TestDriver> 10 3628800)
add_test(NAME Zero COMMAND $<TARGET_FILE:TestDriver> 0 1)
add_test(NAME Negative COMMAND $<TARGET_FILE:TestDriver> -1 bad)
