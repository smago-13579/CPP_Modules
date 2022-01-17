/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 14:28:57 by smago             #+#    #+#             */
/*   Updated: 2021/02/08 18:55:37 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheHeap()
{
	Pony *prince = new Pony("Prince", 14);
	prince->walk();
	prince->sleep();
	delete prince;
}

void	ponyOnTheStack()
{
	Pony princess("Princess", 13);
	princess.walk();
	princess.sleep();
}

int 	main()
{
	std::cout << "Make pony on the heap...\n";
	std::cout << std::endl;
	ponyOnTheHeap();

	std::cout << "Make pony on the stack...\n";
	std::cout << std::endl;
	ponyOnTheStack();
	
	std::cout << "end\n";
	return (0);
}