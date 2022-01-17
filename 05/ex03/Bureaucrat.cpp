/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 18:26:18 by smago             #+#    #+#             */
/*   Updated: 2021/03/09 15:55:28 by smago            ###   ########.fr       */
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
	std::cout << "Copy constructor called\n";
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

void	Bureaucrat::signForm(Form &form)
{
	if (form.getSign())
	{
		std::cout << "Bureaucrat " << this->name;
		std::cout << " can't sign form " << form.getName() << " because it's already signed\n";
	}
	else if (form.getGradeSign() < this->grade)
	{
		std::cout << "Bureaucrat " << this->name;
		std::cout << " can't sign form " << form.getName() << " because his grade isn't high enough\n";
	}
	else
	{
		std::cout << "Bureaucrat " << this->name;
		std::cout << " signs form " << form.getName() << std::endl;
	}
	form.beSigned(*this);
}

void	Bureaucrat::executeForm(Form const &form)
{
	if (form.getSign() == 0)
		std::cout << this->name << " (bureaucrat_[" << this->grade << " Grade])" << " can't execute unsigned " << form;
	else if (this->grade > form.getGradeExec())
		std::cout << this->name << " (bureaucrat_[" << this->grade << " Grade])" << " grade too low for " << form;
	else
		std::cout << this->name << " (bureaucrat_[" << this->grade << " Grade])" << " executes " << form;
	form.execute(*this);
}

Bureaucrat::~Bureaucrat() 
{
	std::cout << "Bureaucrat " << this->name << " destructor called\n";
}

std::ostream&	operator<<(std::ostream &o, Bureaucrat const &a)
{
	o << a.getName() << " (bureaucrat_[" << a.getGrade() << " Grade]) " << std::endl;
	return (o);
}
