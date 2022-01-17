/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 17:16:22 by smago             #+#    #+#             */
/*   Updated: 2021/03/09 15:56:40 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"

class ShrubberyCreationForm: public Form
{
private:
	ShrubberyCreationForm();

	static std::string str;
	std::string target;
public:
	ShrubberyCreationForm(std::string target);

	ShrubberyCreationForm(ShrubberyCreationForm const &);
	ShrubberyCreationForm& operator=(ShrubberyCreationForm const &);

	virtual void execute(Bureaucrat const &executor) const;
	
	virtual ~ShrubberyCreationForm();
};


#endif
