/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 14:11:01 by smago             #+#    #+#             */
/*   Updated: 2021/02/08 18:56:33 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony(std::string name, int age)
{
	this->name = name;
	this->age = age;
	std::cout << "Hi! My name is " << this->name << ". And i'm a pony of " \
				<< this->age << " years old.\n";
}

Pony::~Pony()
{
	std::cout << "Pony " << this->name << " wishes you the best of luck!\n";
	std::cout << "Destructor called\n";
	std::cout << std::endl;
}

void	Pony::walk()
{
	std::cout << "I go out with my friends: Teddy bear, Sophia the ";
	std::cout << "squirrel and Tom the cat.\n";
}

void	Pony::sleep()
{
	std::cout << "I sleep... Zzz...\n";
}