/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 12:34:35 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/19 00:18:30 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
// #include <Array.hpp>
#include "Array.hpp"

#define MAX_VAL 750
void useSubjectMain();
void doIntArrayTests();

int main() {
	std::cout << YELLOW "Subject Tests" DEFAULT << std::endl;
	useSubjectMain();
	
	srand(time(NULL));
	doIntArrayTests();
}

void useSubjectMain()
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return ;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
}

void doIntArrayTests() {
	std::cout << YELLOW "\nArray<int> z" DEFAULT << std::endl;
	Array<int> z;
	z.printArray(true);

	std::cout << YELLOW "Array<int> a" DEFAULT << std::endl;
    Array<int> a(5);
	a.printArray(true);

 	std::cout << YELLOW "\nArray<int> b, copy of Array<int> a" DEFAULT << std::endl;
    Array<int> b(a);
	b.printArray(false);
	
	std::cout << YELLOW "\nModifying Contents of Array<int> b" DEFAULT << std::endl;
	b.printArray(true);
	b.printArray(false);
	std::cout << YELLOW "\nReprinting Contents of Array<int> a" DEFAULT << std::endl;
	a.printArray(false);

	try {
		std::cout << YELLOW "\nPrinting 2nd index of Array<int> A" DEFAULT << std::endl;
		std::cout << "a[2] = " << a[2] << std::endl;
		
		std::cout << YELLOW "\nPrinting 100th index of Array<int> A" DEFAULT << std::endl;
		std::cout << "a[100] = " << a[100] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << YELLOW "\nCreating Array<int> c with a size of -1" DEFAULT << std::endl;
		Array<int> c(-1);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
