/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/18 20:55:02 by smago             #+#    #+#             */
/*   Updated: 2021/03/19 18:34:00 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

int main()
{
    {
        srand(time(NULL));
        std::cout << "\n----TRY-FROM-EXE----\n\n";
        Span sp = Span(5);
        sp.addNumber(5);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl << std::endl;
        try 
        {
            std::cout << "ADD number TO full CLASS:\n";
            sp.addNumber(10);
        }
        catch(std::exception &e){
            std::cout << e.what() << std::endl;
        }
    }
    std::cout << "CREATE SP WITH 10000 ELEMENTS\n";
    Span sp = Span(10000);
    sp.addNumber(-2000000000);
    sp.addNumber(-1);
    sp.addNumber(2000000000);
    std::cout << "shortest span sp: " << sp.shortestSpan() << std::endl;
    std::cout << "longest span sp: " << sp.longestSpan() << std::endl;
    for (int i = 3; i < 10000; i++)
        sp.addNumber(static_cast<int>(rand()));
    std::cout << "sp:\n" << "short: " << sp.shortestSpan() << std::endl;
    std::cout << "long: " << sp.longestSpan() << std::endl << std::endl;

    Span sp2(sp);
    std::cout << "sp2:\n" << "short: " << sp2.shortestSpan() << std::endl;
    std::cout << "long: " << sp2.longestSpan() << std::endl << std::endl;

    Span sp3 = Span(2);
    sp3.addNumber(68);
    sp3.addNumber(1949);
    std::cout << "sp3:\n" << "short: " << sp3.shortestSpan() << std::endl;
    std::cout << "long: " << sp3.longestSpan() << std::endl << std::endl;
    std::cout << "ASSIGN SP3 = SP\n\n";
    sp3 = sp;
    std::cout << "sp3:\n" << "short: " << sp3.shortestSpan() << std::endl;
    std::cout << "long: " << sp3.longestSpan() << std::endl << std::endl;

    Span sp4 = Span(10);
    std::vector<int> vect;
    for (int i = 0; i < 100; i++)
        vect.push_back(i);

    
    sp4.addNumbersIt(vect.begin(), vect.begin() + 10);
    std::cout << "sp4:\n" << "short: " << sp4.shortestSpan() << std::endl;
    std::cout << "long: " << sp4.longestSpan() << std::endl << std::endl;

    try
    {
        std::cout << "TRY TO ADD MORE ELEMENTS TO SP4\n";
        sp4.addNumbersIt(vect.begin(), vect.end());
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    try
    {
        Span sp5(2);
        sp5.addNumber(99);
        std::cout << "TRY TO FIND SHORT SPAN IN CLASS WITH 1 ELEMENT\n";
        sp5.shortestSpan();
    }
    catch(std::exception &e){
        std::cout << e.what() << std::endl;
    }
}
