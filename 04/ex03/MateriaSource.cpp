/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:21:06 by smago             #+#    #+#             */
/*   Updated: 2021/03/03 22:14:17 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(): count(0)
{
	for (int i = 0; i < 4; i++)
	{
		this->storage[i] = 0;
	}
}

MateriaSource::MateriaSource(MateriaSource const &a)
{
	this->count = a.count;
	for (int i = 0; i < 4; i++)
	{
		this->storage[i] = a.storage[i]->clone();
	}
}

MateriaSource&	MateriaSource::operator=(MateriaSource const &a)
{
	if (this->count)
	{
		for (int i = 0; i < this->count; i++)
		{
			delete this->storage[i];
		}
	}
	this->count = a.count;
	for (int i = 0; i < 4; i++)
	{
		this->storage[i] = a.storage[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	if (this->count < 4 && m)
	{
		this->storage[this->count] = m;
		this->count++;
	}
	else if (!m)
		std::cout << "Bad materia\n";
	else 
		std::cout << "Storage is full\n";
}

AMateria*	MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < this->count; i++)
	{
		if (this->storage[i]->getType() == type)
		{
			return (this->storage[i]->clone());
		}
	}
	return (0);
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < this->count; i++)
	{
		delete this->storage[i];
	}
}
