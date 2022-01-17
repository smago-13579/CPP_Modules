/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/07 15:05:37 by smago             #+#    #+#             */
/*   Updated: 2021/03/07 17:16:23 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

class Form;
# include "Bureaucrat.hpp"
# include <exception>

class Form
{
private:
	Form();
	std::string const name;
	bool sign;
	int const gradeSign;
	int const gradeExec;
public:
	Form(std::string name, int siG, int exG);

	Form(Form const &);
	Form& operator=(Form const &);

	class GradeTooHighException: public std::exception {
		virtual const char* what() const throw();
	};
	class GradeTooLowException: public std::exception {
		virtual const char* what() const throw();
	};

	std::string	getName() const;
	bool	getSign() const;
	int		getGradeSign() const;
	int 	getGradeExec() const;

	void	beSigned(Bureaucrat const &);

	virtual ~Form();
};

std::ostream& operator<<(std::ostream &, Form const &);

#endif

