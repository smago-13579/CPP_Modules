/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 15:16:30 by smago             #+#    #+#             */
/*   Updated: 2021/03/09 15:38:51 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string name, int siG, int exG): name(name), \
				sign(false), gradeSign(siG), gradeExec(exG)
{
	if (gradeSign < 1 || gradeExec < 1) {
		throw Form::GradeTooHighException();
	}
	if (gradeSign > 150 || gradeExec > 150) {
		throw Form::GradeTooLowException();
	}
	std::cout << "Form " << this->name << " constructor created\n";
}

Form::Form(Form const &a):  name(a.name), \
				sign(a.sign), gradeSign(a.gradeSign), gradeExec(a.gradeExec)
{
	if (gradeSign < 1 || gradeExec < 1) {
		Form::GradeTooHighException();
	}
	if (gradeSign > 150 || gradeExec > 150) {
		Form::GradeTooLowException();
	}
	std::cout << "Copy Form "<< this->name << " constructor called\n";
}

Form&	Form::operator=(Form const &a)
{
	this->sign = a.sign;
	return (*this);
}

const char* Form::GradeTooHighException::what() const throw()
{
	const char* str = "Exception Form: Grade too high\n";
	return (str);
}

const char* Form::GradeTooLowException::what() const throw()
{
	const char* str = "Exception Form: Grade too low\n";
	return (str);
}

const char* Form::FormUnsignedException::what() const throw()
{
	const char* str = "The unsigned Form can't be executed\n";
	return (str);
}

std::string	Form::getName() const
{
	return (this->name);
}

bool	Form::getSign() const
{
	return (this->sign);
}

int		Form::getGradeSign() const
{
	return (this->gradeSign);
}

int 	Form::getGradeExec() const
{
	return (this->gradeExec);
}

void	Form::beSigned(Bureaucrat const &Brc)
{
	if (Brc.getGrade() > this->gradeSign)
		throw Form::GradeTooLowException();
	else if (this->sign == true)
		std::cout << "Form " << this->name << " is already signed\n";
	else
		this->sign = true;
}

void	Form::execute(Bureaucrat const &executor) const
{
	if (this->sign == 0)
		throw Form::FormUnsignedException();
	if (this->gradeExec < executor.getGrade())
		throw Form::GradeTooLowException();
}

Form::~Form()
{
}

std::ostream&	operator<<(std::ostream &o, Form const &form)
{
	o << "Form " << form.getName();
	if (form.getSign() != 0)
		o << " [Signed]_(";
	else 
		o << " [Unsigned]_(";
	o << form.getGradeSign() << " signGrade)_(" << form.getGradeExec();
	o << " exeGrade)\n";
	return (o);
}