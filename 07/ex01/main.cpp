/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 19:42:20 by smago             #+#    #+#             */
/*   Updated: 2021/03/15 15:59:16 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "Awesome.hpp"

int		main(void)
{
	int i[10];
	for (int z = 0; z < 10; z++)
	{
		i[z] = z;
	}

	std::string str[3] = {"one", "two", "three"};
	
	std::cout << "\nDisplay an array of ints\n";
	::iter<int>(i, 10, &display);

	std::cout << "\nAdd +1 to each element of int\n";
	::iter<int>(i, 10, &inc);
	::iter<int>(i, 10, &display);

	std::cout << "\nDisplay an array of strings\n";
	::iter<std::string>(str, 3, &display);

	std::cout << "\nAdd '+' to each element of the string\n";
	::iter<std::string>(str, 3, &plus);
	::iter<std::string>(str, 3, &display);

	std::cout << "\nAdd '+' to each element of int\n";
	::iter<int>(i, 10, &plus);
	::iter<int>(i, 10, &display);

	double d[10];
	for (int z = 0; z < 10; z++)
	{
		d[z] = static_cast<double>(z) / 2;
	}
	
	std::cout << "\nDisplay an array of double\n";
	::iter<double>(d, 10, &display);

	std::cout << "\nAdd +1 to each element of double\n";
	::iter<double>(d, 10, &inc);
	::iter<double>(d, 10, &display);

	std::cout << "\nAdd '+' to each element of double\n";
	::iter<double>(d, 10, &plus);
	::iter<double>(d, 10, &display);

	std::cout << "\nTEST WITH AWESOME\n\n";

	int tab[] = {0, 1, 2, 3, 4};
	Awesome tab2[5];

	iter(tab, 5, print);
	iter(tab2, 5, print);

	return (0);
}