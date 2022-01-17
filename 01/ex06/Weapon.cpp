/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 17:39:47 by smago             #+#    #+#             */
/*   Updated: 2021/02/11 20:01:29 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type)
{
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}


const std::string&	Weapon::getType() const
{
	return (this->type);
}

