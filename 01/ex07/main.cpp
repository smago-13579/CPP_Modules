/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 12:43:46 by smago             #+#    #+#             */
/*   Updated: 2021/02/12 16:11:38 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>
#include <sstream>

int 	checkArgs(std::string const &filename, std::string const &find, std::string const &rep)
{
	if (filename.length() == 0 || find.length() == 0 || rep.length() == 0)
	{
		std::cout << "Invalid length of argument.\n";
		return (1);
	}
	return (0);
}

std::string replacedString(std::string &tmp, std::string const &find, std::string const &rep)
{
	std::stringstream newstr;
	size_t i = 0;
	size_t j;

	while (i < tmp.length())
	{
		j = 0;
		while (find[j] == tmp[i + j] && j < find.length())
		{
			j++;
		}
		if (j == find.length())
		{
			newstr << rep;
			i += j;
		}
		else 
		{
			newstr << tmp[i];
			i++;
		}
	}
	return (newstr.str());
}

int 	createNew(std::string const &filename, std::string const &find, std::string const &rep)
{
	std::ifstream myfile(filename);
	std::ofstream newfile;
	std::string tmp;

	if (!myfile.is_open())
	{
		std::cout << "Can't open " << filename << std::endl;
		return (1);
	}
	newfile.open(filename + ".replace", std::ios::trunc);
	if (!newfile.is_open())
	{
		std::cout << "Can't open a file to write\n";
		return (1);
	}
	while (std::getline(myfile, tmp))
	{
		newfile << replacedString(tmp, find, rep);
		if (!myfile.eof())
			newfile << std::endl;
	}
	myfile.close();
	newfile.close();

	return (0);
}

int main (int ac, char **av)
{
	if (ac == 4)
	{
		if (checkArgs(av[1], av[2], av[3]))
			return (1);
		if (createNew(av[1], av[2], av[3]))
			return (1);
	}
	else 
	{
		std::cout << "Invalid number of arguments.\n";
		return (1);
	}

	return (0);
}
