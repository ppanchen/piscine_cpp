//
// Created by Petro Panchenko on 6/15/17.
//

#ifndef EX06_LOGGER_HPP
#define EX06_LOGGER_HPP

#include <iostream>
#include <fstream>
#include <sstream>

class Logger{
	std::string filename;
	void logToConsole(std::string);
	void logToFile(std::string);
	std::string makeLogEntry(std::string);

public:
	void log(std::string const &dest, std::string const &message);
	Logger(std::string);
	~Logger();
};

#endif //EX06_LOGGER_HPP
