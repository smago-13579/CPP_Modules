/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 20:15:37 by smago             #+#    #+#             */
/*   Updated: 2021/03/12 21:19:02 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
 #include <iostream>

int main(int ac, char *av[])
{
	if (ac == 2)
	{
		Convert conv(av[1]);
		conv.getValueC();
		conv.getValueI();
		conv.getValueF();
		conv.getValueD();
		std::cout << std::endl;
	}
	else 
		std::cout << "Wrong number of arguments\n";

	return 0;
}