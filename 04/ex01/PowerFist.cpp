/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 19:30:01 by smago             #+#    #+#             */
/*   Updated: 2021/02/28 19:31:15 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{
	
}

PowerFist::PowerFist(PowerFist const &a): AWeapon(a.name, a.apcost, a.damage)
{
	std::cout << "COPY CONSTRUCTOR CALLED\n";
}
	
PowerFist&	PowerFist::operator=(PowerFist const &a)
{
	this->name = a.name;
	this->apcost = a.apcost;
	this->damage = a.damage;
	std::cout << "ASSIGNATION OPERATOR CALLED\n";
	return (*this);
}

void	PowerFist::attack() const
{
	std::cout << "* pschhh... SBAM! *\n";
}

PowerFist::~PowerFist()
{
	
}
