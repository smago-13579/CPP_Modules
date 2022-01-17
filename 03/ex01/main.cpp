/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:35:59 by smago             #+#    #+#             */
/*   Updated: 2021/02/23 08:39:54 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int 	main()
{
	std::string str;
	std::cout << "Enter FR4G-TP name: ";
	std::getline(std::cin, str);
	std::cout << std::endl;
	FragTrap ZeroCool(str);
	std::string Zombie = "Zombie";

	while (1)
	{
		std::cout << "\nChoose command:\n1 - melee attack\n2 - ranged attack\n";
		std::cout << "3 - take damage\n4 - repair\n5 - vaultHunter\n9 - exit\nEnter: ";
		std::getline(std::cin, str);
		std::cout << std::endl;
		if (str == "1")
			ZeroCool.meleeAttack(Zombie);
		else if (str == "2")
			ZeroCool.rangedAttack(Zombie);
		else if (str == "3")
		{
			std::cout << "Write amount of damage: ";
			std::getline(std::cin, str);
			std::cout << std::endl;
			ZeroCool.takeDamage(std::atoi(str.c_str()));
		}
		else if (str == "4")
		{
			std::cout << "Write amount of heal: ";
			std::getline(std::cin, str);
			std::cout << std::endl;
			ZeroCool.beRepaired(std::atoi(str.c_str()));
		}
		else if (str == "5")
			ZeroCool.vaulthunter_dot_exe(Zombie);
		else if (str == "9")
			break;
		else 
			std::cout << "Invalid command\n";
	}
	std::cout << "Enter ScavTrap name: ";
	std::getline(std::cin, str);
	std::cout << std::endl;
	ScavTrap Scav(str);
	while (1)
	{
		std::cout << "\nChoose command:\n1 - melee attack\n2 - ranged attack\n";
		std::cout << "3 - take damage\n4 - repair\n5 - challenge\n9 - exit\nEnter: ";
		std::getline(std::cin, str);
		std::cout << std::endl;
		if (str == "1")
			Scav.meleeAttack(Zombie);
		else if (str == "2")
			Scav.rangedAttack(Zombie);
		else if (str == "3")
		{
			std::cout << "Write amount of damage: ";
			std::getline(std::cin, str);
			std::cout << std::endl;
			Scav.takeDamage(std::atoi(str.c_str()));
		}
		else if (str == "4")
		{
			std::cout << "Write amount of heal: ";
			std::getline(std::cin, str);
			std::cout << std::endl;
			Scav.beRepaired(std::atoi(str.c_str()));
		}
		else if (str == "5")
			Scav.challengeNewcomer();
		else if (str == "9")
			break;
		else 
			std::cout << "Invalid command\n";
	}

	return (0);

}
