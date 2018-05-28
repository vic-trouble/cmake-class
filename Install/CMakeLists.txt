cmake_minimum_required(VERSION 3.0)

project(Installing)

add_library(MyFactorial src/factorial.cpp headers/factorial.h)
target_include_directories(MyFactorial PUBLIC 
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/headers> 
	$<INSTALL_INTERFACE:include>)

install(TARGETS MyFactorial
		EXPORT UseMyFactorial
		ARCHIVE DESTINATION lib
		PUBLIC_HEADER DESTINATION include)
install(FILES headers/factorial.h DESTINATION include/MyFactorial)
install(EXPORT UseMyFactorial DESTINATION cmake)