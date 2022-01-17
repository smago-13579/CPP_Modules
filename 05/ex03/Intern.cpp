/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 17:47:21 by smago             #+#    #+#             */
/*   Updated: 2021/03/09 18:46:36 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form*	createShrubbery(std::string const &target) { 
	return (new ShrubberyCreationForm(target));
}
Form*	createRobotomy(std::string const &target) {
	return (new RobotomyRequestForm(target));
}
Form*	createPresidential(std::string const &target) {
	return (new PresidentialPardonForm(target));
}

std::string Intern::formName[3] = {
	"shrubbery creation",
	"robotomy request",
	"presidential pardon"
};

Intern::Intern() 
{
}

Intern::Intern(Intern const &)
{
}

Intern&	Intern::operator=(Intern const &)
{
	return (*this);
}

Form*	Intern::makeForm(std::string const &name, std::string const &target)
{
	Form *tmp;
	
	Form*	(*func[3])(std::string const &) = {
		&createShrubbery,
		&createRobotomy,
		&createPresidential
	};
	for (int i = 0; i < 3; i++)
	{
		if (formName[i] == name)
		{
			tmp = (*func[i])(target);
			std::cout << "Intern creates " << tmp->getName() << std::endl;
			return (tmp);
		}
	}
	std::cout << "Error!!! Intern can't create this form\n";
	return 0;
}

Intern::~Intern()
{
}

