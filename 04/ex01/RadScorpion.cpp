/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:58:43 by smago             #+#    #+#             */
/*   Updated: 2021/03/01 13:01:38 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *\n";
}

RadScorpion::RadScorpion(RadScorpion const &a): Enemy(a.hp, a.type)
{
	std::cout << "COPY CONSTRUCTOR CALLED\n";
}

RadScorpion&	RadScorpion::operator=(RadScorpion const &a)
{
	this->hp = a.hp;
	this->type = a.type;
	std::cout << "ASSIGNATION OPERATOR CALLED\n";
	return (*this);
}

RadScorpion::~RadScorpion()
{
	std::cout << "* SPROTCH *\n";
}

