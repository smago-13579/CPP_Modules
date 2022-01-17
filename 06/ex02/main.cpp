/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 17:09:29 by smago             #+#    #+#             */
/*   Updated: 2021/03/13 17:39:21 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "inc.hpp"


int main()
{
	srand(time(NULL));
	for (size_t i = 0; i < 6; i++)
	{
		Base* base = generate();

		identify_from_pointer(base);
		identify_from_reference(*base);
		std::cout << std::endl;
		delete base;
	}
	Base* p = 0;
	identify_from_pointer(0);
	identify_from_reference(*p);

	return (0);
}