/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:35:59 by smago             #+#    #+#             */
/*   Updated: 2021/02/23 09:21:27 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int 	main()
{
	std::string str;
	std::string Zombie = "Zombie";
	std::cout << "Enter NinjaTrap name: ";
	std::getline(std::cin, str);
	std::cout << std::endl;

	NinjaTrap *Ninja = new NinjaTrap(str);
	FragTrap Frag("FR4G");
	ClapTrap Clap("ClapTP");
	ScavTrap Scav("ScavTP");
	NinjaTrap NinjaTwo("NinjaTP");

	while (1)
	{
		std::cout << "\nChoose command:\n1 - melee attack\n2 - ranged attack\n";
		std::cout << "3 - take damage\n4 - repair\n5 - ninjaShoebox\n9 - exit\nEnter: ";
		std::getline(std::cin, str);
		std::cout << std::endl;
		if (str == "1")
			Ninja->meleeAttack(Zombie);
		else if (str == "2")
			Ninja->rangedAttack(Zombie);
		else if (str == "3")
		{
			std::cout << "Write amount of damage: ";
			std::getline(std::cin, str);
			std::cout << std::endl;
			Ninja->takeDamage(std::atoi(str.c_str()));
		}
		else if (str == "4")
		{
			std::cout << "Write amount of heal: ";
			std::getline(std::cin, str);
			std::cout << std::endl;
			Ninja->beRepaired(std::atoi(str.c_str()));
		}
		else if (str == "5")
		{
			std::cout << "Whom to attack:\n1 - ClapTrap\n2 - ScavTrap\n";
			std::cout << "3 - FragTrap\n4 - Ninja\n";
			std::cout << "Enter: ";
			std::getline(std::cin, str);
			std::cout << std::endl;
			if (str == "1")
				Ninja->ninjaShoebox(Clap);
			else if (str == "2")
				Ninja->ninjaShoebox(Scav);
			else if (str == "3")
				Ninja->ninjaShoebox(Frag);
			else if (str == "4")
				Ninja->ninjaShoebox(NinjaTwo);
			else
				std::cout << "Invalid command\n";
		}
		else if (str == "9")
			break;
		else 
			std::cout << "Invalid command\n";
	}

	delete Ninja;

	return (0);
}
