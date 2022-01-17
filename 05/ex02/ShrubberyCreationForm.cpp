/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:25:55 by smago             #+#    #+#             */
/*   Updated: 2021/03/09 15:18:43 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

std::string ShrubberyCreationForm::str = \
"           I\n"\
"          III\n"\
"         IIIII\n"\
"        I-----I\n"\
"       I_______I\n"
"          ***\n"\
"          ***\n"\
"         *****\n"\
"        *******\n"\
"       zzzzzzzzz\n"\
"      XXXXXXXXXXX\n"
"         IIIII\n"\
"        IIIIIII\n"\
"       IIIIIIIII\n"\
"      IIIIIIIIIII\n"\
"     IIIIIIIIIIIII\n"\
"    IIIIIIIIIIIIIII\n"
"      ^^^^^^^^^^^\n"\
"     ^^^^^^^^^^^^^\n"\
"    ^^^^^^^^^^^^^^^\n"\
"   ^^^^^^^^^^^^^^^^^\n"\
"  ^^^^^^^^^^^^^^^^^^^\n";

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): \
						Form("Shrubbery", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &a): \
						Form("Shrubbery", 145, 137), target(a.target)
{
	std::cout << "Copy constructor called for ShrubberyCreationForm, target -  ";
	std::cout << this->target << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &a)
{
	this->target = a.target;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	this->Form::execute(executor);
	std::ofstream ofs(this->target, std::ofstream::app);
	if (!ofs.is_open())
		std::cout << "Can't open the file " << this->target << std::endl;
	ofs << this->str;
	ofs.close();
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}
