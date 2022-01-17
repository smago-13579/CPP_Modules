/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 19:39:33 by smago             #+#    #+#             */
/*   Updated: 2021/02/28 20:45:28 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
#define ENEMY_HPP

#include <iostream>
#include <string>

class Enemy
{
protected:
	Enemy();
	int hp;
	std::string type;
public:
	Enemy(int hp, std::string const &type);
	
	Enemy(Enemy const &);
	Enemy& operator=(Enemy const &);

	std::string getType() const;
	int getHP() const;
	virtual void takeDamage(int);

	virtual ~Enemy();
};


#endif 
