/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 13:16:21 by smago             #+#    #+#             */
/*   Updated: 2021/03/01 18:59:56 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name): name(name), AP(40)
{
	this->weapon = 0;
}

Character::Character(Character const &a)
{
	*this = a;
	std::cout << "COPY CONSTRUCTOR CALLED\n";
}

Character&	Character::operator=(Character const &a)
{
	this->name = a.name;
	this->AP = a.AP;
	this->weapon = a.weapon;
	std::cout << "ASSIGNATION OPERATOR CALLED\n";
	return (*this);
}

void	Character::recoverAP()
{
	this->AP += 10;
	if (this->AP > 40)
		this->AP = 40;
}

void	Character::equip(AWeapon* wpn)
{
	this->weapon = wpn;
}

void	Character::attack(Enemy* target)
{
	if (this->weapon && this->weapon->getAPCost() <= this->AP && target)
	{
		this->AP -= this->weapon->getAPCost();
	
		std::cout << this->name << " attacks " << target->getType() \
			<< " with a " << this->weapon->getName() << std::endl;
		
		this->weapon->attack();
		target->takeDamage(this->weapon->getDamage());
	
		if (target->getHP() == 0)
			delete target;
	}
}

std::string	Character::getName() const
{
	return (this->name);
}

int Character::getAP() const
{
	return (this->AP);
}

AWeapon*	Character::getWeapon() const
{
	return (this->weapon);
}

std::ostream&	operator<<(std::ostream &o, Character &a)
{
	o << a.getName() << " has " << a.getAP() << " AP and ";
	if (a.getWeapon())
		o << "wields a " << a.getWeapon()->getName() << std::endl;
	else 
		o << "is unarmed\n";
	return (o);
}

Character::~Character()
{
}
