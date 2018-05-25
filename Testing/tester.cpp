#include "factorial.h"

#include <iostream>

int main(int argc, const char **argv)
{
	if (argc != 3)
		return 2;

	std::string arg = argv[1], actual = Factorial(arg), expected = argv[2];

	std::cerr << arg << "! == " << actual << " (expected " << expected << ")" << std::endl;

	return actual == expected ? 0 : 1;
}