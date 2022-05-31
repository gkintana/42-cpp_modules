/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:49:46 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/31 22:01:31 by gkintana         ###   ########.fr       */
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

void printComparison(Fixed n1, Fixed n2, int compOperator) {
	std::cout << "    • " << n1;
	if (compOperator == 1) {
		std::cout << " > " << n2 << " = " << std::boolalpha << (n1 > n2);
	} else if (compOperator == 2) {
		std::cout << " < " << n2 << " = " << std::boolalpha << (n1 < n2);
	} else if (compOperator == 3) {
		std::cout << " >= " << n2 << " = " << std::boolalpha << (n1 >= n2);
	} else if (compOperator == 4) {
		std::cout << " <= " << n2 << " = " << std::boolalpha << (n1 <= n2);
	} else if (compOperator == 5) {
		std::cout << " == " << n2 << " = " << std::boolalpha << (n1 == n2);
	} else if (compOperator == 6) {
		std::cout << " != " << n2 << " = " << std::boolalpha << (n1 != n2);
	}
	std::cout << std::endl;
}

void doComparison(Fixed &n1, Fixed &n2, bool noEqualSign, int compOperator) {
	if (noEqualSign) {
		n1 = 5, n2 = 10;
		printComparison(n1, n2, compOperator);
		printComparison(n2, n1, compOperator);
		n1 = 5, n2 = 5;
		printComparison(n1, n2, compOperator);
	} else {
		n1 = 5, n2 = 5;
		printComparison(n1, n2, compOperator);
		n1 = 5, n2 = 10;
		printComparison(n1, n2, compOperator);
		n1 = 10, n2 = 5;
		printComparison(n1, n2, compOperator);
	}
}

void comparisonTests() {
	Fixed n1 = 5, n2 = 10;

	std::cout << YELLOW "  Greater Than Comparison Operator ( > )" CYAN << std::endl;
	doComparison(n1, n2, true, 1);
	std::cout << YELLOW "  Less Than Comparison Operator ( < )" CYAN << std::endl;
	doComparison(n1, n2, true, 2);
	std::cout << YELLOW "  Greater Than or Equal To Comparison Operator ( >= )" CYAN << std::endl;
	doComparison(n1, n2, false, 3);
	std::cout << YELLOW "  Less Than or Equal To Comparison Operator ( <= )" CYAN << std::endl;
	doComparison(n1, n2, false, 4);	
	std::cout << YELLOW "  Equal To Comparison Operator ( == )" CYAN << std::endl;
	doComparison(n1, n2, false, 5);
	std::cout << YELLOW "  Not Equal To Comparison Operator ( != )" CYAN << std::endl;
	doComparison(n1, n2, false, 6);
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
			  << GREEN "\nDecrement Overload Tests" CYAN << std::endl
			  << "  num = " << num << std::endl
			  << "  num-- = " << num-- << std::endl
			  << "  num = " << num << std::endl
			  << "  --num = " << --num << std::endl;
}

void printMinMax(Fixed n1, Fixed n2, bool max) {
	if (max) {
		std::cout << "    • Comparing {" << n1 << "} and {" << n2 << "}. MAX value is "
				  << Fixed::max(n1, n2) << std::endl;
	} else {
		std::cout << "    • Comparing {" << n1 << "} and {" << n2 << "}. MIN value is "
				  << Fixed::min(n1, n2) << std::endl;
	}
}

void minMaxTests(bool max) {
	std::cout << YELLOW "  With Reference to Non-Constant Fixed-Point Numbers" CYAN << std::endl;
	Fixed n1 = 24, n2 = 42;
	printMinMax(n1, n2, max);
	n1 = 543.21f, n2 = 123.45f;
	printMinMax(n1, n2, max);
	n1 = 1, n2 = 1;
	printMinMax(n1, n2, max);
	n1 = 23.27f, n2 = 23.27f;
	printMinMax(n1, n2, max);

	std::cout << YELLOW "  With Reference to Constant Fixed-Point Numbers" CYAN << std::endl;
	Fixed const n3 = 24;
	Fixed const n4 = 42;
	printMinMax(n3, n4, max);
	Fixed const n5 = 543.21f;
	Fixed const n6 = 123.45f;
	printMinMax(n5, n6, max);
	Fixed const n7 = 1;
	Fixed const n8 = 1;
	printMinMax(n7, n8, max);
	Fixed const n9 = 23.27f;
	Fixed const n10 = 23.27f;
	printMinMax(n9, n10, max);
}

int main() {
	std::cout << GREEN "Exercise Tests" CYAN << std::endl;
	exerciseTests();
	std::cout << GREEN "\nComparison Operator Overload Tests" DEFAULT << std::endl;
	comparisonTests();
	std::cout << GREEN "\nArithmetic Operator Overload Tests" CYAN << std::endl;
	arithmeticTests();
	std::cout << GREEN "\nIncrement Overload Tests" CYAN << std::endl;
	incrementAndDecrementTests();
	std::cout << GREEN "\nMin Overload Tests" DEFAULT << std::endl;
	minMaxTests(false);
	std::cout << GREEN "\nMax Overload Tests" DEFAULT << std::endl;
	minMaxTests(true);
	std::cout << DEFAULT;
	
	return 0;
}
