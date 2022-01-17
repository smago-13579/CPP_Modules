/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 18:42:33 by smago             #+#    #+#             */
/*   Updated: 2021/02/22 22:52:48 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap: virtual public ClapTrap
{
public:
	NinjaTrap();
	NinjaTrap(std::string const &name);
	NinjaTrap(NinjaTrap const &);
	NinjaTrap& operator=(NinjaTrap const &);

	void ninjaShoebox(NinjaTrap &target);
	void ninjaShoebox(ClapTrap &target);
	void ninjaShoebox(FragTrap &target);
	void ninjaShoebox(ScavTrap &target);

	virtual ~NinjaTrap();
};


#endif
