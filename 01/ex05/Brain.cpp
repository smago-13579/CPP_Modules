/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 11:03:42 by smago             #+#    #+#             */
/*   Updated: 2021/02/11 16:45:07 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() : intelligence(199)
{
}

Brain::~Brain()
{
}

int 	Brain::getIntelligence()
{
	return (this->intelligence);
}

std::string Brain::identify() const
{
	unsigned long addr = (unsigned long)this;
	std::stringstream brz;

	brz << "0x" << std::uppercase << std::hex << addr;

	return (brz.str());
}
