/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/16 20:53:57 by smago             #+#    #+#             */
/*   Updated: 2021/03/18 17:54:13 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <string>
# include <list>
# include <vector>
# include <deque>
# include <set>
# include <algorithm>
# include <exception>




template<typename T>
typename T::iterator	easyfind(T &cont, int i)
{
	typename T::iterator it;
	if ((it = std::find(cont.begin(), cont.end(), i)) != cont.end())
	{
		return (it);
	}
	throw "Can't find value in container\n";
	return (it);
}


#endif
