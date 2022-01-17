/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:59:14 by smago             #+#    #+#             */
/*   Updated: 2021/03/03 19:28:07 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(std::string const &type): type(type), _xp(0)
{
}

std::string const& AMateria::getType() const
{
	return (this->type);
}

unsigned int AMateria::getXP() const
{
	return (this->_xp);
}	

void AMateria::use(ICharacter& target)
{
	(void)target;
	this->_xp += 10;
}

AMateria::~AMateria()
{
}


