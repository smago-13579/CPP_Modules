/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 15:55:21 by smago             #+#    #+#             */
/*   Updated: 2021/02/23 08:37:48 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(): name("NO NAME"), HP(100), maxHP(100), EP(50), \
			maxEP(50), mAttack(20), rAttack(15), armorDamage(3)
{
	this->level = 1;
	std::cout << "DEFAULT CONSTRUCTOR CALLED.\n";
}

ScavTrap::ScavTrap(std::string const &name): name(name), HP(100), maxHP(100), EP(50), \
			maxEP(50), mAttack(20), rAttack(15), armorDamage(3)
{
	this->level = 1;
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
	this->name = a.name;
	this->HP = a.HP;
	this->maxHP = a.maxHP;
	this->EP = a.EP;
	this->maxEP = a.maxEP;
	this->mAttack = a.mAttack;
	this->rAttack = a.rAttack;
	this->armorDamage = a.armorDamage;
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

void	ScavTrap::takeDamage(unsigned int amount)
{
	int damage = (int)amount - this->armorDamage;
	if (damage < 0)
		damage = 0;
	if (this->HP > 0)
	{
		std::cout << "ScavTrap < " << this->name << " > takes damage by ";
		std::cout << damage << " health points.\n";
		if (damage > 0)
			this->HP = this->HP - (int)amount + this->armorDamage;
		if (this->HP <= 0)
		{
			this->HP = 0;
			std::cout << "ScavTrap < " << this->name << " >: ";
			std::cout << "Death is close...\n";
		}
		std::cout << "HP: " << this->HP << std::endl;
	}
	else
	{
		std::cout << "ScavTrap < " << this->name << " >: ";
		std::cout << "I can't die anymore... \n";
		std::cout << "HP - 0\n";
	}
	
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	if (this->HP == 0)
		std::cout << "ScavTrap < " << this->name << " > cannot be repaired, only utilization...\n";
	else
	{
		std::cout << "The ScavTrap < " << this->name << " > renovated.\nHP +" << amount;
		std::cout << "\nEP +" << amount << std::endl;
		std::cout << "ScavTrap < " << this->name << " >: ";
		std::cout << "Health! Eww, what flavor is red?\n";
		this->HP += int(amount);
		this->EP += int(amount);
		if (this->HP > this->maxHP)
			this->HP = this->maxHP;
		if (this->EP > this->maxEP)
			this->EP = this->maxEP;
		std::cout << "HP - " << this->HP << " EP - " << this->EP << std::endl;
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