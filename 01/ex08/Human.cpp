/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 19:10:49 by smago             #+#    #+#             */
/*   Updated: 2021/02/12 20:17:04 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

void	Human::meleeAttack(std::string const& target)
{
	std::cout << "Attacking " << target << " with the sword.\n";
}

void	Human::rangedAttack(std::string const& target)
{
	std::cout << "Shooting " << target << " with the Wooden bow.\n";
}

void	Human::intimidatingShout(std::string const& target)
{
	std::cout << "Angry shout on the " << target << std::endl;
}

void	Human::action(std::string const& action_name, std::string const& target)
{
	void 	(Human:: *action[3])(std::string const &) = {
														&Human::meleeAttack,
														&Human::rangedAttack,
														&Human::intimidatingShout
														};
	int attack = 9;
	while (attack == 9)
	{
		attack = (action_name.compare("meleeAttack") == 0) ? 0 : 
		(action_name.compare("rangedAttack") == 0) ? 1 :
		(action_name.compare("intimidatingShout") == 0) ? 2 : 8;
	}
	while (attack != 8)
	{
		(this->*action[attack])(target);
		return ;
	}
	std::cout << "Invalid action\n";
}
