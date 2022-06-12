/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:00:17 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/13 01:56:16 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

void presidentialTests();
void robotomyTests();

int main() {
	std::cout << YELLOW "Shrubbery Creation Form Tests" DEFAULT << std::endl;
	std::cout << YELLOW "\nRobotomy Request Form Tests" DEFAULT << std::endl;
	robotomyTests();
	std::cout << YELLOW "\nPresidential Pardon Form Tests" DEFAULT << std::endl;
	presidentialTests();
	std::cout << YELLOW "\nBureaucrat::executeForm() Tests" DEFAULT << std::endl;
}

void tryCatch(std::string name, int grade, Form &f) {
	try {
		std::cout << std::endl;
		Bureaucrat b(name, grade);
		std::cout << CYAN << b << DEFAULT << b.getName() << " attempts to sign "
				  << f.getFormName() << std::endl;
		b.signForm(f);
		f.execute(b);
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void robotomyTests() {
	RobotomyRequestForm p("Robert");
	std::cout << p;
	
	tryCatch("Jade", 150, p);
	tryCatch("Sam", 72, p);
	tryCatch("Sasha", 45, p);
}

void presidentialTests() {
	PresidentialPardonForm p("Albert");
	std::cout << p;

	tryCatch("Jade", 150, p);
	tryCatch("Sam", 25, p);
	tryCatch("Sasha", 5, p);
}
