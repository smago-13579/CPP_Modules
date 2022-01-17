/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 18:30:27 by smago             #+#    #+#             */
/*   Updated: 2021/03/18 21:57:10 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span(unsigned int n): N(n)
{
}

Span::Span(Span const &a)
{
	this->vec = a.vec;
	this->N = a.N;
}

Span&	Span::operator=(Span const &a)
{
	this->vec = a.vec;
	this->N = a.N;
	return (*this);
}

void	Span::addNumber(int n)
{
	if (this->vec.size() < static_cast<unsigned long>(this->N))
	{
		this->vec.push_back(n);
		std::sort(this->vec.begin(), this->vec.end());
	}
	else
		throw Span::FullArray();
}

unsigned int	Span::shortestSpan()
{
	unsigned int diff = -1;
	if (this->vec.size() < 2)
	{
		throw Span::NoSpan();
	}
	for (std::vector<int>::iterator it = this->vec.begin() ; it < (this->vec.end() - 1); it++)
	{
		unsigned int tmp = static_cast<unsigned int>(*(it + 1) - *it);
		if (diff > tmp)
			diff = tmp;
	}
	return (diff);
}

unsigned int	Span::longestSpan()
{
	unsigned int diff;
	if (this->vec.size() < 2)
	{
		throw Span::NoSpan();
	}
	diff = *(this->vec.end() - 1) - *(this->vec.begin());
	return (diff);
}


Span::~Span() {}
