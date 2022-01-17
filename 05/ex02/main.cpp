/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 12:29:11 by smago             #+#    #+#             */
/*   Updated: 2021/03/09 16:19:54 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void 	anotherMain()
{
	Bureaucrat Liza("Liza", 25);
	ShrubberyCreationForm Tree("Tree");
	RobotomyRequestForm Robot("robot");
	PresidentialPardonForm Thief("Thief");

	std::cout << Liza << Tree << Robot << Thief;

	try {
		std::cout << "\nBureaucrat trying to execute form Tree\n";
		std::cout << "__________________________\n";
		Liza.executeForm(Tree);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << "\n__________________________\n";
	}
	try {
		std::cout << "\nBureaucrat trying to execute form Robot\n";
		std::cout << "__________________________\n";
		Liza.executeForm(Robot);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << "\n__________________________\n";
	}
	try {
		std::cout << "\nBureaucrat trying to execute form Thief\n";
		std::cout << "__________________________\n";
		Liza.executeForm(Thief);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << "\n__________________________\n";
	}

	std::cout <<"SIGN ALL FORMS\n";
	Liza.signForm(Tree);
	Liza.signForm(Robot);
	Liza.signForm(Thief);
	std::cout << Tree << Robot << Thief << std::endl;

	std::cout << "DECREASE LIZA'S GRADE\n";
	for (int i = 0; i < 120; i++)
		Liza.decGrade();
	std::cout << Liza;

	try {
		std::cout << "\nBureaucrat trying to execute form Tree\n";
		std::cout << "__________________________\n";
		Liza.executeForm(Tree);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << "\n__________________________\n";
	}
	try {
		std::cout << "\nBureaucrat trying to execute form Robot\n";
		std::cout << "__________________________\n";
		Liza.executeForm(Robot);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << "\n__________________________\n";
	}
	try {
		std::cout << "\nBureaucrat trying to execute form Thief\n";
		std::cout << "__________________________\n";
		Liza.executeForm(Thief);
	}
	catch(const std::exception& e) {
		std::cerr << e.what() << "\n__________________________\n";
	}
		
}

int main()
{
	std::cout << "\n---START---\n\n";
	try
	{	
		Bureaucrat Tom("Tom", 5);
		ShrubberyCreationForm ABC("ABC");
		RobotomyRequestForm Draft("Draft");
		PresidentialPardonForm John("John");

		std::cout << Tom << ABC << Draft << John;
		std::cout << "\n__________________________\n";
		Tom.signForm(ABC);
		Tom.signForm(Draft);	
		Tom.signForm(John);	

		std::cout << "\nALL FORMS ARE SIGNED\nEXECUTE THEM\n\n";
		std::cout << ABC << Draft << John << std::endl;

		Tom.executeForm(ABC);
		std::cout << std::endl;
		Tom.executeForm(John);
		std::cout << std::endl;
		Tom.executeForm(Draft);
		std::cout << std::endl;
		Tom.executeForm(Draft);
		std::cout << std::endl;
		Tom.executeForm(Draft);
		std::cout << std::endl;
		Tom.executeForm(Draft);
	
		std::cout << std::endl << "GO TO ANOTHER MAIN\n--------------------------\n";
		anotherMain();
	}	
	catch(const std::exception& e) {
		std::cout << e.what();
	}
	std::cout << "\n--Finish--\n\n";
	
	return 0;
}
