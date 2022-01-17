/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:21:34 by smago             #+#    #+#             */
/*   Updated: 2021/02/15 21:05:42 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int const Fixed::fractbits = 8;

Fixed::Fixed(): fixvalue(0)
{
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(const Fixed &a)
{
	std::cout << "Copy constructor called\n";
	*this = a;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed&	Fixed::operator=(const Fixed &a)
{
	std::cout << "Assignation operator called\n";
	this->fixvalue = a.getRawBits();

	return *this;
}

int		Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called\n";
	return (this->fixvalue);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixvalue = raw;
}

