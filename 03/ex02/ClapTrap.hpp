/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 18:01:39 by smago             #+#    #+#             */
/*   Updated: 2021/02/22 15:40:15 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class ClapTrap
{
protected:
	std::string name;
	int HP;
	int maxHP;
	int EP;
	int maxEP;
	int level;
	int mAttack;
	int rAttack;
	int armorDamage;

	void copy(ClapTrap const &);
public:
	ClapTrap();
	ClapTrap(std::string const &name);
	ClapTrap(ClapTrap const &);
	ClapTrap& operator=(ClapTrap const &);
	
	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	virtual ~ClapTrap();
};

#endif 
