/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 20:32:15 by smago             #+#    #+#             */
/*   Updated: 2021/03/01 18:46:56 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const &type): hp(hp), type(type)
{
}

Enemy::Enemy(Enemy const &a)
{
	*this = a;
	std::cout << "COPY CONSTRUCTOR CALLED\n";
}

Enemy&	Enemy::operator=(Enemy const &a)
{
	this->hp = a.hp;
	this->type = a.type;
	std::cout << "ASSIGNATION OPERATOR CALLED\n";
	return (*this);
}

std::string	Enemy::getType() const
{
	return (this->type);
}
int	Enemy::getHP() const
{
	return (this->hp);
}

void	Enemy::takeDamage(int damage)
{
	if (damage >= 0)
	{
		this->hp -= damage;
		if (this->hp < 0)
			this->hp = 0;
	}
}

Enemy::~Enemy()
{
}

