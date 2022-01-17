/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/08 20:36:13 by smago             #+#    #+#             */
/*   Updated: 2021/03/09 15:56:37 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"

class RobotomyRequestForm: public Form
{
private:
	RobotomyRequestForm();

	std::string target;
public:
	RobotomyRequestForm(std::string target);

	RobotomyRequestForm(RobotomyRequestForm const &);
	RobotomyRequestForm& operator=(RobotomyRequestForm const &);

	virtual void execute(Bureaucrat const &executor) const;
	
	virtual ~RobotomyRequestForm();
};


#endif
