/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peasant.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:45:52 by smago             #+#    #+#             */
/*   Updated: 2021/03/04 17:48:15 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peasant.hpp"

Peasant::Peasant(std::string const &name): Victim(name)
{
	std::cout << "Tog tog.\n";
}

Peasant::Peasant(Peasant const &a): Victim(a.name)
{
	std::cout << "COPY CONSTRUCTOR CALLED\n";
	std::cout << "Tog tog.\n";
}

Peasant&	Peasant::operator=(Peasant const &a)
{
	this->name = a.name;
	std::cout << "ASSIGNATION OPERATOR CALLED\n";
	return (*this);
}

void	Peasant::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a dark horse!\n";
}

Peasant::~Peasant()
{
	std::cout << "Dark dark...\n";
}
