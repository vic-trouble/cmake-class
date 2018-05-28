cmake_minimum_required(VERSION 3.0)

project(Codegen)

set(BUILD_AUTHOR Bob)
string(TIMESTAMP BUILD_DATE)

option(MY_OPTION "My option" ON)

set(CODEGEN_DIR ${CMAKE_CURRENT_BINARY_DIR}/Generated)
configure_file(config.h.in ${CODEGEN_DIR}/config.h)

add_executable(codegen main.cpp)
target_include_directories(codegen PRIVATE ${CODEGEN_DIR})
