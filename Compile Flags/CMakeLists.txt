cmake_minimum_required(VERSION 3.0)

project(CompileFlags)

set(CMAKE_CONFIGURATION_TYPES Debug Release Production)

if(WIN32)
	set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /W4")
	set(CMAKE_CXX_FLAGS_PRODUCTION "/DPRODUCTION")
elseif(MACOSX)
	set(CMAKE_CXX_FLAGS_PRODUCTION "-DPRODUCTION")
endif()

set(CMAKE_EXE_LINKER_FLAGS_PRODUCTION "")

add_executable(config config.cpp)
target_compile_definitions(config PRIVATE "MY_CONFIG=\"${CMAKE_CFG_INTDIR}\"")
