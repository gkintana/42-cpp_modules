/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:39:52 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/13 23:06:09 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern() {
	std::cout << GREEN "Intern Default Constructor" DEFAULT << std::endl;
	this->funcPtr[0] = &Intern::ShrubberyCreation;
	this->funcPtr[1] = &Intern::RobotomyRequest;
	this->funcPtr[2] = &Intern::PresidentialPardon;
}

Intern::Intern(Intern const &source) {
	std::cout << GREEN "Intern Copy Constructor" DEFAULT << std::endl;
	*this = source;
}

Intern &Intern::operator=(Intern const &data) {
	std::cout << GREEN "Intern Copy Assignment Operator" DEFAULT << std::endl;
	(void)data;
	return *this;
}

Intern::~Intern() {
	std::cout << PURPLE "Intern Destructor" DEFAULT << std::endl;
}

Form *Intern::ShrubberyCreation(std::string target) {
	return new ShrubberyCreationForm(target);
}

Form *Intern::RobotomyRequest(std::string target) {
	return new RobotomyRequestForm(target);
}

Form *Intern::PresidentialPardon(std::string target) {
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(std::string formName, std::string formTarget) {
	std::string formTypes[3] = { "Shrubbery Creation",
								 "Robotomy Request",
								 "Presidential Pardon" };
	for (int i = 0; i < 3; i++) {
		if (!formName.compare(formTypes[i])) {
			std::cout << CYAN "Intern creates " << formTypes[i] << " Form" DEFAULT << std::endl;
			return (this->*funcPtr[i])(formTarget);
		}
	}
	throw std::out_of_range(RED "Provided form name does not exist within the selection of forms" DEFAULT);
}
