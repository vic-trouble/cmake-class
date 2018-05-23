cmake_minimum_required(VERSION 3.0)

# settings and options

set(NAME "%username%" CACHE STRING "User name")

option(GREET "Greet user")

if(GREET)
	message("Hi ${NAME}")
endif()

################################################################################
# pass value from one function to another with cache var

function(Ping SECRET)
	set(PING ${SECRET} CACHE INTERNAL "" FORCE)
endfunction()

function(Pong)
	message("${PING}")
endfunction()

Ping(First)
Pong()

Ping(Second)
Pong()
