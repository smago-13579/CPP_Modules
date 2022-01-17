/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/11 20:42:46 by smago             #+#    #+#             */
/*   Updated: 2021/03/12 19:54:12 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(std::string const str): str(str)
{
	this->parser();
	this->convert_data();
}

Convert::Convert(Convert const &a): str(a.str), c(a.c), i(a.i), f(a.f), d(a.d)
{
	this->type = a.type;
}

Convert&	Convert::operator=(Convert const &a)
{
	this->c = a.c;
	this->i = a.i;
	this->d = a.d;
	this->f = a.f;
	this->type = a.type;
	return (*this);
}

void	Convert::parser()
{
	size_t i = 0;
	if (str == "-inf" || str == "+inf" || str == "nan" || str == "-inff" || \
				str == "+inff" || str == "nanf")
	{
		sstm << str;
		this->pseudo_literals();
		return ;
	}
	if (str.length() == 1 && isascii(str[i]) && !isdigit(str[i]))
	{
		this->c = str[i];
		this->type = type_char;
		return ;
	}
	if (str[i] == '+' || str[i] == '-')
		this->sstm << str[i++];
	this->type = type_int;
	for (; i < str.length(); i++)
	{
		if (str[i] == '.' && this->type == type_int)
		{
			this->type = type_double;
		}
		else if (str[i] == 'f' && str[i + 1] == '\0' && this->type != impossible)
		{
			this->type = type_float;
		}
		else if (!isdigit(str[i]))
		{
			this->type = impossible;
			return ;
		}
		this->sstm << str[i];
	}
	if (this->type == type_int || this->type == type_float)
		this->type = type_double;
	if (this->type == type_double)
		this->d = atof(this->str.c_str());
}

void	Convert::pseudo_literals()
{
	if (str == "+inff" || str == "-inff" || str == "nanf")
	{
		this->f = atof(str.c_str());
		this->type = type_float_ps;
	}
	else
	{
		this->d = atof(str.c_str());
		this->type = type_double_ps;
	}
}

void	Convert::convert_data()
{
	if (this->type == type_char)
	{
		this->i = static_cast<int>(this->c);
		this->d = static_cast<double>(this->c);
		this->f = static_cast<float>(this->c);
	}
	if (this->type == type_int)
	{
		this->d = static_cast<double>(this->i);
		this->f = static_cast<float>(this->i);
		if (this->i < 32 || this->i > 126)
			this->c = 1;
		else 
			this->c = static_cast<char>(this->i);
	}
	if (this->type == type_double)
	{
		this->i = static_cast<int>(this->d);
		if (this->i < 32 || this->i > 126)
			this->c = 1;
		else
			this->c = static_cast<char>(this->d);
		this->f = static_cast<float>(this->d);
	}
	if (this->type == type_double_ps)
		this->f = static_cast<float>(this->d);
	if (this->type == type_float_ps)
		this->d = static_cast<double>(this->f);
}

int		Convert::getType() {
	return (this->type);
}

void	Convert::getValueC() 
{
	std::cout << "char: ";

	if (this->type > 3)
	{
		std::cout << "impossible";
	}
	else if (this->type < 4) {
		if (this->c < 32 || this->c > 126)
			std::cout << "Non displayable";
		else 
			std::cout << this->c;
	}
	std::cout << std::endl;
}

void 	Convert::getValueI() 
{
	std::cout << "int: ";

	if (this->type > 3)
	{
		std::cout << "impossible";
	}
	else 
		std::cout << this->i;
	std::cout << std::endl;
}

void	Convert::getValueF() 
{
	std::cout << "float: ";

	if (this->type == impossible)
	{
		std::cout << "impossible";
	}
	else	
	{
		std::cout << this->f;
		if (this->f - (int)f == (float)0)
			std::cout << ".0f";
		else
			std::cout << "f";
	}
	std::cout << std::endl;
}

void	Convert::getValueD() 
{
	std::cout << "double: ";
	
	if (this->type == impossible)
	{
		std::cout << "impossible";
	}
	else	
	{
		std::cout << this->d;
		if (this->d - (int)d == (double)0)
			std::cout << ".0";
	}
	std::cout << std::endl;
}


Convert::~Convert() {}

