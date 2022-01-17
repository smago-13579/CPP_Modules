/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:06:45 by smago             #+#    #+#             */
/*   Updated: 2021/02/10 10:47:18 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(std::string const &type, int N)
{
	this->N = N;
	this->type = type;
	this->z = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		z[i].setZombie(Zombie::randomName(i + 1), type);
	}
}

ZombieHorde::~ZombieHorde()
{
	std::cout << "Zombie type " << this->type << " destroyed\n";
	delete [] this->z;
}

void	ZombieHorde::announce()
{
	for (int i = 0; i < this->N; i++)
	{
		this->z[i].announce();
	}
}
