set(VAR value)
message("VAR == ${VAR}")

set(EMPTY)
message("EMPTY == ${EMPTY}")

set(STRING "Hello Crazy World")
message("STRING == ${STRING}")

set(LIST Hello Crazy World)
message("LIST == ${LIST}")

set(ALT_LIST "Hello;Crazy;World")
message("ALT_LIST == ${ALT_LIST}")

message("UNKNOWN == ${UNKNOWN}")

set(META ALT_)
message("ALT_LIST == ${${META}LIST}")

message("$PATH == $ENV{PATH}")
