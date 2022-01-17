/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 21:10:47 by smago             #+#    #+#             */
/*   Updated: 2021/02/22 12:30:51 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include <cstdlib>

class FragTrap
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
	FragTrap();
	FragTrap(FragTrap const &);
	FragTrap(std::string const &name);
	FragTrap& operator=(FragTrap const &);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	void vaulthunter_dot_exe(std::string const & target);

	virtual ~FragTrap();
};


#endif 

