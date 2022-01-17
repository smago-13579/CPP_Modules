/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/13 13:12:21 by smago             #+#    #+#             */
/*   Updated: 2021/02/13 14:02:06 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"

int 	main()
{
	Logger logger("12");

	logger.log("File", "Goodbye World");
	logger.log("Console", "Hello World");

	return (0);
}
