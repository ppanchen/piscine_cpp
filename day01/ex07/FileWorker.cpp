#include "FileWorker.hpp"

FileWorker::FileWorker(std::string str)
{
	std::stringstream  buf;

	filename = str;
	fc.open(filename);
//	perror("");
	buf << fc.rdbuf();
//	std::cout << buf.str();
	filecontent = buf.str();
}

FileWorker::~FileWorker()
{
	fc.close();
}

FileWorker::FileWorker(FileWorker const &f)
{
	*this = f;
}

FileWorker & FileWorker::operator=(FileWorker const &f)
{
	if (this != &f)
	{
		this->filename = f.filename;
		this->filecontent = f.filecontent;
	}
	return (*this);
}

void FileWorker::replace(std::string toFind, std::string toReplace)
{
	unsigned int len;
	std::ofstream outfile (filename + ".replace");

	len = (unsigned)toReplace.length();
	for (unsigned int i = 0; i < filecontent.length(); i++)
	{
		if (!filecontent.compare(i, len, toFind))
			filecontent.replace(i, len, toReplace);
	}
	outfile << filecontent;
	outfile.close();
}