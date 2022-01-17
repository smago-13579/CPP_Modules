/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:28:07 by smago             #+#    #+#             */
/*   Updated: 2021/03/02 19:49:28 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
#define SQUAD_HPP

#include "ISquad.hpp"

class Squad: public ISquad
{
private:
	int count;
	ISpaceMarine** units;
public:
	Squad();

	Squad(Squad const &);
	Squad& operator=(Squad const &);

	int getCount() const;
	ISpaceMarine* getUnit(int) const;
	int push(ISpaceMarine*);

	virtual ~Squad();
};


#endif