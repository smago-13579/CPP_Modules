/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/06 14:20:28 by smago             #+#    #+#             */
/*   Updated: 2021/03/07 16:37:29 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <exception>
# include <iostream>
# include <string>
class Bureaucrat;
# include "Form.hpp"

class Bureaucrat
{
private:
	Bureaucrat();
	std::string const name;
	int grade;
public:
	Bureaucrat(std::string name, int grade);

	Bureaucrat(Bureaucrat const &);
	Bureaucrat& operator=(Bureaucrat const &);

	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};

	std::string getName() const;
	int getGrade() const;
	void incGrade();
	void decGrade();

	void signForm(Form &) ;

	virtual ~Bureaucrat();
};

std::ostream& operator<<(std::ostream &, Bureaucrat const &);

#endif
