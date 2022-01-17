/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:36:19 by smago             #+#    #+#             */
/*   Updated: 2021/02/09 20:58:20 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

std::string Zombie::pool[10] = {
		"John",
		"Sam",
		"Kate",
		"Bob",
		"Liza",
		"Mark",
		"Aurelia",
		"Samantha",
		"Zuljin",
		"Jimmy"
};

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
	std::cout << "\033[1;33mZombie "<< type << " created, name - " << name << "\033[0m\n";
}

Zombie::~Zombie()
{
	std::cout << "<" << this->name << " (" << this->type;
	std::cout << ")> \033[1;31mdestroyed...\033[0m\n";
}

void Zombie::announce()
{
	std::cout << "<" << this->name << " (" << this->type;
	std::cout << ")> Braiiiiiiinnnssss...\n";
}

void Zombie::setZombie(std::string name, std::string type)
{
	this->name = name;
	this->type = type;
}

std::string	Zombie::randomName(int count)
{
	std::string name;
	int i;

	srand(time(NULL));
	for (int z = 0; z < count; z++)
	{
		i = rand();
	}
	name = pool[i % 10];
	return (name);
}
