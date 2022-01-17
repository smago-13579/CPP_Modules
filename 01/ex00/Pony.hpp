/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 14:05:49 by smago             #+#    #+#             */
/*   Updated: 2021/02/08 14:22:31 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

#include <iostream>
#include <string>

class Pony
{
private:
	std::string name;
	int age;
public:
	Pony(std::string name, int age);
	~Pony();
	void walk(void);
	void sleep(void);
};

#endif
