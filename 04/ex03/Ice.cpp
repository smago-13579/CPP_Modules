/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:49:44 by smago             #+#    #+#             */
/*   Updated: 2021/03/03 21:43:17 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(): AMateria("ice")
{
}

Ice::Ice(Ice const &a): AMateria("ice")
{
	this->_xp = a.getXP();
	this->type = a.getType();
}

Ice& Ice::operator=(Ice const &a)
{
	this->_xp = a.getXP();
	this->type = a.getType();
	return (*this);
}

AMateria* Ice::clone() const
{
	Ice* tmp = new Ice(*this);
	return (tmp);
}


void Ice::use(ICharacter& target)
{
	this->AMateria::use(target);
	std::cout << "* shoots an ice bolt at " << target.getName() << " *\n";
}

Ice::~Ice()
{
}