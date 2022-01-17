/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/11 08:39:39 by smago             #+#    #+#             */
/*   Updated: 2021/02/11 16:41:58 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human()
{
}

Human::~Human()
{
}

const class Brain& Human::getBrain()
{
	return (this->brainz);
}

std::string Human::identify()
{
	std::string address = this->brainz.identify();

	return (address);
}

