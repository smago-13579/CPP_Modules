/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:07:27 by smago             #+#    #+#             */
/*   Updated: 2021/03/03 17:28:10 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure: public AMateria
{
private:
	
public:
	Cure();

	Cure(Cure const &);
	Cure& operator=(Cure const &);
	
	AMateria* clone() const;
	void use(ICharacter& target);

	virtual ~Cure();
};


#endif
