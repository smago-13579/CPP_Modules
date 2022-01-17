/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/17 19:47:16 by smago             #+#    #+#             */
/*   Updated: 2021/03/18 17:54:04 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main ()
{
	std::vector<int> vec(5);
	for (int i = 0; i < 5; i++)
	{
		vec[i] = i * 5;
	}

	std::cout << "\n----TEST-VECTOR----\n\n";

	try {
	std::cout << "Find 0 value: " << *(easyfind(vec, 0)) << std::endl; }
	catch (const char* str) { 
		std::cout << str; 
	}
	try {
	std::cout << "Find 11 value: " << *(easyfind(vec, 11)) << std::endl; }
	catch (const char* str) { 
		std::cout << str; 
	}
	try {
	std::cout << "Find 20 value: " << *(easyfind(vec, 20)) << std::endl; }
	catch (const char* str) { 
		std::cout << str; 
	}
	
	std::cout << "\n----TEST-LIST----\n\n";
	std::list<int> lst;
	lst.push_back(1);
	lst.push_back(3);
	lst.push_back(6);
	lst.push_back(11);
	lst.push_back(99);

	try {
	std::cout << "Find 0 value: " << *(easyfind(lst, 0)) << std::endl; }
	catch (const char* str) { 
		std::cout << str; 
	}
	try {
	std::cout << "Find 6 value: " << *(easyfind(lst, 6)) << std::endl; }
	catch (const char* str) { 
		std::cout << str; 
	}
	try {
	std::cout << "Find 99 value: " << *(easyfind(lst, 99)) << std::endl; }
	catch (const char* str) { 
		std::cout << str; 
	}

	std::cout << "\n----TEST-DEQUE----\n\n";
	std::deque<int> deq(10);
	for (int i = 0; i < 10; i++)
	{
		deq[i] = i * 3;
	}

	try {
	std::cout << "Find 3 value: " << *(easyfind(deq, 3)) << std::endl; }
	catch (const char* str) { 
		std::cout << str; 
	}
	try {
	std::cout << "Find 12 value: " << *(easyfind(deq, 12)) << std::endl; }
	catch (const char* str) { 
		std::cout << str; 
	}	
	try {
	std::cout << "Find 30 value: " << *(easyfind(deq, 30)) << std::endl; }
	catch (const char* str) { 
		std::cout << str; 
	}

	std::cout << "\n----TEST-SET----\n\n";
	std::set<int> ssett;
	for (int i = 0; i < 5; i++)
	{
		ssett.insert(i * 7);
	}
	try {
	std::cout << "Find 14 value: " << *(easyfind(ssett, 14)) << std::endl; }
	catch(const char* str){
		std::cout << str; 
	}
	try {
	std::cout << "Find 28 value: " << *(easyfind(ssett, 28)) << std::endl; }
	catch(const char* str){
		std::cout << str; 
	}
	try {
	std::cout << "Find 30 value: " << *(easyfind(ssett, 30)) << std::endl; }
	catch(const char* str){
		std::cout << str; 
	}
	


	return 0;
}