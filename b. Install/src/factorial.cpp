#include "factorial.h"

std::string Factorial(const std::string &s)
{
	int f = 1;
	for (int i = std::stoi(s); i > 0; i--)
		f *= i;
	return std::to_string(f);
}