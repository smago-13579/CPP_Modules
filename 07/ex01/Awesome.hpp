/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 15:26:39 by smago             #+#    #+#             */
/*   Updated: 2021/03/15 15:59:39 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWESOME_HPP
# define AWESOME_HPP

# include <iostream>
# include <string>

class Awesome
{
private:
	int n;
public:
	Awesome(void): n(42) {}
	int	get(void) const { return (this->n); }
};

std::ostream&	operator<<(std::ostream& o, Awesome &a)
{
	o << a.get();
	return (o);
}

template<typename T>
void 	print(T &x) {std::cout << x << std::endl; }


#endif

