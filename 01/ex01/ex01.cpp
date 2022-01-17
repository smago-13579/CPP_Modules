/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex01.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/08 20:55:48 by smago             #+#    #+#             */
/*   Updated: 2021/02/08 21:04:43 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

void	memoryLeak()
{
	std::string* panther = new std::string("String panther");
	std::cout << *panther << std::endl;
	std::string* lks = panther;
	delete lks;
	/* OR delete panther */
}
