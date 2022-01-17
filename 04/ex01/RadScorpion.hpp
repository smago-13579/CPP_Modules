/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 12:54:42 by smago             #+#    #+#             */
/*   Updated: 2021/03/03 22:47:45 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
#define RADSCORPION_HPP

#include "Enemy.hpp"

class RadScorpion: public Enemy
{
public:
	RadScorpion();

	RadScorpion(RadScorpion const &);
	RadScorpion& operator=(RadScorpion const &);

	virtual ~RadScorpion();
};



#endif 
