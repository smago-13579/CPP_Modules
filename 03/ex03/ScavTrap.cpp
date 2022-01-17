/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 15:55:21 by smago             #+#    #+#             */
/*   Updated: 2021/02/23 09:11:06 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->EP = 50;
	this->maxEP = 50;
	this->mAttack = 20;
	this->rAttack = 15;
	this->armorDamage = 3;
	std::cout << "DEFAULT SCAVTRAP CONSTRUCTOR CALLED\n";
}

ScavTrap::ScavTrap(std::string const &name): ClapTrap(name)
{
	this->EP = 50;
	this->maxEP = 50;
	this->mAttack = 20;
	this->rAttack = 15;
	this->armorDamage = 3;
	std::cout << "ScavTrap < " << this->name << " > created\n";
	std::cout << "ScavTrap < " << this->name << " >: ";
	std::cout << "Hey everybody! Check out my package!\n";
}

ScavTrap::ScavTrap(ScavTrap const &a)
{
	*this = a;
	std::cout << "COPY CONSTRUCTOR CALLED\n";
}

ScavTrap&	ScavTrap::operator=(ScavTrap const &a)
{
	ClapTrap::copy(a);
	std::cout << "ASSIGNATION OPERATOR CALLED\n";
	return (*this);
}

void	ScavTrap::meleeAttack(std::string const &target)
{
	if (this->EP >= 25 && this->HP != 0)
	{
		std::cout << "ScavTrap < " << this->name << " > attacks " << target << " in melee,";
		std::cout << " causing " << this->mAttack << " points of damage\n";
		std::cout << "Energy points: " << this->EP << " - 25 = " << this->EP - 25 << std::endl;
		this->EP -= 25;
	}
	else if (this->HP == 0)
	{
		std::cout << "HP - 0\n";
		std::cout << "ScavTrap < " << this->name << " >: I don't feel my hands. Revive me...\n";
	}
	else
	{
		std::cout << "ScavTrap < " << this->name << " >: I need some rest\n";
	}
}

void	ScavTrap::rangedAttack(std::string const &target)
{
	if (this->EP >= 20 && this->HP != 0)
	{
		std::cout << "ScavTrap < " << this->name << " > attacks " << target << " at range,";
		std::cout << " causing " << this->rAttack << " points of damage\n";
		std::cout << "Energy points: " << this->EP << " - 20 = " << this->EP - 20 << std::endl;
		this->EP -= 20;
	}
	else if (this->HP == 0)
	{
		std::cout << "HP - 0\n";
		std::cout << "ScavTrap < " << this->name << " >: I don't feel my hands. Revive me...\n";
	}
	else
	{
		std::cout << "ScavTrap < " << this->name << " >: I need some rest\n";
	}
}

void	ScavTrap::challengeNewcomer(void)
{
	srand(time(NULL));
	int i = rand() % 5;
	if (i == 0)
	{
		std::cout << "Look out everybody, things are about to get awesome!\n";
	}
	else if (i == 1)
	{
		std::cout << "Kill, reload! Kill, reload! KILL! RELOAD!\n";
	}
	else if (i == 2)
	{
		std::cout << "All these bullets in just one shot.\n";
	}
	else if (i == 3)
	{
		std::cout << "Everybody, dance time! Da-da-da-dun-daaa-da-da-da-dun-daaa!\n";
	}
	else if (i == 4)
	{
		std::cout << "Uh, how do I cast magic missile?\n";
	}
}

ScavTrap::~ScavTrap()
{
	std::cout << "Destructor called for ScavTrap < " << this->name << " >\n";
	std::cout << "See ya...\n";
}