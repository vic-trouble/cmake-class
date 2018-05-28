#include <iostream>

int main()
{
	std::cout << "Config is " << MY_CONFIG << std::endl;

#ifdef PRODUCTION
	std::cout << "No bugs allowed" << std::endl;
#endif

	return 0;
}