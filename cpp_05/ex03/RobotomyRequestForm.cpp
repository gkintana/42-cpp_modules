/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 22:14:08 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/13 01:55:27 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("Robotomy Request Form", 72, 45),
												   m_target("Classified Target") {
	std::cout << GREEN "Robotomy Request Form Default Constructor" DEFAULT << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string const target) : Form("Robotomy Request Form", 72, 45),
																	 m_target(target) {
	std::cout << GREEN "Robotomy Request Form Constructor" DEFAULT << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &source) : Form(source),
																			  m_target(source.m_target) {
	std::cout << GREEN "Robotomy Request Form Copy Constructor" DEFAULT << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &data) {
	std::cout << GREEN "Robotomy Request Form Copy Assignment Operator" DEFAULT << std::endl;
	if (this != &data) {
		const_cast <std::string &>(m_target) = data.m_target;
	}
	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << PURPLE "Robotomy Request Form Destructor" DEFAULT << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if (this->hasBeenSigned()) {
		try {
			if (this->hasBeenSigned() && executor.getGrade() <= this->getGradeToExecute()) {
				srand(time(NULL));
				if (rand() % 2) {
					std::cout << CYAN << this->m_target << "'s robotomy procedure was a success" DEFAULT << std::endl;
				} else {
					std::cout << RED << this->m_target << "'s robotomy procedure was a failure" DEFAULT << std::endl;
				}
			} else {
				throw std::out_of_range(RED "Bureaucrat is unqualified to execute the orders of this form" DEFAULT);
			}
		}
		catch (std::exception &e) {
			std::cerr << e.what() << std::endl;
		}
	}
}
