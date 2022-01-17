/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 22:39:12 by smago             #+#    #+#             */
/*   Updated: 2021/03/19 18:28:37 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"

int main()
{
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);

		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		MutantStack<double> mstack;
		mstack.push(5.5);
		mstack.push(17.7);

		std::cout << "Top stack: " << mstack.top() << std::endl;
		mstack.pop();
		std::cout << "stack size: " << mstack.size() << std::endl;
		mstack.push(3.45);
		mstack.push(5.87);
		mstack.push(737);
		mstack.push(98.99);
		
		MutantStack<double>::iterator it = mstack.begin();
		MutantStack<double>::iterator ite = mstack.end();
		++it;
		--it;
		std::cout << "All elements from begin\n";
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		MutantStack<double> s;
		std::cout << "ASSIGN OPERATOR\n";
		s = mstack;
		it = s.begin();
		ite = s.end();
		++it;
		--it;
		std::cout << "All elements from begin\n";
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	return 0;
}