/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 20:42:43 by smago             #+#    #+#             */
/*   Updated: 2021/02/09 20:48:56 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

void	new_zombies()
{
	std::cout << "CREATE SOME WARRIORS WITH RANDOM NAMES\n";
	ZombieHorde warriors("warrior", 5);
	std::cout << "\nANNOUNCE WARRIORS\n";
	warriors.announce();
	std::cout << "\nDESTROY ZOMBIE WARRIORS\n";
}

int 	main()
{
	std::cout << "CREATE SOME ARCHERS WITH RANDOM NAMES\n";
	ZombieHorde archers("archer", 5);
	std::cout << "\nANNOUNCE ARCHERS\n";
	archers.announce();

	std::cout << "\nMeanwhile in another location...\n";
	new_zombies();

	std::cout << "\nDESTROY ZOMBIE ARCHERS\n";
}