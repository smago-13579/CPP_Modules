/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/09 15:55:52 by smago             #+#    #+#             */
/*   Updated: 2021/03/09 15:57:22 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"

class PresidentialPardonForm: public Form
{
private:
	PresidentialPardonForm();

	std::string target;
public:
	PresidentialPardonForm(std::string target);

	PresidentialPardonForm(PresidentialPardonForm const &);
	PresidentialPardonForm& operator=(PresidentialPardonForm const &);

	virtual void execute(Bureaucrat const &executor) const;
	
	virtual ~PresidentialPardonForm();
};

#endif

