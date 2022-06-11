/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:00:17 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/11 19:38:43 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void basicTests();
void incrementTests();
void decrementTests();

int main() {
	std::cout << YELLOW "Bureaucrat Constructor & Destructor Tests" DEFAULT << std::endl;
	basicTests();
	std::cout << YELLOW "\nBureaucrat Increment Tests" DEFAULT << std::endl;
	incrementTests();
	std::cout << YELLOW "\nBureaucrat Decrement Tests" DEFAULT << std::endl;
	decrementTests();
}

void basicTests() {
	try {
		Bureaucrat b;
		std::cout << b;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		Bureaucrat b("Fred", 0);
		Bureaucrat bCopy = b;
		std::cout << bCopy;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	std::cout << std::endl;
	try {
		Bureaucrat b("Steven", 200);
		Bureaucrat bCopy;
		bCopy = b;
		std::cout << b;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

void incrementTests() {
	Bureaucrat b("Eleanor", 3);

	std::cout << b;
	for (int i = 0; i < 3; i++) {
		b.incrementGrade();
		std::cout << b;
	}
}

void decrementTests() {
	Bureaucrat b("Diane", 148);

	std::cout << b;
	for (int i = 0; i < 3; i++) {
		b.decrementGrade();
		std::cout << b;
	}
}
