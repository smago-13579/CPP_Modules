/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 20:40:30 by smago             #+#    #+#             */
/*   Updated: 2021/03/12 17:30:01 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <cctype>
# include <sstream>
# include <ostream>
# include <cstdlib>

class Convert
{
private:
	Convert();
	
	std::string const str;
	std::stringstream sstm;
	char c;
	int i;
	float f;
	double d;
	int type;

	enum type {
		type_char,
		type_int,
		type_float,
		type_double,
		type_double_ps,
		type_float_ps,
		impossible
	};

	void pseudo_literals();
	void convert_data();
	void parser();

public:
	Convert(std::string const str);

	Convert(Convert const &);
	Convert& operator=(Convert const &);

	int getType() ;
	void getValueC() ;
	void getValueI() ;
	void getValueF() ;
	void getValueD() ;

	~Convert();
};

#endif
