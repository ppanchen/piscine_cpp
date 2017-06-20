//
// Created by Petro Panchenko on 6/15/17.
//

#include <sstream>
#include <fstream>
#include <iostream>

int main(int argc, char *argv[])
{
	std::ifstream file;
	std::string tmp;

	if (argc == 1)
	{
		while (1)
		{
			std::cin >> tmp;
			tmp = tmp + "\n";
			std::cout << tmp;
		}
	}
	for (int i = 1; i < argc; i++)
	{
		file.open(argv[i]);
		std::cout << file.rdbuf();
		file.close();
	}
}