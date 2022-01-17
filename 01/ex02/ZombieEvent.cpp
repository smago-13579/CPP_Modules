/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 12:56:06 by smago             #+#    #+#             */
/*   Updated: 2021/02/09 18:50:32 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
	this->type = "None";
	this->count = 1;
}

ZombieEvent::~ZombieEvent()
{
}


void ZombieEvent::setZombieType(std::string const &type)
{
	this->type = type;
}

Zombie* ZombieEvent::newZombie(std::string name)
{
	Zombie *z = new Zombie(name, this->type);
	return (z);
}

Zombie* ZombieEvent::randomChump()
{
	Zombie *z;
	
	z = newZombie(Zombie::randomName(this->count));
	this->count += 1;
	z->announce();
	return (z);
}

