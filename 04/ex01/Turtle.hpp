/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Turtle.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 22:46:40 by smago             #+#    #+#             */
/*   Updated: 2021/03/03 22:48:42 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TURTLE_HPP
#define TURTLE_HPP

#include "Enemy.hpp"

class Turtle: public Enemy
{
public:
	Turtle();

	Turtle(Turtle const &);
	Turtle& operator=(Turtle const &);

	virtual ~Turtle();
};

#endif
