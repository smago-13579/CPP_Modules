/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:35:59 by smago             #+#    #+#             */
/*   Updated: 2021/02/23 10:06:38 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int 	main()
{
	std::string str;
	std::string Zombie = "Zombie";
	FragTrap Frag("FR4G");
	ClapTrap Clap("ClapTP");
	ScavTrap Scav("ScavTP");
	NinjaTrap Ninja("Ninja");
	SuperTrap *Ronin = new SuperTrap("Ronin");

	while (1)
	{
		std::cout << "\nChoose command:\n1 - melee attack\n2 - ranged attack\n";
		std::cout << "3 - take damage\n4 - repair\n5 - ninjaShoebox\n6 - vaultHunter\n9 - exit\nEnter: ";
		std::getline(std::cin, str);
		std::cout << std::endl;
		if (str == "1")
			Ronin->meleeAttack(Zombie);
		else if (str == "2")
			Ronin->rangedAttack(Zombie);
		else if (str == "3")
		{
			std::cout << "Write amount of damage: ";
			std::getline(std::cin, str);
			std::cout << std::endl;
			Ronin->takeDamage(std::atoi(str.c_str()));
		}
		else if (str == "4")
		{
			std::cout << "Write amount of heal: ";
			std::getline(std::cin, str);
			std::cout << std::endl;
			Ronin->beRepaired(std::atoi(str.c_str()));
		}
		else if (str == "5")
		{
			std::cout << "Whom to attack:\n1 - ClapTrap\n2 - ScavTrap\n";
			std::cout << "3 - FragTrap\n4 - Ninja\n";
			std::cout << "Enter: ";
			std::getline(std::cin, str);
			std::cout << std::endl;
			if (str == "1")
				Ronin->ninjaShoebox(Clap);
			else if (str == "2")
				Ronin->ninjaShoebox(Scav);
			else if (str == "3")
				Ronin->ninjaShoebox(Frag);
			else if (str == "4")
				Ronin->ninjaShoebox(Ninja);
			else
				std::cout << "Invalid command\n";
		}
		else if (str == "6")
			Ronin->vaulthunter_dot_exe(Zombie);
		else if (str == "9")
			break;
		else 
			std::cout << "Invalid command\n";
	}
	delete Ronin;

	return (0);
}
