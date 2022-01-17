/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 18:58:19 by smago             #+#    #+#             */
/*   Updated: 2021/03/01 19:16:54 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const &name, int apcost, int damage): \
		name(name), apcost(apcost), damage(damage)
{
}

std::string	AWeapon::getName() const
{
	return (this->name);
}

int	AWeapon::getAPCost() const
{
	return (this->apcost);
}
int AWeapon::getDamage() const
{
	return (this->damage);
}

AWeapon::~AWeapon()
{
}

