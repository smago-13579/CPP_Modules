/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 23:38:18 by smago             #+#    #+#             */
/*   Updated: 2021/02/27 20:47:10 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
#define VICTIM_HPP

#include <iostream>
#include <string>

class Victim
{
protected:
	Victim();
	std::string name;
public:
	Victim(std::string const &name);
	Victim(Victim const &);
	Victim& operator=(Victim const &);

	std::string getName();
	virtual void getPolymorphed() const;

	virtual ~Victim();
};

std::ostream& operator<<(std::ostream &, Victim &);



#endif
