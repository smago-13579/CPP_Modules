/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/28 20:44:26 by smago             #+#    #+#             */
/*   Updated: 2021/03/03 22:47:50 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
#define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant: public Enemy
{
public:
	SuperMutant();

	SuperMutant(SuperMutant const &);
	SuperMutant& operator=(SuperMutant const &);

	virtual void takeDamage(int);

	virtual ~SuperMutant();
};

#endif 
