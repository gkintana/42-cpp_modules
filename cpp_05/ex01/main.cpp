/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:00:17 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/12 02:27:17 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void basicTests();
void beSignedTests();
void signFormTests();

int main() {
	std::cout << YELLOW "Form Constructor & Destructor Tests" DEFAULT << std::endl;
	basicTests();
	std::cout << YELLOW "\nbeSigned() Member Function Tests" DEFAULT << std::endl;
	beSignedTests();
	std::cout << YELLOW "\nsignForm() Member Function Tests" DEFAULT << std::endl;
	signFormTests();
}

void basicTryCatch(std::string name, int signGrade, int execGrade, bool newline) {
	if (newline) {
		std::cout << std::endl;
	}
	try {
		Form f(name, signGrade, execGrade);
		std::cout << f;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void basicTests() {
	basicTryCatch("Form No. 1A", 125, 100, false);
	basicTryCatch("Form No. 2B", 0, 100, true);
	basicTryCatch("Form No. 3C", 125, 1000, true);

	// copy cons
}

void signAttempt(Bureaucrat &b, Form &f, bool newline) {
	std::cout << b << std::endl
			  << CYAN << b.getName() << " attempts to sign "
			  << f.getFormName() << DEFAULT << std::endl;
	f.beSigned(b);
	if (newline) {
		std::cout << f << std::endl;
	} else {
		std::cout << f;
	}
}

void beSignedTests() {
	Form f("Non-Disclosure Agreement No. 4242", 80, 42);
	std::cout << f << std::endl;

	Bureaucrat b1("Howard", 100);
	signAttempt(b1, f, true);

	Bureaucrat b2("Nelson", 60);
	signAttempt(b2, f, false);
}

void signFormTests() {
	Form f("Petition Form No. 123A", 100, 42);
	std::cout << f << std::endl;

	Bureaucrat b1("Rose", 123);
	signAttempt(b1, f, true);

	Bureaucrat b2("Catherine", 100);
	signAttempt(b2, f, false);
}
