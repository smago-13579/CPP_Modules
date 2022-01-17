/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Logger.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 11:55:50 by smago             #+#    #+#             */
/*   Updated: 2021/02/13 13:44:24 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

#include <iostream>
#include <fstream>
#include <string>
#include <ctime>
#include <sstream>

class Logger
{
private:
	std::string const &name;
	std::ofstream myfile;
	void 	logToConsole(std::string const &message);
	void 	logToFile(std::string const &message);
	std::string makeLogEntry(std::string const &message);

public:
	Logger(std::string const &name);
	~Logger();
	void log(std::string const &dest, std::string const &message);
	// void logToFile(std::string const &message);

};


#endif 
