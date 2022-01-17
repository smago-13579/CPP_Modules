/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/17 22:59:47 by smago             #+#    #+#             */
/*   Updated: 2021/02/23 08:35:51 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): name("NO NAME"), HP(100), maxHP(100), EP(100), \
			maxEP(100), mAttack(30), rAttack(20), armorDamage(5) 
{
	this->level = 1;
	std::cout << "DEFAULT CONSTRUCTOR CALLED.\n";
}

FragTrap::FragTrap(std::string const &name): name(name), HP(100), maxHP(100), EP(100), \
			maxEP(100), mAttack(30), rAttack(20), armorDamage(5) 
{
	this->level = 1;
	std::cout << "FR4G-TP < " << this->name << " > created\n";
	std::cout << "FR4G-TP < " << this->name << " >: Directive one: Protect humanity! ";
	std::cout << "Directive two: Obey Jack at all costs. Directive three: Dance!\n";
}

FragTrap::FragTrap(FragTrap const &a)
{
	*this = a;
	std::cout << "COPY CONSTRUCTOR CALLED\n";
}

FragTrap&	FragTrap::operator=(FragTrap const &a)
{
	this->name = a.name;
	this->HP = a.HP;
	this->maxHP = a.maxHP;
	this->EP = a.EP;
	this->maxEP = a.maxEP;
	this->mAttack = a.mAttack;
	this->rAttack = a.rAttack;
	this->armorDamage = a.armorDamage;
	std::cout << "ASSIGNATION OPERATOR CALLED\n";
	return (*this);
}

void	FragTrap::meleeAttack(std::string const &target)
{
	if (this->EP >= 50 && this->HP != 0)
	{
		std::cout << "FR4G-TP < " << this->name << " > attacks " << target << " in melee,";
		std::cout << " causing " << this->mAttack << " points of damage\n";
		std::cout << "FR4G-TP < " << this->name << " >: Heyyah! Take that!\n";
		std::cout << "Energy points: " << this->EP << " - 50 = " << this->EP - 50 << std::endl;
		this->EP -= 50;
	}
	else if (this->HP == 0)
	{
		std::cout << "HP - 0\n";
		std::cout << "FR4G-TP < " << this->name << " >: I don't feel my hands. Revive me...\n";
	}
	else
	{
		std::cout << "FR4G-TP < " << this->name << " >: Not enough energy... Energize me...\n";
	}
}

void	FragTrap::rangedAttack(std::string const &target)
{
	if (this->EP >= 40 && this->HP != 0)
	{
		std::cout << "FR4G-TP < " << this->name << " > attacks " << target << " at range,";
		std::cout << " causing " << this->rAttack << " points of damage\n";
		std::cout << "FR4G-TP < " << this->name << " >: Grenaaaade! Bad guy go boom!\n";
		std::cout << "Energy points: " << this->EP << " - 40 = " << this->EP - 40 << std::endl;
		this->EP -= 40;
	}
	else if (this->HP == 0)
	{
		std::cout << "HP - 0\n";
		std::cout << "FR4G-TP < " << this->name << " >: I don't feel my hands. Revive me...\n";
	}
	else
	{
		std::cout << "FR4G-TP < " << this->name << " >: Not enough energy... Energize me...\n";
	}
}

void	FragTrap::takeDamage(unsigned int amount)
{
	int damage = (int)amount - this->armorDamage;
	if (damage < 0)
		damage = 0;
	if (this->HP > 0)
	{
		std::cout << "FR4G-TP < " << this->name << " > takes damage by ";
		std::cout << damage << " health points.\n";
		std::cout << "FR4G-TP < " << this->name << " >: Why do I even feel pain?!\n";
		if (damage > 0)
			this->HP = this->HP - (int)amount + this->armorDamage;
		if (this->HP <= 0)
		{
			this->HP = 0;
			std::cout << "FR4G-TP < " << this->name << " >: ";
			std::cout << "Argh arghargh death gurgle gurglegurgle urgh... death.\n";
		}
		std::cout << "HP: " << this->HP << std::endl;
	}
	else
	{
		std::cout << "FR4G-TP < " << this->name << " >: ";
		std::cout << "I can't die anymore... \n";
		std::cout << "HP - 0\n";
	}
	
}

void	FragTrap::beRepaired(unsigned int amount)
{
	if (this->HP == 0)
		std::cout << "FR4G-TP < " << this->name << " > cannot be repaired, only disposal...\n";
	else
	{
		std::cout << "The FR4G-TP < " << this->name << " > renovated.\nHP +" << amount;
		std::cout << "\nEP +" << amount << std::endl;
		std::cout << "FR4G-TP < " << this->name << " >: ";
		std::cout << "Can I just say... yeehaw...\n";
		this->HP += int(amount);
		this->EP += int(amount);
		if (this->HP > this->maxHP)
			this->HP = this->maxHP;
		if (this->EP > this->maxEP)
			this->EP = this->maxEP;
		std::cout << "HP - " << this->HP << " EP - " << this->EP << std::endl;
	}
}

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	if (this->EP >= 25 && this->HP != 0)
	{
		srand(time(NULL));
		int i = rand() % 5;
		if (i == 0)
		{
			std::cout << "Freezing an enemy\n";
			std::cout << "FR4G-TP < " << this->name << " > attacks " << target << " with freeze blaster,";
			std::cout << " causing 30 points of damage.\n";
			std::cout << "FR4G-TP < " << this->name << " >: Take a chill pill!\n";
		}
		else if (i == 1)
		{
			std::cout << "Magic attack(Fireball)\n";
			std::cout << "FR4G-TP < " << this->name << " > attacks " << target << " with fireball,";
			std::cout << " causing 35 points of damage.\n";
			std::cout << "FR4G-TP < " << this->name << " >: Hot potato!\n";
		}
		else if (i == 2)
		{
			std::cout << "Uppercut\n";
			std::cout << "FR4G-TP < " << this->name << " > hits " << target << " with an uppercut,";
			std::cout << " causing 25 points of damage.\n";
			std::cout << "FR4G-TP < " << this->name << " >: Wow, did I really do that?\n";
			std::cout << "Is it dead? Can, can I open my eyes now?\n";
		}
		else if (i == 3)
		{
			std::cout << "High Kick\n";
			std::cout << "FR4G-TP < " << this->name << " > hits " << target << " with a high kick,";
			std::cout << " causing 30 points of damage.\n";
			std::cout << "FR4G-TP < " << this->name << " >: Huh, robot's don't do that.\n";
		}
		else if (i == 4)
		{
			std::cout << "Throwing tomato\n";
			std::cout << "FR4G-TP < " << this->name << " > throws a tomato on " << target;
			std::cout << " causing 10 points of damage.\n";
			std::cout << "FR4G-TP < " << this->name << " >: Let's get this party started!\n";
		}
		this->EP -= 25;
		std::cout << "EP - " << this->EP << std::endl;
	}
	else if (this->HP == 0)
	{
		std::cout << "HP - 0\n";
		std::cout << "FR4G-TP < " << this->name << " >: I don't feel my hands. Revive me...\n";
	}
	else 
	{
		std::cout << "FR4G-TP < " << this->name << " >: Not enough energy... Energize me...\n";
		std::cout << "EP - " << this->EP << std::endl;
	}
}

FragTrap::~FragTrap()
{
	std::cout << "Destructor called. ";
	std::cout << "FR4G-TP < " << this->name << " > destroyed\n";
}

