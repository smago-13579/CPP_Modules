/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 12:29:11 by smago             #+#    #+#             */
/*   Updated: 2021/03/09 19:02:21 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void 	anotherMain()
{
	Intern intern;
	Bureaucrat Tom("Tom", 150);
	Form* Tree = intern.makeForm("shrubbery creation", "Tree");
	Form* Robot = intern.makeForm("robotomy request", "Robot");
	Form* John = intern.makeForm("presidential pardon", "John");

	std::cout << Tom << *Tree << *Robot << *John;

	try
	{
		Tom.signForm(*Tree);
	}
	catch(const std::exception &e)
	{
		std::cerr << e.what() << std::endl;
		delete Tree;
	}
	try
	{
		Tom.signForm(*Robot);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		delete Robot;
	}
	try
	{
		Tom.signForm(*John);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		delete John;
	}
}

int main()
{
	std::cout << "\n---START---\n\n";
	Bureaucrat Tom("Tom", 5);
	Intern intern;
	Form* Tree = intern.makeForm("shrubbery creation", "Tree");
	Form* Robot = intern.makeForm("robotomy request", "Robot");
	Form* John = intern.makeForm("presidential pardon", "John");
	intern.makeForm("NULL", "NONE");

	std::cout << Tom << *Tree << *Robot << *John;


	std::cout << "\n______SIGN_FORMS____________\n";
	Tom.signForm(*Tree);
	Tom.signForm(*Robot);	
	Tom.signForm(*John);	
	std::cout << *Tree << *Robot << *John;

	std::cout << "\nALL FORMS ARE SIGNED\n____EXECUTE_THEM_______\n\n";
	Tom.executeForm(*Tree);
	Tom.executeForm(*Robot);
	Tom.executeForm(*John);

	std::cout << std::endl << "GO TO ANOTHER MAIN\n--------------------------\n";
	anotherMain();

	delete Tree;
	delete Robot;
	delete John;

	std::cout << "\n--Finish--\n\n";
	
	return 0;
}
