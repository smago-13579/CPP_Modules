/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 20:46:20 by smago             #+#    #+#             */
/*   Updated: 2021/03/09 15:20:50 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): \
						Form("Robotomy", 72, 45), target(target)
{
	srand(time(NULL));
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &a): \
						Form("Robotomy", 72, 45), target(a.target)
{
	srand(time(NULL));
	std::cout << "Copy constructor called for RobotomyRequestForm, target -  ";
	std::cout << this->target << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const &a)
{
	this->target = a.target;
	return (*this);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	this->Form::execute(executor);
	if (rand() % 100 > 49)
	{
		std::cout << "**ZHZHZHEAFGJLAFSGL**\n";
		std::cout << this->target << " has been robotomized succesfully\n";
	}
	else
		std::cout << this->target << " robotomized failure\n";
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}
