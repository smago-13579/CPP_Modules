/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peasant.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/04 17:38:51 by smago             #+#    #+#             */
/*   Updated: 2021/03/04 17:45:40 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEASANT_HPP
#define PEASANT_HPP

#include "Victim.hpp"

class Peasant: public Victim
{
private:
	Peasant();
public:
	Peasant(std::string const &name);
	Peasant(Peasant const &);
	Peasant& operator=(Peasant const &);

	void getPolymorphed() const;

	virtual ~Peasant();
};


#endif
