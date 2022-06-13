/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:00:17 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/14 00:18:59 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void tryCatch(Bureaucrat &b, Intern &i, std::string formName, std::string formTarget) {
	std::cout << std::endl;
	try {
		if (formName.empty() || formTarget.empty()) {
			throw std::invalid_argument(RED "Invalid parameters" DEFAULT);
		}
		Form *f = i.makeForm(formName, formTarget);
		std::cout << *f;
		b.signForm(*f);
		b.executeForm(*f);
		delete f;
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

int main() {
	std::cout << YELLOW "Intern::makeForm() Tests" DEFAULT << std::endl;
	Bureaucrat b1("Martin", 1);
	Bureaucrat b150("Luna", 150);
	Intern i;

	tryCatch(b150, i, "Shrubbery Creation", "Limelight");
	tryCatch(b150, i, "Robotomy Request", "Bob");
	tryCatch(b150, i, "Presidential Pardon", "Claire");
	tryCatch(b150, i, "Hogwarts Enrollment", "Dumbledore");

	tryCatch(b1, i, "Shrubbery Creation", "Limelight");
	tryCatch(b1, i, "Robotomy Request", "Bob");
	tryCatch(b1, i, "Presidential Pardon", "Claire");
	tryCatch(b1, i, "Hogwarts Enrollment", "Dumbledore");

	return 0;
}
