/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 22:14:20 by smago             #+#    #+#             */
/*   Updated: 2021/03/03 19:33:04 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character: public ICharacter
{
private:
	Character();

	std::string name;
	int count;

	AMateria* inventory[4];
public:
	Character(std::string const &name);

	Character(Character const &);
	Character& operator=(Character const &);

	std::string const &getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);

	virtual ~Character();
};

#endif
