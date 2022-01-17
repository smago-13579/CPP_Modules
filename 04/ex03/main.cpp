/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 19:21:22 by smago             #+#    #+#             */
/*   Updated: 2021/03/04 18:27:50 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "MateriaSource.hpp"

void	anotherMain()
{
	MateriaSource src;
	src.learnMateria(new Ice());
	src.learnMateria(new Cure());
	src.learnMateria(new Ice());
	src.learnMateria(new Cure());

	std::cout << "Add 5th element of materia to storage\n";
	Cure cure_add;
	Cure cure_del;
	src.learnMateria(&cure_add);

	std::cout << "Add null materia to storage\n";
	src.learnMateria(NULL);

	Character chara("John");

	chara.equip(src.createMateria("ice"));
	chara.equip(src.createMateria("cure"));
	chara.equip(&cure_del);
	chara.equip(src.createMateria("cure"));

	std::cout << "Add 5th element to inventory\n";
	chara.equip(&cure_add);
	AMateria* cure_clone = cure_add.clone();

	std::cout << "Delete materia from inventory then add another materia\n";
	chara.unequip(2);
	chara.equip(cure_clone);

	std::cout << "Add null materia to inventory\n";
	chara.equip(NULL);

	Character bob("Bob");
	bob = chara;
	Character jim(chara);
}

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");
	
	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;

	std::cout << "____________________\n";
	anotherMain();

	return 0;
}