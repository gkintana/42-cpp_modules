/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:49:46 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/31 20:21:18 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

void exerciseTests() {
	Fixed a;
	Fixed const b( Fixed(5.05f) * Fixed(2) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;
	
	std::cout << Fixed::max(a, b) << std::endl;
}

void arithmeticTests() {
	Fixed n1 = 6, n2 = 1, n3 = 2022;
	std::cout << "  " << n1 << " + " << n2 << " + " << n3 << " = " << (n1 + n2 + n3) << std::endl
			  << "  " << n1 << " - " << n2 << " - " << n3 << " = " << (n1 - n2 - n3) << std::endl
			  << "  " << n1 << " * " << n2 << " * " << n3 << " = " << (n1 * n2 * n3) << std::endl
			  << "  " << n1 << " / " << n2 << " / " << n3 << " = " << (n1 / n2 / n3) << std::endl;
}

void incrementAndDecrementTests() {
	Fixed num = 10;

	std::cout << "  num = " << num << std::endl
			  << "  num++ = " << num++ << std::endl
			  << "  num = " << num << std::endl
			  << "  ++num = " << ++num << std::endl
			  << "\nDecrement Overload Tests" << std::endl
			  << "  num = " << num << std::endl
			  << "  num-- = " << num-- << std::endl
			  << "  num = " << num << std::endl
			  << "  --num = " << --num << std::endl;
}

void printResult(Fixed n1, Fixed n2, bool max) {
	if (max) {
		std::cout << "    • Comparing {" << n1 << "} and {" << n2 << "}. Max value is "
				  << Fixed::max(n1, n2) << std::endl;
	} else {
		std::cout << "    • Comparing {" << n1 << "} and {" << n2 << "}. Min value is "
				  << Fixed::min(n1, n2) << std::endl;
	}
}

void minTests() {
	std::cout << "  With Reference to Non-Constant Fixed-Point Numbers" << std::endl;
	Fixed n1 = 24, n2 = 42;
	printResult(n1, n2, false);
	n1 = 543.21f, n2 = 123.45f;
	printResult(n1, n2, false);
	n1 = 1, n2 = 1;
	printResult(n1, n2, false);
	n1 = 23.27f, n2 = 23.27f;
	printResult(n1, n2, false);

	std::cout << "  With Reference to Constant Fixed-Point Numbers" << std::endl;
	Fixed const n3 = 24;
	Fixed const n4 = 42;
	printResult(n3, n4, false);
	Fixed const n5 = 543.21f;
	Fixed const n6 = 123.45f;
	printResult(n5, n6, false);
	Fixed const n7 = 1;
	Fixed const n8 = 1;
	printResult(n7, n8, false);
	Fixed const n9 = 23.27f;
	Fixed const n10 = 23.27f;
	printResult(n9, n10, false);
}

void maxTests() {
	std::cout << "  With Reference to Non-Constant Fixed-Point Numbers" << std::endl;
	Fixed n1 = 24, n2 = 42;
	printResult(n1, n2, true);
	n1 = 543.21f, n2 = 123.45f;
	printResult(n1, n2, true);
	n1 = 1, n2 = 1;
	printResult(n1, n2, true);
	n1 = 23.27f, n2 = 23.27f;
	printResult(n1, n2, true);

	std::cout << "  With Reference to Constant Fixed-Point Numbers" << std::endl;
	Fixed const n3 = 24;
	Fixed const n4 = 42;
	printResult(n3, n4, true);
	Fixed const n5 = 543.21f;
	Fixed const n6 = 123.45f;
	printResult(n5, n6, true);
	Fixed const n7 = 1;
	Fixed const n8 = 1;
	printResult(n7, n8, true);
	Fixed const n9 = 23.27f;
	Fixed const n10 = 23.27f;
	printResult(n9, n10, true);
}

int main() {
	std::cout << "Exercise Tests" << std::endl;
	exerciseTests();
	std::cout << "\nComparison Operator Overload Tests" << std::endl;

	std::cout << "\nArithmetic Operator Overload Tests" << std::endl;
	arithmeticTests();
	std::cout << "\nIncrement Overload Tests" << std::endl;
	incrementAndDecrementTests();
	std::cout << "\nMin Overload Tests" << std::endl;
	minTests();
	std::cout << "\nMax Overload Tests" << std::endl;
	maxTests();
	
	return 0;
}
