/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 22:22:57 by smago             #+#    #+#             */
/*   Updated: 2021/03/03 22:13:31 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const &name): name(name), count(0)
{
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = 0;
	}
}

Character::Character(Character const &a)
{
	this->name = a.name;
	this->count = a.count;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = a.inventory[i]->clone();
	}
}

Character&	Character::operator=(Character const &a)
{
	if (this->count)
	{
		for (int i = 0; i < count; i++)
			delete this->inventory[i];
	}
	this->name = a.name;
	this->count = a.count;
	for (int i = 0; i < 4; i++)
	{
		this->inventory[i] = a.inventory[i]->clone();
	}
	return (*this);
}


std::string const&	Character::getName() const
{
	return (this->name);
}

void	Character::equip(AMateria* m)
{
	if (this->count < 4 && m)
	{
		this->inventory[this->count] = m;
		(this->count)++;
	}
	else if (!m)
		std::cout << "Bad materia\n";
	else 
		std::cout << "Inventory is full\n";
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < count && idx >= 0)
		this->inventory[idx]->use(target);
	else 
		std::cout << "Materia doesn't exist in inventory\n";
}

void	Character::unequip(int idx)
{
	if (idx < count && idx >= 0)
	{
		this->inventory[idx] = 0;
		for (int i = idx; i < count; i++)
		{
			if (i + 1 < 4)
			{
				this->inventory[i] = this->inventory[i + 1];
				this->inventory[i + 1] = 0;
			}
		}
		(this->count)--;
	}
	else 
		std::cout << "Materia doesn't exist in inventory\n";
}

Character::~Character()
{
	for (int i = 0; i < this->count; i++)
	{
		delete this->inventory[i];
	}
}
