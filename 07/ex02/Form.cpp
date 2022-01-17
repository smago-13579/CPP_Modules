/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 21:17:18 by smago             #+#    #+#             */
/*   Updated: 2021/03/15 21:22:08 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() {
	this->name = "Default name";
	this->profession = "No prof";
}

Form::Form(std::string name, std::string str): name(name), profession(str) 
{
}

Form::Form(Form const &a): name(a.name), profession(a.profession) 
{
}

Form&	Form::operator=(Form& a) {
	this->name = a.name;
	this->profession = a.profession;
	return (*this);
}

Form&	Form::operator=(int i) {
	(void)i;
	this->name = "Default name";
	this->profession = "No prof";
	return (*this);
}

std::string	Form::getName() const {
	return (this->name);
}

std::string&	Form::getString() {
	return (profession);
}

Form::~Form() {}

std::ostream&	operator<<(std::ostream& o, Form &a)
{
	o << "Class Form name: " << a.getName() << ", profession: " << a.getString();
	return (o);
}

