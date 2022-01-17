/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:46:50 by smago             #+#    #+#             */
/*   Updated: 2021/03/02 22:36:31 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice: public AMateria
{
private:
	
public:
	Ice();

	Ice(Ice const &);
	Ice& operator=(Ice const &);
	
	AMateria* clone() const;
	void use(ICharacter& target);

	virtual ~Ice();
};

#endif
