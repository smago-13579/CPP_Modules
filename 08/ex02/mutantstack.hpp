/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 22:18:09 by smago             #+#    #+#             */
/*   Updated: 2021/03/19 18:18:38 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <string>
# include <list>
# include <vector>
# include <deque>
# include <set>
# include <algorithm>
# include <exception>
# include <stack>

template <typename T>
class MutantStack: public std::stack<T>
{
private:
public:
	MutantStack(): std::stack<T>() {}

	MutantStack(MutantStack const &a): std::stack<T>(a) {}
	MutantStack &operator=(MutantStack const &a)
	{
		std::stack<T>::operator=(a);
		return (*this);
	}

	typedef typename std::stack<T>::container_type::iterator iterator;

	iterator begin() { 
		return (this->c.begin()); 
	}
	iterator end() 	{ 
		return (this->c.end()); 
	}

	virtual ~MutantStack() {}
};



#endif
