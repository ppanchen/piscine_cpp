#ifndef FILEWORKER_HPP
# define FILEWORKER_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>


class FileWorker
{
	std::string filename;
	std::string filecontent;
	std::ifstream fc;
public:
	FileWorker(std::string);
	~FileWorker();
	FileWorker(FileWorker const &);
	FileWorker & operator=(FileWorker const &);
	void replace(std::string, std::string);
};
#endif
