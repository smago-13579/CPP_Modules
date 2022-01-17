/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 12:51:53 by smago             #+#    #+#             */
/*   Updated: 2021/02/09 18:49:58 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
private:
	std::string type;
	int count;
public:
	ZombieEvent();
	~ZombieEvent();

	void setZombieType(std::string const &type);
	Zombie *newZombie(std::string name);
	Zombie *randomChump();
};


#endif
