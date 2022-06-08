/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:00:13 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/08 18:18:50 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
	std::cout << GREEN "Bureaucrat Default Constructor" DEFAULT << std::endl;
	this->m_name = "Mr. Bureau";
	this->m_grade = 1;
}

Bureaucrat::Bureaucrat(Bureaucrat const &source) {
	std::cout << GREEN "Bureaucrat Copy Constructor" DEFAULT << std::endl;
	*this = source;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &data) {
	std::cout << GREEN "Bureaucrat Copy Assignment Operator" DEFAULT << std::endl;
	(void)data;
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << RED "Bureaucrat Destructor" DEFAULT << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) {
	std::cout << GREEN "Specific Bureaucrat Constructor" DEFAULT << std::endl;
	this->m_name = name;
	try {
		if (grade > 150) {
			throw std::out_of_range("grade");
		} else {
			this->m_grade = grade;
		}
	}
	catch (std::exception &grade) {
		std::cerr << "Bureaucrat grade is greater than 150" << std::endl;
		return ;
	}
}

std::string Bureaucrat::getName() {
	return this->m_name;
}

int Bureaucrat::getGrade() {
	return this->m_grade;
}
