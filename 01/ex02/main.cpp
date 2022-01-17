/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:50:56 by smago             #+#    #+#             */
/*   Updated: 2021/02/09 19:01:24 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

void	anotherKingdom()
{
	Zombie Queen("Victoria", "Queen");
	Queen.announce();

	std::cout << "\nQueen: Our Kingdom is under attack.\n";
	std::cout << "Where's Sylvanna?\n";

	ZombieEvent archers;
	archers.setZombieType("archer");
	Zombie *Sylvanna = archers.newZombie("Sylvanna");
	Sylvanna->announce();

	std::cout << "\nSylvanna: We must defend our Queen.\n";
	std::cout << "Recruit some archers.\n\n";
	
	Zombie* randomArcher[5];
	for (size_t i = 0; i < 5; i++)
	{
		randomArcher[i] = archers.randomChump();
	}
	std::cout << "\n\tWAR BEGIN\n";
	for (size_t i = 0; i < 5; i++)
	{
		delete randomArcher[i];
	}
	std::cout << "\nSylvanna: there are too many people, we cannot protect you.\n";
	delete Sylvanna;
	std::cout << "\nQueen: Sylvanna do not leave me.\n";
}

int 	main()
{
	Zombie King("Aragorn", "King");
	King.announce();
	std::cout << "\nKing: where's warlord Garrosh?\n";

	ZombieEvent warlord;
	warlord.setZombieType("Warlord");
	Zombie* Garrosh = warlord.newZombie("Garrosh");
	Garrosh->announce();

	std::cout << "\n\tMeanwhile in another Kingdom...\n\n";
	anotherKingdom();

	std::cout << "\nGarrosh: Bad news from west Kingdom. Queen Victoria is dead.\n";
	std::cout << "Garrosh: I need eight warriors to attack people.\n";

	ZombieEvent warrior;
	warrior.setZombieType("warrior");
	Zombie* randomWarrior[8];
	for (size_t i = 0; i < 8; i++)
	{
		randomWarrior[i] = warrior.randomChump();
	}
	std::cout << "\nWarlord Garrosh with army attacked people...\n";
	std::cout << "But something went wrong.\n\n";

	for (size_t i = 0; i < 8; i++)
	{
		delete randomWarrior[i];
	}
	std::cout << "\nGarrosh last words: for the Horde...\n";
	delete Garrosh;
	std::cout << "\nKing: I don't regret anything\n";

	return (0);
}