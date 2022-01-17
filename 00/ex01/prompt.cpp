/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prompt.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:44:38 by smago             #+#    #+#             */
/*   Updated: 2021/02/08 11:05:25 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prompt.hpp"

prompt::prompt(void)
{
	index = 0;
	std::cout << std::endl;
	std::cout << "|*****************************************|" << std::endl;
	std::cout << "|          I am your phonebook!!!         |" << std::endl;
	std::cout << "|                                         |" << std::endl;
	std::cout << "|*****************************************|" << std::endl;
	std::cout << std::endl;
}

void prompt::enter(void)
{
	std::cout << "Enter a command(\"ADD\", \"SEARCH\", \"EXIT\"): ";
}

int prompt::new_contact(int i)
{
	if (i < 8)
	{
		this->index = i + 1;
		if (contacts[i].new_contact_info(index))
			i++;
		else
			this->index = i;
	}
	else
	{
		std::cout << std::endl;
		std::cout << "|*****************************************|" << std::endl;
		std::cout << "|         ...Phonebook is full...         |" << std::endl;
		std::cout << "|      Use SEARCH to display contacts     |" << std::endl;
		std::cout << "|*****************************************|" << std::endl;
		std::cout << std::endl;
	}
	return (i);
}

void prompt::search(void)
{
	int input = 0;
	std::cout << std::endl;
	std::cout << "|*******************************************|" << std::endl;
	std::cout << "|               All contacts                |" << std::endl;
	std::cout << "|*******************************************|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	std::cout << "|     index|first name| last name|  nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	if (this->index)
	{
		for (int i = 0; i < this->index; i++)
		{
			contacts[i].display_list();
		}
		std::cout << "|___________________________________________|" << std::endl;
		std::cout << std::endl;
		std::cout << "Enter the contact index to display or 9 to exit: ";
		std::cin >> input;
		while ((std::cin.fail() || input < 1 || input > this->index) && input != 9)
		{
			std::cin.clear();
			std::cin.ignore(99999, '\n');
			std::cout << "Invalid index" << std::endl;
			std::cout << "Enter the contact index to display or 9 to exit: ";
			std::cin >> input;
		}
		std::cin.ignore(99999, '\n');
		if (input > 0 && input <= this->index)
			contacts[input - 1].display_all();
	}
	else
	{
		std::cout << "|                                           |" << std::endl;
		std::cout << "|                   EMPTY                   |" << std::endl;
		std::cout << "|___________________________________________|" << std::endl;
		std::cout << std::endl;
	}
}


prompt::~prompt()
{
	std::cout << std::endl;
	std::cout << "|*****************************************|" << std::endl;
	std::cout << "|               Goodbye!!!                |" << std::endl;
	std::cout << "|                                         |" << std::endl;
	std::cout << "|*****************************************|" << std::endl;
	std::cout << std::endl;
}
