/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 20:47:07 by smago             #+#    #+#             */
/*   Updated: 2021/03/01 19:43:16 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Me want smash heads!\n";
}

SuperMutant::SuperMutant(SuperMutant const &a): Enemy(a.hp, a.type)
{
	std::cout << "COPY CONSTRUCTOR CALLED\n";
}

SuperMutant&	SuperMutant::operator=(SuperMutant const &a)
{
	this->hp = a.hp;
	this->type = a.type;
	std::cout << "ASSIGNATION OPERATOR CALLED\n";
	return (*this);
}

void	SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}

SuperMutant::~SuperMutant()
{
	std::cout << "Aaargh...\n";
}

