/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ISquad.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 13:53:18 by smago             #+#    #+#             */
/*   Updated: 2021/03/02 15:22:31 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ISQUAD_HPP
#define ISQUAD_HPP

#include "ISpaceMarine.hpp"

class  ISquad
{
public:
	virtual ~ISquad() {}
	virtual int getCount() const = 0;
	virtual ISpaceMarine* getUnit(int) const = 0;
	virtual int push(ISpaceMarine*) = 0;
};


#endif
