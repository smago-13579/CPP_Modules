/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 18:14:43 by smago             #+#    #+#             */
/*   Updated: 2021/03/03 18:44:54 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
private:
	int count;
	AMateria* storage[4];
public:
	MateriaSource();

	MateriaSource(MateriaSource const &);
	MateriaSource& operator=(MateriaSource const &);

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);

	virtual ~MateriaSource();
};


#endif
