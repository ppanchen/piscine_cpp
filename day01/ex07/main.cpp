//
// Created by Petro Panchenko on 6/14/17.
//

#include "FileWorker.hpp"


int main(int argc, char *argv[])
{
	FileWorker *file;

	if (argc != 4)
		return 0;
	file = new FileWorker(argv[1]);
	file->replace(argv[2], argv[3]);
	delete file;
}