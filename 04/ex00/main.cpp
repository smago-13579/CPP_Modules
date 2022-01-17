/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/26 20:29:51 by smago             #+#    #+#             */
/*   Updated: 2021/03/04 18:02:50 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"


void anotherTest()
{
	Sorcerer bob("Bob", "the Archmage");
	Peon* john = new Peon("John");
	Peasant Elvek("Elvek");
	Victim* mark = &Elvek;
	
	Sorcerer tom(bob);
	Peon johnny(*john);

	bob = tom;
	*john = johnny;

	std::cout << bob << tom << *john << *mark << johnny;

	bob.polymorph(*john);
	bob.polymorph(johnny);
	tom.polymorph(*mark);

	delete john;
}

int main()
{
	anotherTest();
	std::cout << "______________________\n";

	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");
	
	std::cout << robert << jim << joe;
	
	robert.polymorph(jim);
	robert.polymorph(joe);
	
	return 0;
}