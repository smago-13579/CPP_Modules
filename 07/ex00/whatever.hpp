/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 17:25:45 by smago             #+#    #+#             */
/*   Updated: 2021/03/14 17:31:31 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>
# include <string>

template<typename T>
void	swap(T &a, T &b)
{
	T tmp = a;
	a = b;
	b = tmp;
}

template<typename T>
T	min(T a, T b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

template<typename T>
T	max(T a, T b)
{
	if (a > b)
		return (a);
	else 
		return (b);
}

#endif
