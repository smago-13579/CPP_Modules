/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:27:35 by smago             #+#    #+#             */
/*   Updated: 2021/03/02 19:29:45 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASSAULTTERMINATOR_HPP
#define ASSAULTTERMINATOR_HPP

#include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
private:

public:
	AssaultTerminator();
	
	AssaultTerminator(AssaultTerminator const &);
	AssaultTerminator& operator=(AssaultTerminator const &);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;

	virtual ~AssaultTerminator();
};

#endif

