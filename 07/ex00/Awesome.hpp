/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Awesome.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 14:21:47 by smago             #+#    #+#             */
/*   Updated: 2021/03/15 14:59:25 by smago            ###   ########.fr       */
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
	Awesome(int n): n(n) {}
	bool operator==(Awesome const &a) const { return(this->n == a.n); }
	bool operator!=(Awesome const &a) const { return(this->n != a.n); }
	bool operator>(Awesome const &a) const { return(this->n > a.n); }
	bool operator<(Awesome const &a) const { return(this->n < a.n); }
	bool operator>=(Awesome const &a) const { return(this->n >= a.n); }
	bool operator<=(Awesome const &a) const { return(this->n <= a.n); }
	int getN() const { return (this->n); }
};

std::ostream& operator<<(std::ostream& o, Awesome const &a)
{
	o << a.getN();
	return (o);
}


#endif
