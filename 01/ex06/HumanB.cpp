/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 18:49:57 by smago             #+#    #+#             */
/*   Updated: 2021/02/11 19:59:03 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon const &wpn)
{
	this->wpn = &wpn;
}


void	HumanB::attack()
{
	std::cout << this->name << " attacks with his " << wpn->getType() << std::endl;
}
