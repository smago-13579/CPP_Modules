/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 21:21:46 by smago             #+#    #+#             */
/*   Updated: 2021/03/13 16:16:50 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int main(void)
{
	void* N = serialize();

	Data* D = deserialize(N);

	std::cout << "\nstr1: " << D->str1 << std::endl;
	std::cout << "i: " << D->i << std::endl;
	std::cout << "str2: " << D->str2 << std::endl;

	std::cout << "\nsize of str1: " << sizeof(D->str1) << std::endl;
	std::cout << "size of int: " << sizeof(D->i) << std::endl;
	std::cout << "size of str2: " << sizeof(D->str2) << std::endl;
	
	return 0;
}