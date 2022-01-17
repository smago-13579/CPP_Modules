/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 18:11:10 by smago             #+#    #+#             */
/*   Updated: 2021/02/23 08:58:59 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): name("NO NAME"), HP(100), maxHP(100), EP(100), \
			maxEP(100), mAttack(30), rAttack(20), armorDamage(5)
{
	this->level = 1;
	std::cout << "DEFAULT CLAPTRAP CONSTRUCTOR CALLED\n";
}

ClapTrap::ClapTrap(std::string const &name): name(name), HP(100), maxHP(100), EP(100), \
			maxEP(100), mAttack(30), rAttack(20), armorDamage(5)
{
	this->level = 1;
	std::cout << "ClapTrap < " << this->name << " > created\n";
	std::cout << "ClapTrap < " << this->name << " >: ";
	std::cout << "Recompiling my combat code!\n";
}

ClapTrap::ClapTrap(ClapTrap const &a)
{
	*this = a;
	std::cout << "COPY CONSTRUCTOR CALLED\n";
}

ClapTrap&	ClapTrap::operator=(ClapTrap const &a)
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

void	ClapTrap::copy(ClapTrap const &a)
{
	*this = a;
}

void	ClapTrap::meleeAttack(std::string const &target)
{
	if (this->EP >= 25 && this->HP != 0)
	{
		std::cout << "ClapTrap < " << this->name << " > attacks " << target << " in melee,";
		std::cout << " causing " << this->mAttack << " points of damage\n";
		std::cout << "Energy points: " << this->EP << " - 25 = " << this->EP - 25 << std::endl;
		this->EP -= 25;
	}
	else if (this->HP == 0)
	{
		std::cout << "HP - 0\n";
		std::cout << "ClapTrap < " << this->name << " >: I don't feel my hands. Revive me...\n";
	}
	else
	{
		std::cout << "ClapTrap < " << this->name << " >: I need some rest\n";
	}
}

void	ClapTrap::rangedAttack(std::string const &target)
{
	if (this->EP >= 20 && this->HP != 0)
	{
		std::cout << "ClapTrap < " << this->name << " > attacks " << target << " at range,";
		std::cout << " causing " << this->rAttack << " points of damage\n";
		std::cout << "Energy points: " << this->EP << " - 20 = " << this->EP - 20 << std::endl;
		this->EP -= 20;
	}
	else if (this->HP == 0)
	{
		std::cout << "HP - 0\n";
		std::cout << "ClapTrap < " << this->name << " >: I don't feel my hands. Revive me...\n";
	}
	else
	{
		std::cout << "ClapTrap < " << this->name << " >: I need some rest\n";
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	int damage = (int)amount - this->armorDamage;
	if (damage < 0)
		damage = 0;
	if (this->HP > 0)
	{
		std::cout << "< " << this->name << " > takes damage by ";
		std::cout << damage << " health points.\n";
		if (damage > 0)
			this->HP = this->HP - (int)amount + this->armorDamage;
		if (this->HP <= 0)
		{
			this->HP = 0;
			std::cout << "< " << this->name << " >: ";
			std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death.\n";
		}
		std::cout << "HP: " << this->HP << std::endl;
	}
	else
	{
		std::cout << "< " << this->name << " >: ";
		std::cout << "I can't die anymore... \n";
		std::cout << "HP - 0\n";
	}
	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->HP == 0)
		std::cout << "< " << this->name << " > cannot be repaired, only utilization...\n";
	else
	{
		std::cout << "< " << this->name << " > renovated.\nHP +" << amount;
		std::cout << "\nEP +" << amount << std::endl;
		std::cout << "< " << this->name << " >: ";
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

std::string const	&ClapTrap::getName(void)
{
	return (this->name);
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called for ClapTrap < " << this->name << " >\n";
	std::cout << "There's a better place for us!!!\n";
}

