cmake_minimum_required(VERSION 3.0)

project(FindPackage)

find_package(PythonInterp 2.7)
if(PYTHONINTERP_FOUND)
	execute_process(COMMAND ${PYTHON_EXECUTABLE} -c "import random;print(random.random())" OUTPUT_VARIABLE RANDOM)
	message("random == ${RANDOM}")
endif()