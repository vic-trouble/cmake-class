cmake_minimum_required(VERSION 3.0)

file(GLOB SOURCES *.h *.cpp)
add_library(MyLib SHARED ${SOURCES})

target_compile_definitions(MyLib PRIVATE "MYLIB_API=__declspec(dllexport)" INTERFACE "MYLIB_API=__declspec(dllimport)")
target_include_directories(MyLib INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}/..)