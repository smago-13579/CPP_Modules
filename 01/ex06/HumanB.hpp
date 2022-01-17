/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 18:47:35 by smago             #+#    #+#             */
/*   Updated: 2021/02/11 19:59:48 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
private:
	const Weapon *wpn;
	std::string name;
public:
	HumanB(std::string name);
	~HumanB();
	void	setWeapon(Weapon const &wpn);
	void 	attack();
};


#endif 
