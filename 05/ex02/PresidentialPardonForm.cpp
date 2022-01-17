/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:58:06 by smago             #+#    #+#             */
/*   Updated: 2021/03/09 16:06:34 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): \
						Form("Presidential", 25, 5), target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &a): \
						Form("Presidential", 25, 5), target(a.target)
{
	std::cout << "Copy constructor called for PresidentialPardonForm, target -  ";
	std::cout << this->target << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const &a)
{
	this->target = a.target;
	return (*this);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	this->Form::execute(executor);
	std::cout << this->target << " has been pardoned by Zafod Beeblebrox.\n";
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
