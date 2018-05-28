#include <MyFactorial/factorial.h>

#include <iostream>

int main()
{
	for (int i = 0; i < 10; i++)
		std::cout << i << "! == " << Factorial(std::to_string(i)) << std::endl;

	return 0;
}