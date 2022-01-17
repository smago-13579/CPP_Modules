/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 18:05:57 by smago             #+#    #+#             */
/*   Updated: 2021/03/02 18:11:31 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TACTICALMARINE_HPP
#define TACTICALMARINE_HPP

#include "ISpaceMarine.hpp"

class TacticalMarine: public ISpaceMarine
{
private:

public:
	TacticalMarine();
	
	TacticalMarine(TacticalMarine const &);
	TacticalMarine& operator=(TacticalMarine const &);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;

	virtual ~TacticalMarine();
};

#endif
