/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 19:06:58 by smago             #+#    #+#             */
/*   Updated: 2021/02/12 19:10:14 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

#include <string>
#include <iostream>

class Human
{
private:
	void	meleeAttack(std::string const& target);
	void	rangedAttack(std::string const& target);
	void	intimidatingShout(std::string const& target);
public:
	void	action(std::string const& action_name, std::string const& target);
};

#endif 
