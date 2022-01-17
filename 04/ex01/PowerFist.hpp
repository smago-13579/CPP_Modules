/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 19:28:03 by smago             #+#    #+#             */
/*   Updated: 2021/02/28 19:30:32 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POWERFIST_HPP
#define POWERFIST_HPP

#include "AWeapon.hpp"

class PowerFist: public AWeapon
{
private:

public:
	PowerFist();
	PowerFist(PowerFist const &);
	PowerFist& operator=(PowerFist const &);
	virtual void attack() const;

	virtual ~PowerFist();
};


#endif 
