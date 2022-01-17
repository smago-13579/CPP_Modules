/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 17:37:13 by smago             #+#    #+#             */
/*   Updated: 2021/03/09 18:46:45 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern
{
private:
	static std::string formName[3];
public:
	Intern();

	Intern(Intern const &);
	Intern& operator=(Intern const &);

	Form*	makeForm(std::string const &name, std::string const &target);

	virtual ~Intern();
};


#endif

