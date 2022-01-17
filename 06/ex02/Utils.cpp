/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/13 16:34:05 by smago             #+#    #+#             */
/*   Updated: 2021/03/13 17:34:56 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "inc.hpp"

Base*	generate(void)
{
	int i = rand() % 3;
	Base* base = 0;

	if (i == 0)
	{
		base = new A;
		std::cout << "A class created\n";
	}
	else if (i == 1)
	{
		base = new B;
		std::cout << "B class created\n";
	}
	else if (i == 2)
	{
		base = new C;
		std::cout << "C class created\n";
	}
	
	return (base);
}

void	identify_from_pointer(Base *p)
{
	if (dynamic_cast<A*>(p))
		std::cout << "Identify from pointer: A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "Identify from pointer: B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "Identify from pointer: C\n";
	else 
		std::cout << "Can't identify from pointer\n";
}

void	identify_from_reference(Base &p)
{
	if (dynamic_cast<A*>(&p))
		std::cout << "Identify from reference: A\n";
	else if (dynamic_cast<B*>(&p))
		std::cout << "Identify from reference: B\n";
	else if (dynamic_cast<C*>(&p))
		std::cout << "Identify from reference: C\n";
	else 
		std::cout << "Can't identify from reference\n";
}


