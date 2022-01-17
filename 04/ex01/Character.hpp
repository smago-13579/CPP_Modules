/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 13:09:11 by smago             #+#    #+#             */
/*   Updated: 2021/03/01 18:17:24 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

class Character
{
private:
	Character();
	std::string name;
	int AP;
	AWeapon *weapon;
public:
	Character(std::string const & name);

	Character(Character const &);
	Character& operator=(Character const &);
	
	void recoverAP();
	void equip(AWeapon*);
	void attack(Enemy*);
	std::string getName() const;
	int getAP() const;
	AWeapon* getWeapon() const;

	virtual ~Character();
};

std::ostream&	operator<<(std::ostream &, Character &);

#endif 
