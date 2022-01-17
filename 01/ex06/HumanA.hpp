/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 18:04:28 by smago             #+#    #+#             */
/*   Updated: 2021/02/11 19:55:18 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
private:
	const Weapon &wpn;
	std::string name;
public:
	HumanA(std::string name, const Weapon &wpn);
	~HumanA();
	void	attack();
};


#endif 
