#include <fstream>
#include <iostream>
#include <limits>
#include <random>
#include <string>

int main(int argc, char **argv)
{
	if (argc != 3)
		return 1;

	int size = std::stoi(argv[1]);
	std::default_random_engine generator;
	std::uniform_int_distribution<int> distribution(0, std::numeric_limits<int>::max());

	std::ofstream table_file(argv[2]);
	table_file << "const int random_table[] = {" << distribution(generator);
	for (int i = 0; i < size; i++)
		table_file << "," << distribution(generator);

	table_file << "};";

	return 0;
}