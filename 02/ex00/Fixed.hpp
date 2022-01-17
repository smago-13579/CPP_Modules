/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 14:06:10 by smago             #+#    #+#             */
/*   Updated: 2021/02/15 21:05:07 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <string>

class Fixed
{
private:
	int fixvalue;
	static int const fractbits;
public:
	Fixed();
	Fixed(const Fixed &a);
	~Fixed();

	Fixed& operator=(const Fixed &a);
	int getRawBits() const;
	void setRawBits(int const raw);
};


#endif 
