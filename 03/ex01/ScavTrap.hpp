/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 15:34:16 by smago             #+#    #+#             */
/*   Updated: 2021/02/22 15:12:00 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class ScavTrap
{
private:
	std::string name;
	int HP;
	int maxHP;
	int EP;
	int maxEP;
	int level;
	int mAttack;
	int rAttack;
	int armorDamage;
public:
	ScavTrap();
	ScavTrap(ScavTrap const &);
	ScavTrap(std::string const &name);
	ScavTrap& operator=(ScavTrap const &);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void challengeNewcomer(void);

	virtual ~ScavTrap();
};



#endif 
