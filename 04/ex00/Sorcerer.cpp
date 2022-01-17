/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 19:40:06 by smago             #+#    #+#             */
/*   Updated: 2021/02/27 20:57:32 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string const &name, std::string const &title): name(name), title(title)
{
	std::cout << this->name << ", " << this->title << ", is born!\n";
}

Sorcerer::Sorcerer(Sorcerer const &a)
{
	*this = a;
	std::cout << "COPY CONSTRUCTOR CALLED\n";
	std::cout << this->name << ", " << this->title << ", is born!\n";
}

Sorcerer&	Sorcerer::operator=(Sorcerer const &a)
{
	this->name = a.name;
	this->title = a.title;
	std::cout << "ASSIGNATION OPERATOR CALLED\n";
	return (*this);
}

std::string Sorcerer::getName()
{
	return (this->name);
}

std::string Sorcerer::getTitle()
{
	return (this->title);
}

void	Sorcerer::polymorph(Victim const &a) const
{
	a.getPolymorphed();
}

Sorcerer::~Sorcerer()
{
	std::cout << this->name << ", " << this->title << ", is dead. Consequences will never be the same!\n";
}

std::ostream& operator<<(std::ostream &o, Sorcerer &a)
{
	o << "I am " << a.getName() << ", " << a.getTitle() << ", and I like ponies!\n";
	return (o);
}