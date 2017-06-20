//
// Created by Petro Panchenko on 6/15/17.
//

#include "Logger.hpp"

void Logger::logToConsole(std::string msg){
	std::cout << makeLogEntry(msg);
}

void Logger::logToFile(std::string msg){
	std::ofstream file (filename, std::ios::app | std::ios::out);
	file << makeLogEntry(msg);
	file.close();
}

std::string Logger::makeLogEntry(std::string message){
	std::stringstream log;
	time_t t = time(0);
	struct tm * now = localtime(&t);

	log 	<< (now->tm_year + 1900) << '-'
			<< (now->tm_mon + 1) << '-'
			<< (now->tm_mday) << '\t'
			<< (now->tm_hour) << ":" << (now->tm_min) << ":" << (now->tm_sec) << "\t"
			<< message
			<< std::endl;
	return log.str();
}

void Logger::log(std::string const &dest, std::string const &message)
{
	void (Logger::*func[])(std::string) = {&Logger::logToConsole, &Logger::logToFile};
	std::string func_name[] = {"logToConsole", "logToFile"};

	for (int i = 0; i < 2; i++)
	{
		if (dest == func_name[i])
			(this->*func[i])(message);
	}
}

Logger::Logger(std::string str) : filename(str){
	return ;
}

Logger::~Logger(){
	return ;
}
