/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 11:34:44 by smago             #+#    #+#             */
/*   Updated: 2021/02/09 20:39:03 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class Zombie
{
private:
	std::string name;
	std::string type;
	static std::string pool[10];
public:
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();

	void setZombie(std::string name, std::string type);
	void announce();
	static std::string randomName(int count);
};


#endif
