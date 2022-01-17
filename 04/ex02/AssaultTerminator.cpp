/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:30:50 by smago             #+#    #+#             */
/*   Updated: 2021/03/02 20:40:03 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	std::cout << "* teleports from space *\n";
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &)
{
	std::cout << "* teleports from space *\n";
}

AssaultTerminator& AssaultTerminator::operator=(AssaultTerminator const &)
{
	std::cout << "ASSIGNATION OPERATOR CALLED\n";
	return (*this);
}

ISpaceMarine*	AssaultTerminator::clone() const
{
	AssaultTerminator* tmp = new AssaultTerminator(*this);
	return (tmp);
}

void	AssaultTerminator::battleCry() const
{
	std::cout << "This code is unclean. PURIFY IT!\n";
}

void	AssaultTerminator::rangedAttack() const
{
	std::cout << "* does nothing *\n";
}
void	AssaultTerminator::meleeAttack() const
{
	std::cout << "* attacks with chainfists *\n";
}

AssaultTerminator::~AssaultTerminator()
{
	std::cout << "I’ll be back...\n";
}