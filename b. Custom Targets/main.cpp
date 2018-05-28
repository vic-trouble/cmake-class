#include <iostream>
#include <string>

#include "table.h"

int main(int argc, char **argv)
{
	if (argc == 2 && std::string(argv[1]) == "--sanity")
	{
		if (std::size(random_table) < 1000)
		{
			std::cout << "TOO SMALL TABLE" << std::endl;
			return 1;
		}
	}

	std::cout << "I'M OK" << std::endl;
	return 0;
}
