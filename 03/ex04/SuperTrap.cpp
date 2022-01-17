/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/20 00:01:50 by smago             #+#    #+#             */
/*   Updated: 2021/02/23 10:04:25 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	this->HP = FragTrap::HP;
	this->maxHP = FragTrap::maxHP;
	this->EP = NinjaTrap::EP;
	this->maxEP = NinjaTrap::maxEP;
	this->mAttack = NinjaTrap::mAttack;
	this->rAttack = FragTrap::rAttack;
	this->armorDamage = FragTrap::armorDamage;
	std::cout << "DEFAULT SUPERTRAP CONSTRUCTOR CALLED\n";
}

SuperTrap::SuperTrap(std::string const &name): ClapTrap(name), NinjaTrap(name), FragTrap(name)
{
	this->HP = FragTrap::HP;
	this->maxHP = FragTrap::maxHP;
	this->EP = NinjaTrap::EP;
	this->maxEP = NinjaTrap::maxEP;
	this->mAttack = NinjaTrap::mAttack;
	this->rAttack = FragTrap::rAttack;
	this->armorDamage = FragTrap::armorDamage;
	std::cout << "SuperTrap < " << this->name << " > created!\n";
	std::cout << "SuperTrap < " << this->name << " >: I want to serve...\n";
}

SuperTrap::SuperTrap(SuperTrap const &a)
{
	*this = a;
	std::cout << "COPY CONSTRUCTOR CALLED\n";
}

SuperTrap&	SuperTrap::operator=(SuperTrap const &a)
{
	ClapTrap::copy(a);
	std::cout << "ASSIGNATION OPERATOR CALLED\n";
	return (*this);
}

void	SuperTrap::meleeAttack(std::string const & target)
{
	NinjaTrap::meleeAttack(target);
}

void	SuperTrap::rangedAttack(std::string const &target)
{
	FragTrap::rangedAttack(target);
}

SuperTrap::~SuperTrap()
{
	std::cout << "SuperTrap < " << this->name << " > destroyed!\n";
	std::cout << "SuperTrap < " << this->name << " >: I'll be back...\n";
}
