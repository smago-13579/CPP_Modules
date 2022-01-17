/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:11:31 by smago             #+#    #+#             */
/*   Updated: 2021/03/03 21:43:07 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(): AMateria("cure")
{
}

Cure::Cure(Cure const &a): AMateria("cure")
{
	this->_xp = a.getXP();
	this->type = a.getType();
}

Cure&	Cure::operator=(Cure const &a)
{
	this->_xp = a.getXP();
	this->type = a.getType();
	return (*this);
}

AMateria*	Cure::clone() const
{
	Cure* tmp = new Cure(*this);
	return (tmp);
}

void	Cure::use(ICharacter& target)
{
	this->AMateria::use(target);
	std::cout << "* heals " << target.getName() << "’s wounds *\n";
}

Cure::~Cure()
{
}