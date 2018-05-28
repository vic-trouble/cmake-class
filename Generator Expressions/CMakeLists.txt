cmake_minimum_required(VERSION 3.0)

project(GeneratorExpressions)

add_executable(MyExe main.cpp)
set_target_properties(MyExe PROPERTIES
	RUNTIME_OUTPUT_DIRECTORY $<1:${CMAKE_BINARY_DIR}/bin>
	RUNTIME_OUTPUT_NAME MyExe$<$<CONFIG:Debug>:d>${CMAKE_RUNTIME_OUTPUT_SUFFIX})

target_compile_options(MyExe PRIVATE
	$<$<CXX_COMPILER_ID:MSVC>:/W4>
	$<$<CXX_COMPILER_ID:GNU>:-Wall>)