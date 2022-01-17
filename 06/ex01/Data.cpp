/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 21:52:32 by smago             #+#    #+#             */
/*   Updated: 2021/03/13 16:15:18 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

void	*serialize(void)
{
	Data* nData = new Data;
	srand(time(NULL));

	std::string alpha = "1234567890abcdefghijklmnopqrstuvwxyz";

	for (size_t i = 0; i < 8; i++)
	{
		nData->str1 += alpha[rand() % 36];
	}
	std::cout << "\nstr1: " << nData->str1 << std::endl;

	nData->i = rand() % 12345;
	std::cout << "i: " << nData->i << std::endl;

	for (size_t i = 0; i < 8; i++)
	{
		nData->str2 += alpha[rand() % 36];
	}
	std::cout << "str2: " << nData->str2 << std::endl;

	return (reinterpret_cast<void*>(nData));
}

Data	*deserialize(void *raw)
{
	Data *data = new Data;

	data->str1 = std::string((reinterpret_cast<Data *>(raw))->str1.c_str(), 8);
	data->i = *reinterpret_cast<int*>(reinterpret_cast<char *>(raw) + 24);
	data->str2 = std::string((reinterpret_cast<Data *>(raw))->str2.c_str(), 8);

	return (data);
}