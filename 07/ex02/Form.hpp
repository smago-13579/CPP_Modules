/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 21:16:02 by smago             #+#    #+#             */
/*   Updated: 2021/03/15 21:21:57 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>

class Form
{
private:
	std::string name;
	std::string profession;
public:
	Form();
	Form(std::string name, std::string str);
	Form(Form const &a);

	Form&	operator=(Form& a);
	Form&	operator=(int i);

	std::string	getName() const;

	std::string&	getString();
	~Form();
};

std::ostream&	operator<<(std::ostream& o, Form &a);

#endif
