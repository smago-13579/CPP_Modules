/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 19:16:28 by smago             #+#    #+#             */
/*   Updated: 2021/02/28 19:26:43 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{
	
}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &a): AWeapon(a.name, a.apcost, a.damage)
{
	std::cout << "COPY CONSTRUCTOR CALLED\n";
}
	
PlasmaRifle&	PlasmaRifle::operator=(PlasmaRifle const &a)
{
	this->name = a.name;
	this->apcost = a.apcost;
	this->damage = a.damage;
	std::cout << "ASSIGNATION OPERATOR CALLED\n";
	return (*this);
}

void	PlasmaRifle::attack() const
{
	std::cout << "* piouuu piouuu piouuu *\n";
}

PlasmaRifle::~PlasmaRifle()
{
	
}
