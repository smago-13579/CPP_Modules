/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:37:04 by smago             #+#    #+#             */
/*   Updated: 2021/03/03 19:51:14 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria;
# include "ICharacter.hpp"

class AMateria
{
private:
	AMateria();
	AMateria(AMateria const &);
	AMateria& operator=(AMateria const &);
protected:
	std::string type;
	unsigned int _xp;
public:
	AMateria(std::string const &type);

	std::string const &getType() const; 
	unsigned int getXP() const; 		
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);

	virtual ~AMateria();
};

#endif

