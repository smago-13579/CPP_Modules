/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smago <smago@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/15 17:07:25 by smago             #+#    #+#             */
/*   Updated: 2021/03/15 21:27:19 by smago            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

void	anotherMainA()
{
	Array<int> A(5);

	try
	{
		std::cout << "Try to access an invalid element\n";
		std::cout << A[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Size of the array class A: ";
	std::cout << A.size() << std::endl;

	std::cout << "\nPrint the array from class A\n";
	for (unsigned int i = 0; i < A.size(); i++)
		std::cout << A[i] << std::endl;

	std::cout << "\nFill the array from 1 to 5 and print them\n";
	for (unsigned int i = 0; i < A.size(); i++)
		A[i] = i + 1;
	for (unsigned int i = 0; i < A.size(); i++)
		std::cout << A[i] << std::endl;

	Array<int> B;
	std::cout << "\nPrint the array from class B\n";
	for (unsigned int i = 0; i < B.size(); i++)
		std::cout << B[i] << std::endl;
	std::cout << "Size of the array class B: ";
	std::cout << B.size() << std::endl;
	
	std::cout << "\nAssign B to A and print array from class B\n";
	B = A;
	for (unsigned int i = 0; i < B.size(); i++)
		std::cout << B[i] << std::endl;
	std::cout << "Size of the array class B: ";
	std::cout << B.size() << std::endl;

	std::cout << "\nLet's create class C which will copy class B\n";
	Array<int> C(B);
	std::cout << "\nPrint the array from class C\n";
	for (unsigned int i = 0; i < C.size(); i++)
		std::cout << C[i] << std::endl;
	std::cout << "Size of the array class C: ";
	std::cout << C.size() << std::endl;
}

void	anotherMainB()
{
	Array<char> A(5);

	try
	{
		std::cout << "Try to access an invalid element\n";
		std::cout << A[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Size of the array class A: ";
	std::cout << A.size() << std::endl;

	std::cout << "\nFill the array from a to e and print them\n";
	for (unsigned int i = 0; i < A.size(); i++)
		A[i] = i + 97;
	for (unsigned int i = 0; i < A.size(); i++)
		std::cout << A[i] << std::endl;

	Array<char> B;
	std::cout << "\nPrint the array from class B\n";
	for (unsigned int i = 0; i < B.size(); i++)
		std::cout << B[i] << std::endl;	
	std::cout << "Size of the array class B: ";
	std::cout << B.size() << std::endl;
	
	std::cout << "\nAssign B to A and print array from class B\n";
	B = A;
	for (unsigned int i = 0; i < B.size(); i++)
		std::cout << B[i] << std::endl;
	std::cout << "Size of the array class B: ";
	std::cout << B.size() << std::endl;

	std::cout << "\nLet's create class C which will copy class B\n";
	Array<char> C(B);
	std::cout << "\nPrint the array from class C\n";
	for (unsigned int i = 0; i < C.size(); i++)
		std::cout << C[i] << std::endl;
	std::cout << "Size of the array class C: ";
	std::cout << C.size() << std::endl;
}

void	complexMain()
{
	Array<Form> A(5);

	try
	{
		std::cout << "Try to access an invalid element\n";
		std::cout << A[10] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "Size of the array class A: ";
	std::cout << A.size() << std::endl;

	std::cout << "\nPrint the array from class A\n";
	for (unsigned int i = 0; i < A.size(); i++)
		std::cout << A[i] << std::endl;

	std::cout << "\nFill the array from Bob to Nastya and print them\n";
	Form Bob("Bob", "Banker");
	Form John("John", "Courier");
	Form Mark("Mark", "It progrmer");
	Form Anna("Anna", "Teacher");
	Form Nastya("Nastya", "Lawyer");
	A[0] = Bob;
	A[1] = John;
	A[2] = Mark;
	A[3] = Anna;
	A[4] = Nastya;
	for (unsigned int i = 0; i < A.size(); i++)
		std::cout << A[i] << std::endl;

	Array<Form> B;
	std::cout << "\nPrint the array from class B\n";
	for (unsigned int i = 0; i < B.size(); i++)
		std::cout << B[i] << std::endl;	
	std::cout << "Size of the array class B: ";
	std::cout << B.size() << std::endl;
	
	std::cout << "\nAssign B to A and print array from class B\n";
	B = A;
	for (unsigned int i = 0; i < B.size(); i++)
		std::cout << B[i] << std::endl;
	std::cout << "Size of the array class B: ";
	std::cout << B.size() << std::endl;

	std::cout << "\nLet's create class C which will copy class B\n";
	Array<Form> C(B);
	std::cout << "\nPrint the array from class C\n";
	for (unsigned int i = 0; i < C.size(); i++)
		std::cout << C[i] << std::endl;
	std::cout << "Size of the array class C: ";
	std::cout << C.size() << std::endl;
}

int main()
{
	std::cout << "\n----START----\n\n";
	std::cout << "----Class---INT----\n\n";
	anotherMainA();
	std::cout << "\n----Class---CHAR----\n\n";
	anotherMainB();
	std::cout << "\n----Complex---MAIN----\n\n";
	complexMain();
	std::cout << "\n----FINISH----\n\n";
	
	return (0);
}