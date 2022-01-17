/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:29:37 by smago             #+#    #+#             */
/*   Updated: 2021/03/19 17:34:36 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <list>
# include <vector>
# include <deque>
# include <set>
# include <algorithm>
# include <exception>

class Span
{
private:
	Span();

	std::vector<int> vec;
	unsigned int N;
public:
	Span(unsigned int n);

	Span(Span const &a);
	Span&	operator=(Span const &a);

	void	addNumber(int n);
	class	FullArray: public std::exception
	{
		virtual const char* what() const throw() {
			return ("The Span is full\n");
		}
	};
	class	NoSpan: public std::exception
	{
		virtual const char* what() const throw() {
			return ("Too few arguments to find span\n");
		}
	};
	class	NeedMoreSpace: public std::exception
	{
		virtual const char* what() const throw() {
			return ("Insufficient space for elements\n");
		}
	};
	unsigned int	shortestSpan();
	unsigned int	longestSpan();

	template<typename T>
	void	addNumbersIt(T begin, T end)
	{
		if (static_cast<unsigned int>(end - begin) > this->N - this->vec.size())
			throw NeedMoreSpace();
		for (; begin < end; begin++)
		{
			this->vec.push_back(*begin);
		}
		std::sort(this->vec.begin(), this->vec.end());
	}

	~Span();
};



#endif
