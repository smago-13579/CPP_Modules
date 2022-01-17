/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 17:35:02 by smago             #+#    #+#             */
/*   Updated: 2021/02/28 19:10:25 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
#define AWEAPON_HPP

#include <iostream>
#include <string>

class AWeapon
{
protected:
	AWeapon();
	AWeapon(AWeapon const &);
	AWeapon& operator=(AWeapon const &);
	
	std::string name;
	int apcost;
	int damage;
public:
	AWeapon(std::string const &name, int apcost, int damage);

	std::string getName() const;
	int getAPCost() const;
	int getDamage() const;
	virtual void attack() const = 0;

	virtual ~AWeapon();
};


#endif 
