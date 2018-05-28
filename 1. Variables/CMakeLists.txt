cmake_minimum_required(VERSION 3.0)

project(Variables)

set(VAR Hello)
message("VAR == ${VAR}")

unset(VAR)

set(EMPTY)
message("EMPTY == ${EMPTY}")

set(STRING_VAR "Hello World")
message("STRING_VAR == ${STRING_VAR}")

set(LIST_VAR This is a List)
message("LIST_VAR == ${LIST_VAR}")

set(ALT_LIST "This;is;a;list;too")
message("ALT_LIST == ${ALT_LIST}")

message("UNKNOWN == ${UNKNOWN}")

set(META ALT_)
message("ALT_LIST using meta == ${${META}LIST}")

message("$PATH == $ENV{PATH}")
