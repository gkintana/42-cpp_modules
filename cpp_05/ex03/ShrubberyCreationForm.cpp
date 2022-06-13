/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 22:14:14 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/14 00:41:18 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("Shrubbery Creation Form", 145, 137),
												 m_target("Classified Target") {
	std::cout << GREEN "Shrubbery Creation Form Default Constructor" DEFAULT << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string const target) : Form("Shrubbery Creation Form", 145, 137),
																		 m_target(target) {
	std::cout << GREEN "Shrubbery Creation Form Constructor" DEFAULT << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &source) : Form(source),
																					m_target(source.m_target) {
	std::cout << GREEN "Shrubbery Creation Form Copy Constructor" DEFAULT << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &data) {
	std::cout << GREEN "Shrubbery Creation Form Copy Assignment Operator" DEFAULT << std::endl;
	if (this != &data) {
		const_cast <std::string &>(m_target) = data.m_target;
	}
	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << PURPLE "Shrubbery Creation Form Destructor" DEFAULT << std::endl;
}

void ShrubberyCreationForm::createTarget() const {
	std::ofstream asciiTree;
	std::string file = this->m_target + "_shrubbery";
	asciiTree.open(file.c_str());
	if (!asciiTree) {
		throw std::invalid_argument(RED "Failed to create <target>_shrubbery" DEFAULT);
	}
	asciiTree << ASCII_TREE << std::endl;
	asciiTree.close();
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
	if (this->hasBeenSigned()) {
		try {
			if (this->hasBeenSigned() && executor.getGrade() <= this->getGradeToExecute()) {
				createTarget();
				std::cout << CYAN << this->m_target << "_shrubbery has been created" DEFAULT << std::endl;
			} else {
				throw std::out_of_range(RED "Bureaucrat is unqualified to execute the orders of this form" DEFAULT);
			}
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
}
