/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/14 17:31:56 by smago             #+#    #+#             */
/*   Updated: 2021/03/15 15:01:22 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include "Awesome.hpp"

int 	main(void)
{
	std::cout << "\nSTART_TEST\n\n";

	int a = 2;
	int b = 3;

	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::string c = "chaine1";
	std::string d = "chaine2";

	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << "\nFINISH_TEST\n\nSTART_TEST_WITH_FLOAT\n\n";

	float x = 12.345;
	float y = 54.321;
	float z = 12.344;

	::swap(x, y);
	std::cout << "x = " << x << ", y = " << y << std::endl;
	std::cout << "min( x, y ) = " << ::min( x, y ) << std::endl;
	std::cout << "max( x, y ) = " << ::max( x, y ) << std::endl << std::endl;

	std::cout << "z = " << z << ", y = " << y << std::endl;
	std::cout << "min( z, y ) = " << ::min( z, y ) << std::endl;
	std::cout << "max( z, y ) = " << ::max( z, y ) << std::endl << std::endl;

	std::cout << "FINISH_TEST\n\n";

	std::cout << "START TEST WITH AWESOME\n\n";

	Awesome ac(11);
	Awesome bc(10);
	::swap(ac, bc);
	std::cout << "ac = " << ac << ", bc = " << bc << std::endl;
	std::cout << "min( ac, bc ) = " << ::min( ac, bc ) << std::endl;
	std::cout << "max( ac, bc ) = " << ::max( ac, bc ) << std::endl << std::endl;

	std::cout << "FINISH_TEST\n\n";

	return 0;
}