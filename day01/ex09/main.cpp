//
// Created by Petro Panchenko on 6/15/17.
//

#include "Logger.hpp"

int main(int argc, char *argv[])
{
	Logger *lg;

	if (argc == 1)
	{
		lg = new Logger("");
		lg->log("logToConsole", "new log");
		lg->log("logToConsole", "new log");
		lg->log("logToConsole", "new log");
		lg->log("logToConsole", "new log");
		lg->log("logToConsole", "new log");
	}
	else
	{
		lg = new Logger(argv[1]);
		lg->log("logToFile", "new log");
		lg->log("logToFile", "new log");
		lg->log("logToFile", "new log");
		lg->log("logToFile", "new log");
		lg->log("logToFile", "new log");
	}
}
