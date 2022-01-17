/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 10:35:59 by smago             #+#    #+#             */
/*   Updated: 2021/02/23 08:33:55 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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

	return (0);

}
