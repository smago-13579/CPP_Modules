/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 19:06:04 by smago             #+#    #+#             */
/*   Updated: 2021/02/09 20:41:31 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include "Zombie.hpp"

class ZombieHorde
{
private:
	int N;
	std::string type;
	Zombie* z;
public:
	ZombieHorde(std::string const &type, int N);
	~ZombieHorde();
	void announce();
};

#endif
