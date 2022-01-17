/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 19:28:11 by smago             #+#    #+#             */
/*   Updated: 2021/03/15 15:59:29 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <string>

template<typename T>
void	iter(T* addr, int length, void (*func)(T &))
{
	for (int i = 0; i < length; i++)
	{
		func(addr[i]);
	}
	
}

template<typename T>
void	display(T &d)
{
	std::cout << "display: " << d << std::endl;
}

template<typename T>
void	inc(T &d)
{
	d += 1;
}

template<typename T>
void	plus(T &s)
{
	s += '+';
}

#endif
