/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 12:29:11 by smago             #+#    #+#             */
/*   Updated: 2021/03/09 19:14:44 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

void 	anotherMain()
{
	Bureaucrat Liza("Liza", 10);
	Form Cash("Cash", 20, 150);
	Form D("D", 100, 100);

	std::cout << Liza << Cash << D;
	Liza.signForm(Cash);
	D = Cash;
	Form B(D);
	std::cout << "Operator assigned called\n" << D << B << std::endl;

	try
	{
		std::cout << "\nTRY_TO_SIGN_ALREADY_SIGNED_FORMS\n----------------------\n";
		Liza.signForm(Cash);
		Liza.signForm(D);
		std::cout << "\nTRY TO CREATE WRONG FORM\n-----------------------\n";
		Form wrong("Wrong", 200, 100); // grade to low sign
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
		try
		{
			std::cout << "\nTRY TO CREATE AWRONG FORM\n-----------------------\n";
			Form aWrong("aWrong", 50, 0); // grade to high exec
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what();
		}
	}
	try
	{
		std::cout << "\n-------------------\n";
		std::cout << "Try to sign form W with func beSigned()\n";
		Form W("W", 1, 1);
		std::cout << Liza << W;
		W.beSigned(Liza);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}

int main()
{
	try
	{	
		Bureaucrat Tom("Tom", 11);
		Form ABC("ABC", 30, 140);
		Tom.signForm(ABC);
		std::cout << std::endl;
		std::cout << "GO TO ANOTHER MAIN\n--------------------------\n";
		anotherMain();

		std::cout << "\n_____________\n";
		Form hard("hard", 5, 120);
		std::cout << hard << Tom;
		Tom.signForm(hard);
	}
	catch(const std::exception& e)
	{
		std::cout << e.what();
	}
	std::cout << "\n--Finish--\n\n";
	
	return 0;
}
