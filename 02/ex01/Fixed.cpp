/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:21:34 by smago             #+#    #+#             */
/*   Updated: 2021/02/16 13:16:50 by smago            ###   ########.fr       */
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

Fixed::Fixed(int const &value)
{
	std::cout << "Int constructor called\n";
	this->fixvalue = (value << fractbits);
}

Fixed::Fixed(float const &value)
{
	std::cout << "Float constructor called\n";
	this->fixvalue = roundf(value * (float)(1 << fractbits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called\n";
}

Fixed&	Fixed::operator=(const Fixed &a)
{
	std::cout << "Assignation operator called\n";
	this->fixvalue = a.fixvalue;

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

int		Fixed::toInt() const
{
	return (this->fixvalue >> fractbits);
}

float	Fixed::toFloat() const
{
	float value = (float)(this->fixvalue) / (float)(1 << fractbits);
	return (value);
}

std::ostream&	operator<<(std::ostream &o, const Fixed &a)
{
	o << a.toFloat();
	return (o);
}

