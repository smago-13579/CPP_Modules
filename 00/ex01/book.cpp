/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   book.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:05:23 by smago             #+#    #+#             */
/*   Updated: 2021/02/06 12:54:22 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "book.hpp"


book::book(void)
{
	this->index = 0;
}

size_t book::new_contact_info(int index)
{
	size_t len = 0;
	this->index = index;
	std::cout << std::endl;
	std::cout << "|*****************************************|" << std::endl;
	std::cout << "|          Add a new contact...           |" << std::endl;
	std::cout << "|                                         |" << std::endl;
	std::cout << "|*****************************************|" << std::endl;
	std::cout << std::endl;
	std::cout << "Enter first name: ";
	getline(std::cin, this->fields[0]);
	std::cout << "Enter last name: ";
	getline(std::cin, this->fields[1]);
	std::cout << "Enter nickname: ";
	getline(std::cin, this->fields[2]);
	std::cout << "Enter login: ";
	getline(std::cin, this->fields[3]);
	std::cout << "Enter postal address: ";
	getline(std::cin, this->fields[4]);
	std::cout << "Enter email address: ";
	getline(std::cin, this->fields[5]);
	std::cout << "Enter phone number: ";
	getline(std::cin, this->fields[6]);
	std::cout << "Enter birthday date: ";
	getline(std::cin, this->fields[7]);
	std::cout << "Enter favorite meal: ";
	getline(std::cin, this->fields[8]);
	std::cout << "Enter underwear color: ";
	getline(std::cin, this->fields[9]);
	std::cout << "Enter darkest secret: ";
	getline(std::cin, this->fields[10]);
	std::cout << std::endl;
	std::cout << "|*****************************************|" << std::endl;

	for (size_t i = 0; i < 11; i++)
	{
		len += this->fields[i].length();
	}
	if (len == 0)
	{
		std::cout << "|        Empty contact not created        |" << std::endl;
	}
	else 
	{
		std::cout << "|          New contact created            |" << std::endl;
	}
	std::cout << "|                                         |" << std::endl;
	std::cout << "|*****************************************|" << std::endl;
	std::cout << std::endl;
	return (len);
}

void book::display_list(void)
{
	std::cout << "|" << std::setw(10) << index << "|";
	for (size_t i = 0; i < 3; i++)
	{
		this->display_names(this->fields[i]);
	}
	std::cout << std::endl;
}

void book::display_names(std::string str)
{
	if (str.length() > 10)
	{
		std::cout << str.substr(0, 9) << ".|";
	}
	else
	{
		std::cout << std::setw(10) << str << "|";
	}
}

void book::display_all(void)
{
	std::cout << std::endl;
	std::cout << std::setw(15) << "First name" << "| " << this->fields[0] << std::endl;
	std::cout << std::setw(15) << "Last name" << "| " << this->fields[1] << std::endl;
	std::cout << std::setw(15) << "Nickname" << "| " << this->fields[2] << std::endl;
	std::cout << std::setw(15) << "Login" << "| " << this->fields[3] << std::endl;
	std::cout << std::setw(15) << "Postal address" << "| " << this->fields[4] << std::endl;
	std::cout << std::setw(15) << "Email address" << "| " << this->fields[5] << std::endl;
	std::cout << std::setw(15) << "Phone number" << "| " << this->fields[6] << std::endl;
	std::cout << std::setw(15) << "Birthday date" << "| " << this->fields[7] << std::endl;
	std::cout << std::setw(15) << "Favorite meal" << "| " << this->fields[8] << std::endl;
	std::cout << std::setw(15) << "Underwear color" << "| " << this->fields[9] << std::endl;
	std::cout << std::setw(15) << "Darkest secret" << "| " << this->fields[10] << std::endl;
	std::cout << std::endl;
}


book::~book(void)
{
}