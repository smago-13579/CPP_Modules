/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:53:01 by smago             #+#    #+#             */
/*   Updated: 2021/02/11 16:54:26 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
# include <string>
# include <sstream>
# include <cctype>

class Brain
{
private:
	int intelligence;
public:
	Brain();
	~Brain();
	int getIntelligence();
	std::string identify() const;
};

#endif
