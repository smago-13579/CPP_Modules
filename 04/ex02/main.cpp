/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 19:16:42 by smago             #+#    #+#             */
/*   Updated: 2021/03/03 22:30:39 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include "Squad.hpp"

void	anotherMain()
{
	TacticalMarine *one = new TacticalMarine;
	TacticalMarine *two = new TacticalMarine;
	AssaultTerminator *three = new AssaultTerminator;
	AssaultTerminator *four = new AssaultTerminator;
	Squad vls;

	std::cout << "We have " << vls.getCount() << " units.\n";
	std::cout << "We have " << vls.push(one) << " units.\n";
	std::cout << "We have " << vls.push(two) << " units.\n";
	std::cout << "We have " << vls.push(three) << " units.\n";
	std::cout << "We have " << vls.push(four) << " units.\n";

	ISquad *tmp = &vls;
	std::cout << "We have tmp - " << tmp->getCount() << " units.\n";

	TacticalMarine *five = new TacticalMarine;
	AssaultTerminator *six = new AssaultTerminator;

	tmp->push(five);
	std::cout << "We have " << vls.getCount() << " units.\n";
	std::cout << "We have tmp - " << tmp->getCount() << " units.\n";

	tmp->push(six);
	std::cout << "We have " << vls.getCount() << " units.\n";
	std::cout << "We have tmp - " << tmp->getCount() << " units.\n";

	std::cout << "\nCreate newTMP\n";
	std::cout << "_________________\n";
	Squad *newTmp = new Squad;
	*newTmp = vls;
	std::cout << "We have Newtmp - " << newTmp->getCount() << " units.\n";


	Squad copySquad(*newTmp);
	std::cout << "We have copySquad - " << copySquad.getCount() << " units\n";

	
	delete newTmp;
	std::cout << "newTMP deleted\n";
	std::cout << "________________\n";
}

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << "_________________\n";
	anotherMain();

	return 0;
}
