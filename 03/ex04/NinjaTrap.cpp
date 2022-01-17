/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 18:44:29 by smago             #+#    #+#             */
/*   Updated: 2021/02/23 09:13:22 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	this->HP = 60;
	this->maxHP = 60;
	this->EP = 120;
	this->maxEP = 120;
	this->mAttack = 60;
	this->rAttack = 5;
	this->armorDamage = 0;
	std::cout << "DEFAULT NINJATRAP CONSTRUCTOR CALLED\n";
}

NinjaTrap::NinjaTrap(std::string const &name): ClapTrap(name)
{
	this->HP = 60;
	this->maxHP = 60;
	this->EP = 120;
	this->maxEP = 120;
	this->mAttack = 60;
	this->rAttack = 5;
	this->armorDamage = 0;
	std::cout << "NinjaTrap < " << this->name << " > created!\n";
	std::cout << "NinjaTrap < " << this->name << " >: Wassabbiiii....\n";
}

NinjaTrap::NinjaTrap(NinjaTrap const &a)
{
	*this = a;
	std::cout << "COPY CONSTRUCTOR CALLED\n";
}

NinjaTrap&	NinjaTrap::operator=(NinjaTrap const &a)
{
	ClapTrap::copy(a);
	std::cout << "ASSIGNATION OPERATOR CALLED\n";
	return (*this);
}

NinjaTrap::~NinjaTrap()
{
	std::cout << "NinjaTrap < " << this->name << " > destroyed!\n";
	std::cout << "NinjaTrap < " << this->name << " >: Kawasssaaaakkkkkiiiiiii.....\n";
}

void	NinjaTrap::ninjaShoebox(NinjaTrap &target)
{
	std::cout << "NinjaTrap < " << this->name << " > doesn't want to attack his ";
	std::cout << "friend " << target.getName() << std::endl;
}

void	NinjaTrap::ninjaShoebox(FragTrap &target)
{
	std::cout << "NinjaTrap < " << this->name << " > throws a knife at ";
	std::cout << target.getName() << " and dealing " << this->rAttack;
	std::cout << " points of damage\n";
	target.takeDamage(this->rAttack);
}

void	NinjaTrap::ninjaShoebox(ClapTrap &target)
{
	if (this->EP >= 40)
	{
		std::cout << "NinjaTrap < " << this->name << " > attacks ";
		std::cout << target.getName() << " with Katana for " << this->mAttack;
		std::cout << " points of damage\n";
		target.takeDamage(this->mAttack);
		this->EP -= 40;
	}
	else 
		std::cout << "NinjaTrap < " << this->name << " >: I'm tired...\n";
}

void	NinjaTrap::ninjaShoebox(ScavTrap &target)
{
	if (this->EP >= 30)
	{
		std::cout << "NinjaTrap < " << this->name << " > attacks ";
		std::cout << target.getName() << " with his fists but takes little damage\n";
		this->takeDamage(5);
		this->EP -= 30;
	}
	else 
		std::cout << "NinjaTrap < " << this->name << " >: I'm tired...\n";
}

