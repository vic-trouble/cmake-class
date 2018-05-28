cmake_minimum_required(VERSION 3.0)

project(Functions)

# in parameters

function(PrintSwap NAME SURNAME)
	message("${SURNAME}, ${NAME}")
endfunction()

PrintSwap(James Bond)

################################################################################
# out parameters

function(Swap NAME_VAR SURNAME_VAR)
	set(TEMP ${${NAME_VAR}})
	set(${NAME_VAR} ${${SURNAME_VAR}} PARENT_SCOPE)
	set(${SURNAME_VAR} ${TEMP} PARENT_SCOPE)
endfunction()

set(NAME James)
set(SURNAME Bond)
Swap(NAME SURNAME)
message("${NAME}, ${SURNAME}")
message("TEMP == ${TEMP}") # not observable!

################################################################################
# now with macro

macro(SwapMacro NAME_VAR SURNAME_VAR)
	set(TEMP ${${NAME_VAR}})
	set(${NAME_VAR} ${${SURNAME_VAR}})
	set(${SURNAME_VAR} ${TEMP})
endmacro()

set(NAME James)
set(SURNAME Bond)
SwapMacro(NAME SURNAME)
message("${NAME}, ${SURNAME}")
message("TEMP == ${TEMP}") # observable!

################################################################################
# arbitrary number of args

function(PrintReverse)
	set(TEMP)
	foreach(ARG ${ARGN})
		set(TEMP "${ARG} ${TEMP}")
	endforeach()
	
	message("${TEMP}")
endfunction()

PrintReverse(padawan young my HAVE MUST YOU PATIENCE)

################################################################################
# cmake-style args

function(add_module TARGET_NAME)
	cmake_parse_arguments(ARG "LINK_ENGINE" "UNITY" "LINK_MODULES;INCLUDE_DIRECTORIES" "${ARGN}")
	message("adding module ${TARGET_NAME}")
	message("	unity ${ARG_UNITY}")
	if(ARG_LINK_ENGINE)
		message("	link engine")
	endif()
	foreach(MODULE ${ARG_LINK_MODULES})
		message("	link ${MODULE}")
	endforeach()
	foreach(INC_DIR ${ARG_INCLUDE_DIRECTORIES})
		message("	include ${INC_DIR}")
	endforeach()
endfunction()

add_module(Engine.Tests LINK_ENGINE UNITY ON)
add_module(AdvertisingSDK UNITY OFF)
add_module(AdvertisingSDK.Tests UNITY OFF LINK_MODULES AdvertisingSDK Engine.Tests INCLUDE_DIRECTORIES CommonInclude)