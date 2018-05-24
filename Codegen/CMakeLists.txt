cmake_minimum_required(VERSION 3.0)

project(Codegen)

set(CODEGEN_DIR ${CMAKE_CURRENT_BINARY_DIR}/Generated)

set(BUILD_AUTHOR Bob)
string(TIMESTAMP BUILD_DATE)
configure_file(config.h.in ${CODEGEN_DIR}/config.h)

add_executable(codegen main.cpp)
target_include_directories(codegen PRIVATE ${CODEGEN_DIR})
