/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 12:04:54 by smago             #+#    #+#             */
/*   Updated: 2021/02/13 14:00:00 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

Logger::Logger(std::string const &name) : name(name)
{
}

Logger::~Logger()
{
	if (this->myfile.is_open())
		this->myfile.close();
}

void	Logger::logToConsole(std::string const &message)
{
	std::cout << message << std::endl;
}

void 	Logger::logToFile(std::string const &message)
{
	this->myfile.open(this->name, std::ios::app);
	if (this->myfile.is_open())
		this->myfile << message << std::endl;
	else 
		std::cout << "Can't open file\n";
}


std::string	Logger::makeLogEntry(std::string const &message)
{
	time_t rawtime;
	struct tm *timeinfo;
	std::stringstream strm;
	
	time(&rawtime);
	timeinfo = localtime(&rawtime);
	std::string str = asctime(timeinfo);
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == '\n')
		{
			str[i] = '\0';
		}
	}
	strm << str << ": " << message;

	return (strm.str());
}

void	Logger::log(std::string const &dest, std::string const &message)
{
	int dst;

	void	(Logger:: *func[2])(std::string const &) = {
														&Logger::logToConsole,
														&Logger::logToFile
														};
	
	dst = (dest.compare("Console") == 0) ? 0 : (dest.compare("File") == 0) ? 1 : 2;
	if (dst == 2)
	{
		std::cout << "Invalid destination\n";
	}
	else
	{
		(this->*func[dst])(this->makeLogEntry(message));
	}
}

