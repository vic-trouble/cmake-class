cmake_minimum_required(VERSION 3.0)

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