/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 12:29:11 by smago             #+#    #+#             */
/*   Updated: 2021/03/09 19:25:26 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void 	anotherMain()
{
	Bureaucrat Liza("Liza", 10);
	for (int i = 0; i < 20; i++)
	{
		std::cout << Liza;
		Liza.incGrade();
	}
	
	std::cout << "\nBureaucrat Bob won't be created because of Exception\n";
	Bureaucrat Bob(Liza);
}

int main()
{
	Bureaucrat* Tom = new Bureaucrat("Tom", 141);
	try
	{
		Bureaucrat John(*Tom); // John equal Tom
		Bureaucrat Kate("Kate", 90);
		std::cout << *Tom << John << Kate;
		Kate = John;
		std::cout << "\nKate = John = Tom\n";
		std::cout << Kate << std::endl;
		anotherMain();
		
		std::cout << "\nBureaucrat Another won't be created\n";
		Bureaucrat another("Another", 10);
	}	
	catch(const std::exception& e)
	{
		std::cout << std::endl << e.what() << std::endl;
	}
	try
	{
		std::cout << "TRY TO CREATE MARY WITH LOW GRADE\n";
		Bureaucrat Mary("Mary", 160);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	delete Tom;
	std::cout << "\n--Finish--\n";
	
	return 0;
}
