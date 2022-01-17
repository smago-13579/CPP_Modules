/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 23:58:15 by smago             #+#    #+#             */
/*   Updated: 2021/02/23 09:33:43 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

#include "FragTrap.hpp"
#include "NinjaTrap.hpp"

class SuperTrap: virtual public NinjaTrap, virtual public FragTrap
{
public:
	SuperTrap();
	SuperTrap(std::string const &name);
	SuperTrap(SuperTrap const &);
	SuperTrap& operator=(SuperTrap const &);

	void rangedAttack(std::string const & target);
	void meleeAttack(std::string const & target);

	virtual ~SuperTrap();
};


#endif
