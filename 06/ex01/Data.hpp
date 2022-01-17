/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/12 21:51:12 by smago             #+#    #+#             */
/*   Updated: 2021/03/12 21:55:10 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>
# include <string>
# include <cstdlib>

struct Data
{
	std::string str1;
	int i;
	std::string str2;
};

void	*serialize(void);

Data	*deserialize(void *raw);

#endif
