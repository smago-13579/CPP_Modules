/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:02:25 by smago             #+#    #+#             */
/*   Updated: 2021/03/15 21:17:02 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Form.hpp"

template<typename T>
class Array
{
private:
	T* arr;
	unsigned int len;
public:
	Array() { 
		arr = new T[0];
		len = 0;
	}
	
	Array(unsigned int n) { 
		arr = new T[n];
		for (unsigned int i = 0; i < n; i++)
			arr[i] = 0;
		len = n;
	}
	
	Array(Array const &a) {
		this->len = a.len;
		this->arr = new T[len];
		for (unsigned int i = 0; i < len; i++)
			this->arr[i] = a.arr[i];
	}
	
	unsigned int	size() {
		return (len);
	}

	Array&	operator=(Array const &a)
	{
		delete [] this->arr;
		this->len = a.len;
		this->arr = new T[len];
		for (unsigned int i = 0; i < len; i++)
			this->arr[i] = a.arr[i];
		return (*this);
	}

	class	OutOfTheLimits: public std::exception {
		virtual const char* what() const throw() {
			return ("Invalid number of the element\n");
		}
	};

	T&	operator[](unsigned int idx) {
		if (idx >= this->len) {
			throw OutOfTheLimits();
		}
		return (this->arr[idx]);
	}
	~Array() { delete [] arr; }
};

#endif
