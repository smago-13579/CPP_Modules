/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Gun.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:53:47 by smago             #+#    #+#             */
/*   Updated: 2021/03/03 23:00:46 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Gun.hpp"

Gun::Gun(): AWeapon("Gun", 3, 15)
{
	
}

Gun::Gun(Gun const &a): AWeapon(a.name, a.apcost, a.damage)
{
	std::cout << "COPY CONSTRUCTOR CALLED\n";
}
	
Gun&	Gun::operator=(Gun const &a)
{
	this->name = a.name;
	this->apcost = a.apcost;
	this->damage = a.damage;
	std::cout << "ASSIGNATION OPERATOR CALLED\n";
	return (*this);
}

void	Gun::attack() const
{
	std::cout << "* shot shot shot *\n";
}

Gun::~Gun()
{
	
}
