/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 12:34:35 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/20 23:50:15 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <Array.hpp>

#define MAX_VAL 750
void useSubjectMain();
void intArrayTests();
void doubleArrayTests();

int main() {
	std::cout << YELLOW "Subject Tests" DEFAULT << std::endl;
	useSubjectMain();
	
	srand(time(NULL));
	intArrayTests();
	doubleArrayTests();
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

void intArrayTests() {
	std::cout << YELLOW "\nArray<int> z" DEFAULT << std::endl;
	Array<int> z;
	z.printArray(true, true);

	std::cout << YELLOW "Array<int> a" DEFAULT << std::endl;
    Array<int> a(5);
	a.printArray(true, true);

 	std::cout << YELLOW "\nArray<int> b, copy of Array<int> a" DEFAULT << std::endl;
    Array<int> b(a);
	b.printArray(false, true);

	std::cout << YELLOW "\nModifying Contents of Array<int> b" DEFAULT << std::endl;
	b.printArray(true, true);
	b.printArray(false, true);
	std::cout << YELLOW "\nReprinting Contents of Array<int> a" DEFAULT << std::endl;
	a.printArray(false, true);

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
		std::cout << YELLOW "\nCreating Array<int> d with a size of INT_MAX" DEFAULT << std::endl;
		Array<int> d(INT_MAX);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void doubleArrayTests() {
	std::cout << YELLOW "\nArray<double> z" DEFAULT << std::endl;
	Array<double> z;
	z.printArray(true, false);

	std::cout << YELLOW "Array<double> a" DEFAULT << std::endl;
    Array<double> a(5);
	a.printArray(true, false);

 	std::cout << YELLOW "\nArray<double> b, copy of Array<double> a" DEFAULT << std::endl;
    Array<double> b(a);
	b.printArray(false, false);

	std::cout << YELLOW "\nModifying Contents of Array<double> b" DEFAULT << std::endl;
	b.printArray(true, false);
	b.printArray(false, false);
	std::cout << YELLOW "\nReprinting Contents of Array<double> a" DEFAULT << std::endl;
	a.printArray(false, false);

	try {
		std::cout << YELLOW "\nPrinting 2nd index of Array<double> A" DEFAULT << std::endl;
		std::cout << "a[2] = " << a[2] << std::endl;

		std::cout << YELLOW "\nPrinting 100th index of Array<double> A" DEFAULT << std::endl;
		std::cout << "a[100] = " << a[100] << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << YELLOW "\nCreating Array<double> c with a size of -42" DEFAULT << std::endl;
		Array<double> c(-42);

		std::cout << YELLOW "\nCreating Array<double> d with a size of UINT_MAX" DEFAULT << std::endl;
		Array<double> d(UINT_MAX);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
