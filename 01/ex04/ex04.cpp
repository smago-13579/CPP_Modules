/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 21:06:19 by smago             #+#    #+#             */
/*   Updated: 2021/02/13 14:24:26 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int 	main()
{
	std::string str("HI THIS IS BRAIN");
	std::string* ptr = &str;
	std::string &ref = str;

	std::cout << "String - " << str << std::endl;
	std::cout << "Pointer - " << *ptr << std::endl;
	std::cout << "Reference - " << ref << std::endl;
	return (0);
}