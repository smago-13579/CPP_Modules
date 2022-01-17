/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 20:02:07 by smago             #+#    #+#             */
/*   Updated: 2021/02/12 20:18:18 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int 	main()
{
	Human human;

	human.action("meleeAttack", "Zombie");
	human.action("rangedAttack", "Zombie");
	human.action("intimidatingShout", "Zombie");
	human.action("anotherAttack", "Zombie");

	return (0);
}