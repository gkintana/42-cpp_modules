/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:00:17 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/13 21:29:37 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void shrubberyTests();
void robotomyTests();
void presidentialTests();
void executeFormTests();

int main() {
	std::cout << YELLOW "Shrubbery Creation Form Tests" DEFAULT << std::endl;
	shrubberyTests();
	std::cout << YELLOW "\nRobotomy Request Form Tests" DEFAULT << std::endl;
	robotomyTests();
	std::cout << YELLOW "\nPresidential Pardon Form Tests" DEFAULT << std::endl;
	presidentialTests();
	std::cout << YELLOW "\nBureaucrat::executeForm() Tests" DEFAULT << std::endl;
	executeFormTests();
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

void shrubberyTests() {
	ShrubberyCreationForm f("home");
	std::cout << f;

	tryCatch("Jade", 150, f);
	tryCatch("Sam", 145, f);
	tryCatch("Sasha", 137, f);
}

void robotomyTests() {
	RobotomyRequestForm f("Robert");
	std::cout << f;
	
	tryCatch("Jade", 150, f);
	tryCatch("Sam", 72, f);
	tryCatch("Sasha", 45, f);
}

void presidentialTests() {
	PresidentialPardonForm f("Albert");
	std::cout << f;

	tryCatch("Jade", 150, f);
	tryCatch("Sam", 25, f);
	tryCatch("Sasha", 5, f);
}

void executeFormTests() {
	Bureaucrat b("Jill", 1);
	
	{
		ShrubberyCreationForm s("outdoor");
		b.signForm(s);
		b.executeForm(s);
	}

	{
		std::cout << std::endl;
		RobotomyRequestForm r("Ben");
		b.signForm(r);
		b.executeForm(r);
	}
	
	{
		std::cout << std::endl;
		PresidentialPardonForm p("Emmeline");
		b.signForm(p);
		b.executeForm(p);
	}
}
