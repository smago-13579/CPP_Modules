/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 18:26:18 by smago             #+#    #+#             */
/*   Updated: 2021/03/09 19:21:07 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade)
{
	if (grade < 0)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Bureaucrat "<< this->name << " constructor called\n";
}

Bureaucrat::Bureaucrat(Bureaucrat const &a): name(a.name), grade(a.grade)
{
	if (grade < 0)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	std::cout << "Copy constructor called for "<< this->name << std::endl;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat const &a)
{
	this->grade = a.grade;
	return (*this);
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
	const char* str = "Exception: Grade too high\n";
	return (str);
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
	const char* str = "Exception: Grade too low\n";
	return (str);
}

std::string	Bureaucrat::getName() const 
{
	return (this->name);
}
int		Bureaucrat::getGrade() const
{
	return (this->grade);
}

void	Bureaucrat::incGrade()
{
	if (this->grade > 1)
		this->grade -= 1;
	else 
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::decGrade()
{
	if (this->grade < 150)
		this->grade += 1;
	else
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat() 
{
	std::cout << "Bureaucrat " << this->name << " destructor called\n";
}

std::ostream&	operator<<(std::ostream &o, Bureaucrat const &a)
{
	o << a.getName() << ", bureaucrat grade " << a.getGrade() << std::endl;
	return (o);
}
