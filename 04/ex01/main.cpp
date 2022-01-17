/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 18:50:42 by smago             #+#    #+#             */
/*   Updated: 2021/03/03 23:07:39 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Character.hpp"
#include "Turtle.hpp"
#include "Gun.hpp"

void	anotherMain()
{
	Character Vlad("Vlad");
	PlasmaRifle PR;
	PowerFist PF;
	Gun Gun;
	Enemy *mutant = new SuperMutant();
	Enemy *turtle = new Turtle();

	std::cout << Vlad;
	std::cout << mutant->getType() << " HP - " << mutant->getHP() << std::endl;
	Vlad.attack(mutant);
	std::cout << mutant->getType() << " HP - " << mutant->getHP() << std::endl;

	Vlad.equip(&PR);
	std::cout << Vlad;

	std::cout << mutant->getType() << " HP - " << mutant->getHP() << std::endl;
	Vlad.attack(mutant);
	std::cout << mutant->getType() << " HP - " << mutant->getHP() << std::endl;
	Vlad.attack(mutant);
	std::cout << mutant->getType() << " HP - " << mutant->getHP() << std::endl;

	Vlad.equip(NULL);
	std::cout << Vlad;

	Vlad.equip(&PF);
	std::cout << Vlad;

	Vlad.attack(mutant);
	std::cout << mutant->getType() << " HP - " << mutant->getHP() << std::endl;
	Vlad.attack(mutant);
	std::cout << mutant->getType() << " HP - " << mutant->getHP() << std::endl;

	std::cout << Vlad;
	Vlad.attack(mutant);

	Character Bob(Vlad);
	Bob = Vlad;

	std::cout << "\nLet's attack turtle with a gun\n";
	std::cout << Bob;
	Bob.equip(&Gun);
	std::cout << Bob;
	Bob.attack(turtle);
	std::cout << turtle->getType() << " HP - " << turtle->getHP() << std::endl;
	Bob.recoverAP();
	Bob.attack(turtle);
}

int main()
{
	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	std::cout << "_______________\n";
	anotherMain();

	delete me;
	delete pr;
	delete pf;

	return (0);
}