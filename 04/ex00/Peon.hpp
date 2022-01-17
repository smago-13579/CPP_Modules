/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/27 00:05:37 by smago             #+#    #+#             */
/*   Updated: 2021/02/27 18:16:15 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
#define PEON_HPP

#include "Victim.hpp"

class Peon: public Victim
{
private:
	Peon();
public:
	Peon(std::string const &name);
	Peon(Peon const &);
	Peon& operator=(Peon const &);

	void getPolymorphed() const;

	virtual ~Peon();
};


#endif 
