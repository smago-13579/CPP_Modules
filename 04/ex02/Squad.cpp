/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:27:46 by smago             #+#    #+#             */
/*   Updated: 2021/03/02 20:20:58 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad(): count(0), units(0)
{
}

Squad::Squad(Squad const &a)
{
	this->count = 0;
	std::cout << "COPY CONSTRUCTOR CALLED\n";
	for (int i = 0; i < a.count; i++)
	{
		this->push(a.getUnit(i)->clone());
	}
}

Squad&	Squad::operator=(Squad const &a)
{
	if (this->units)
	{
		for (int i = 0; i < this->count; i++)
		{
			delete this->units[i];
		}
		delete [] this->units;
	}
	this->units = 0;
	this->count = 0;
	for (int i = 0; i < a.count; i++)
	{
		this->push(a.getUnit(i)->clone());
	}
	
	std::cout << "ASSIGNATION OPERATOR CALLED\n";
	return (*this);
}

int	Squad::getCount() const
{
	return (this->count);
}

ISpaceMarine* Squad::getUnit(int a) const
{
	if (this->count <= a || a < 0 || this->count == 0)
		return (0);
	else 
		return (this->units[a]);
}

int Squad::push(ISpaceMarine* a)
{
	if (a)
	{
		if (this->count == 0)
		{
			this->units = new ISpaceMarine*[1];
			this->units[0] = a;
		}
		else 
		{
			for (int i = 0; i < count; i++)
			{
				if (this->units[i] == a)
					return (this->count);
			}
			ISpaceMarine **tmp = new ISpaceMarine*[this->count + 1];
			for (int i = 0; i < count; i++)
			{
				tmp[i] = this->units[i];
			}
			tmp[this->count] = a;
			delete [] this->units;
			this->units = tmp;
		}
		(this->count)++;
	}
	return (this->count);
}


Squad::~Squad()
{
	if (this->count)
	{
		for (int i = 0; i < this->count; i++)
		{
			delete this->units[i];
		}
		delete [] this->units;
	}
}

