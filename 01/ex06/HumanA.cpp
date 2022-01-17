/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 18:29:23 by smago             #+#    #+#             */
/*   Updated: 2021/02/11 20:00:36 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, const Weapon &wpn) : wpn(wpn), name(name)
{
}

HumanA::~HumanA()
{
}

void	HumanA::attack()
{
	std::cout << this->name << " attacks with his " << wpn.getType() << std::endl;
}
