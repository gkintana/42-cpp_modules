/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 22:14:06 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/13 01:40:53 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon Form", 25, 5),
												   m_target("Classified Target") {
	std::cout << GREEN "Presidential Pardon Form Default Constructor" DEFAULT << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target) : Form("Presidential Pardon Form", 25, 5),
																		   m_target(target) {
	std::cout << GREEN "Presidential Pardon Form Constructor" DEFAULT << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &source) : Form(source),
																					   m_target(source.m_target) {
	std::cout << GREEN "Presidential Pardon Form Copy Constructor" DEFAULT << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &data) {
	std::cout << GREEN "Presidential Pardon Form Copy Assignment Operator" DEFAULT << std::endl;
	if (this != &data) {
		const_cast <std::string &>(m_target) = data.m_target;
	}
	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << PURPLE "Presidential Pardon Form Destructor" DEFAULT << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
	if (this->hasBeenSigned()) {
		try {
			if (this->hasBeenSigned() && executor.getGrade() <= this->getGradeToExecute()) {
				std::cout << CYAN << this->m_target << " has been pardoned by Zaphod Beeblebrox" DEFAULT << std::endl;
			} else {
				throw std::out_of_range(RED "Bureaucrat is unqualified to execute the orders of this form" DEFAULT);
			}
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
}
