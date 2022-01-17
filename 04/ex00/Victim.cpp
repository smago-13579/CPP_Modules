/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 23:41:52 by smago             #+#    #+#             */
/*   Updated: 2021/02/27 18:15:04 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim(std::string const &name): name(name)
{
	std::cout << "Some random victim called " << this->name << " just appeared!\n";
}

Victim::Victim(Victim const &a)
{
	*this = a;
	std::cout << "COPY CONSTRUCTOR CALLED\n";
	std::cout << "Some random victim called " << this->name << " just appeared!\n";
}

Victim&	Victim::operator=(Victim const &a)
{
	this->name = a.name;
	std::cout << "ASSIGNATION OPERATOR CALLED\n";
	return (*this);
}

std::string		Victim::getName()
{
	return (this->name);
}

void	Victim::getPolymorphed() const
{
	std::cout << this->name << " has been turned into a cute little sheep!\n";
}

Victim::~Victim()
{
	std::cout << "Victim " << this->name << " just died for no apparent reason!\n";
}

std::ostream& operator<<(std::ostream &o, Victim &a)
{
	o << "I'm " << a.getName() << " and I like otters!\n";
	return (o);
}
