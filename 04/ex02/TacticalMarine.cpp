/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 18:12:46 by smago             #+#    #+#             */
/*   Updated: 2021/03/02 20:39:52 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	std::cout << "Tactical Marine ready for battle!\n";
}

TacticalMarine::TacticalMarine(TacticalMarine const &)
{
	std::cout << "Tactical Marine ready for battle!\n";
}

TacticalMarine& TacticalMarine::operator=(TacticalMarine const &)
{
	std::cout << "ASSIGNATION OPERATOR CALLED\n";
	return (*this);
}

ISpaceMarine*	TacticalMarine::clone() const
{
	TacticalMarine* tmp = new TacticalMarine(*this);
	return (tmp);
}

void	TacticalMarine::battleCry() const
{
	std::cout << "For the holy PLOT!\n";
}

void	TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *\n";
}
void	TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *\n";
}

TacticalMarine::~TacticalMarine()
{
	std::cout << "Aaargh...\n";
}


