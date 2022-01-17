/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 19:35:02 by smago             #+#    #+#             */
/*   Updated: 2021/03/04 17:51:16 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
#define SORCERER_HPP

#include "Peon.hpp"
#include "Peasant.hpp"

class Sorcerer
{
private:
	Sorcerer();
	std::string name;
	std::string title;
public:
	Sorcerer(std::string const &name, std::string const &title);
	Sorcerer(Sorcerer const &);
	Sorcerer &operator=(Sorcerer const &);

	std::string getName();
	std::string getTitle();
	void polymorph(Victim const &) const;

	virtual ~Sorcerer();
};

std::ostream& operator<<(std::ostream &, Sorcerer &);


#endif 
