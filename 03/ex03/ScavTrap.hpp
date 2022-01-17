/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 15:34:16 by smago             #+#    #+#             */
/*   Updated: 2021/02/22 15:44:42 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(ScavTrap const &);
	ScavTrap(std::string const &name);
	ScavTrap& operator=(ScavTrap const &);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);
	void challengeNewcomer(void);

	virtual ~ScavTrap();
};



#endif 
