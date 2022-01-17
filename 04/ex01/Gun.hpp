/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Gun.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:51:24 by smago             #+#    #+#             */
/*   Updated: 2021/03/03 22:53:41 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GUN_HPP
#define GUN_HPP

#include "AWeapon.hpp"

class Gun: public AWeapon
{
public:
	Gun();
	Gun(Gun const &);
	Gun& operator=(Gun const &);
	virtual void attack() const;

	virtual ~Gun();
};


#endif

