/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Turtle.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:49:49 by smago             #+#    #+#             */
/*   Updated: 2021/03/03 22:52:09 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Turtle.hpp"

Turtle::Turtle(): Enemy(20, "Turtle")
{
	std::cout << "* Turtle created *\n";
}

Turtle::Turtle(Turtle const &a): Enemy(a.hp, a.type)
{
	std::cout << "COPY CONSTRUCTOR CALLED\n";
}

Turtle&	Turtle::operator=(Turtle const &a)
{
	this->hp = a.hp;
	this->type = a.type;
	std::cout << "ASSIGNATION OPERATOR CALLED\n";
	return (*this);
}

Turtle::~Turtle()
{
	std::cout << "* Turtle dead *\n";
}

