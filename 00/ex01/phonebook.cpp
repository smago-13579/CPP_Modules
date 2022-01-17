/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:03:06 by smago             #+#    #+#             */
/*   Updated: 2021/02/05 16:47:25 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prompt.hpp"

int main(void)
{
	std::string cmd;
	int i = 0;
	bool prgm = true;
	prompt list;

	while (prgm)
	{
		list.enter();
		getline(std::cin, cmd);
		if (cmd.compare("ADD") == 0)
		{
			i = list.new_contact(i);
		}
		else if (cmd.compare("SEARCH") == 0)
		{
			list.search();
		}
		else if (cmd.compare("EXIT") == 0)
			prgm = false;
		else
			std::cout << "Invalid command. Enter right command." << std::endl;
	}
	
	return (0);
}