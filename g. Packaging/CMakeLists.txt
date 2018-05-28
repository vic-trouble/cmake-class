cmake_minimum_required(VERSION 3.0)

project(Packaging)

add_library(MyFactorial src/factorial.cpp headers/factorial.h)
target_include_directories(MyFactorial PUBLIC 
	$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/headers> 
	$<INSTALL_INTERFACE:include>)

install(TARGETS MyFactorial
		EXPORT UseMyFactorial
		ARCHIVE DESTINATION lib
		PUBLIC_HEADER DESTINATION include)
install(FILES headers/factorial.h DESTINATION include/MyFactorial)
#install(FILES cmake/MyFactorialConfig.cmake DESTINATION ${CMAKE_INSTALL_PREFIX})
install(EXPORT UseMyFactorial DESTINATION cmake)

################################################################################
# packaging part

set(CPACK_GENERATOR "ZIP;TGZ;WIX")
set(CPACK_PACKAGE_DIRECTORY "${CMAKE_BINARY_DIR}/distribution")
set(CPACK_PACKAGE_NAME "MyFactorial")
set(CPACK_PACKAGE_VENDOR "MyFactorial, Inc.")
set(CPACK_PACKAGE_VERSION_MAJOR "1")
set(CPACK_PACKAGE_VERSION_MINOR "0")
set(CPACK_PACKAGE_VERSION_PATCH "0")
set(CPACK_PACKAGE_VERSION "${CPACK_PACKAGE_VERSION_MAJOR}.${CPACK_PACKAGE_VERSION_MINOR}.${CPACK_PACKAGE_VERSION_PATCH}")
set(CPACK_PACKAGE_INSTALL_DIRECTORY "MyFactorial")
include(CPack)
