/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/03 16:49:38 by smago             #+#    #+#             */
/*   Updated: 2021/02/04 12:02:39 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
	std::string str;
	int i = 1;
	std::size_t j;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < ac)
	{
		j = 0;
		str = av[i];
		while (j < str.length())
		{
			str[j] = std::toupper(av[i][j]);
			j++;
		}
		std::cout << str;
		i++;
	}
	std::cout << std::endl;

	return (0);
}