/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 00:08:29 by smago             #+#    #+#             */
/*   Updated: 2021/02/28 14:55:44 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(std::string const &name): Victim(name)
{
	std::cout << "Zog zog.\n";
}

Peon::Peon(Peon const &a): Victim(a.name)
{
	std::cout << "COPY CONSTRUCTOR CALLED\n";
	std::cout << "Zog zog.\n";
}

Peon&	Peon::operator=(Peon const &a)
{
	this->name = a.name;
	std::cout << "ASSIGNATION OPERATOR CALLED\n";
	return (*this);
}

void	Peon::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a pink pony!\n";
}

Peon::~Peon()
{
	std::cout << "Bleuark...\n";
}

