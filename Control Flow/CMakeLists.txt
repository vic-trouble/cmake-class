cmake_minimum_required(VERSION 3.0)

if(${CMAKE_GENERATOR} EQUAL "Visual Studio 15 2017" OR ${CMAKE_GENERATOR} EQUAL "Visual Studio 15 2017 Win64")
	message("MSVC 2017")
elseif(CMAKE_GENERATOR MATCHES "Visual Studio 14 2015")
	message("MSVC 2015")
elseif(CMAKE_GENERATOR EQUAL "XCode")
	message("XCode")
endif()

foreach(ITEM alpha beta gamma)
	message(${ITEM})
endforeach()

set(LIST "alpha;bravo;charlie")
foreach(ITEM ${LIST})
	message(${ITEM})
endforeach()
