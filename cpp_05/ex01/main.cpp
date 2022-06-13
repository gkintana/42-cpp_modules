/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:00:17 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/14 00:04:43 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

void basicTests();
void beSignedTests();
void signFormTests();

int main() {
	std::cout << YELLOW "Form Constructor & Destructor Tests" DEFAULT << std::endl;
	basicTests();
	std::cout << YELLOW "\nForm::beSigned() Tests" DEFAULT << std::endl;
	beSignedTests();
	std::cout << YELLOW "\nBureaucrat::signForm() Tests" DEFAULT << std::endl;
	signFormTests();

	return 0;
}

void tryCatch(std::string name, int signGrade, int execGrade) {
	std::cout << std::endl;
	try {
		Form f(name, signGrade, execGrade);
		std::cout << f;
	} catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void basicTests() {
	{
		Form f;
		std::cout << f;
	}

	tryCatch("Form No. 1A", 125, 100);
	tryCatch("Form No. 2B", 0, 100);
	tryCatch("Form No. 3C", 125, 1000);

	try {
		std::cout << std::endl;
		Form f("Form No. 4D", 123, 45);
		Form fCopy1 = f;
		std::cout << fCopy1;

		std::cout << std::endl;
		Form fCopy2;
		fCopy2 = f;
		std::cout << fCopy2;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

/*
   signType 1 = beSigned();
   signType 2 = signForm();
*/
void signAttempt(Bureaucrat &b, Form &f, bool newline, int signType) {
	std::cout << b << CYAN << b.getName() << " attempts to sign "
			  << f.getFormName() << DEFAULT << std::endl;

	if (signType == 1) {
		f.beSigned(b);
	} else {
		b.signForm(f);
	}

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
	signAttempt(b1, f, true, 1);

	Bureaucrat b2("Nelson", 60);
	signAttempt(b2, f, false, 1);
}

void signFormTests() {
	Form f("Petition Form No. 123A", 100, 42);
	std::cout << f << std::endl;

	Bureaucrat b1("Rose", 123);
	signAttempt(b1, f, true, 2);

	Bureaucrat b2("Catherine", 100);
	signAttempt(b2, f, false, 2);
}
