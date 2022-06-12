/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 20:10:03 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/12 21:22:19 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : m_name("Standard Form"),
			   m_signed(false),
			   m_gradeToSign(100),
			   m_gradeToExecute(50) {
	std::cout << GREEN "Form Default Constructor" DEFAULT << std::endl;
}

Form::Form(const std::string name,
		   const int gradeToSign,
		   const int gradeToExecute) : m_name(name),
		   							   m_signed(false),
									   m_gradeToSign(gradeToSign),
									   m_gradeToExecute(gradeToExecute) {
	std::cout << GREEN "Form Constructor" DEFAULT << std::endl;
	if (this->m_gradeToSign < 1 || this->m_gradeToExecute < 1) {
		throw Form::GradeTooHighException();
	} else if (this->m_gradeToSign > 150 || this->m_gradeToExecute > 150) {
		throw Form::GradeTooLowException();
	}
}

Form::Form(Form const &source) : m_name(source.m_name),
								 m_signed(source.m_signed),
								 m_gradeToSign(source.m_gradeToSign),
								 m_gradeToExecute(source.m_gradeToExecute) {
	std::cout << GREEN "Form Copy Constructor" DEFAULT << std::endl;
}

Form &Form::operator=(Form const &data) {
	std::cout << GREEN "Form Copy Assignment Operator" DEFAULT << std::endl;
	if (this != &data) {
		const_cast <std::string &>(m_name) = data.m_name;
		this->m_signed = data.m_signed;
		const_cast <int &>(m_gradeToSign) = data.m_gradeToSign;
		const_cast <int &>(m_gradeToExecute) = data.m_gradeToExecute;
	}
	return *this;
}

Form::~Form() {
	std::cout << PURPLE "Form Destructor" DEFAULT << std::endl;
}

std::string Form::getFormName() const {
	return this->m_name;
}

bool Form::hasBeenSigned() const {
	return this->m_signed;
}

int Form::getGradeToSign() const {
	return this->m_gradeToSign;
}

int Form::getGradeToExecute() const {
	return this->m_gradeToExecute;
}

void Form::updateSign() {
	this->m_signed = true;
}

void Form::beSigned(Bureaucrat &b) {
	try {
		if (b.getGrade() <= this->m_gradeToSign) {
			std::cout << GREEN << b.getName() << " signed " << this->m_name << DEFAULT << std::endl;
			this->m_signed = true;
		} else {
			throw std::out_of_range(RED "Bureaucrat is unqualified to sign this form" DEFAULT);
		}
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

const char *Form::GradeTooHighException::what() const throw() {
	return RED "Form grade exceeds the highest possible grade" DEFAULT;
}

const char *Form::GradeTooLowException::what() const throw() {
	return RED "Form grade is below the lowest possible grade" DEFAULT;
}

std::ostream &operator<<(std::ostream &out, Form const &info) {
	out << YELLOW2 "Form Information" DEFAULT << std::endl
		<< CYAN "  • Form Name: " DEFAULT
		<< info.getFormName() << std::endl
		<< CYAN "  • Signed by Bureaucrat: " DEFAULT
		<< std::boolalpha << info.hasBeenSigned() << std::endl
		<< CYAN "  • Required Grade To Sign: " DEFAULT
		<< info.getGradeToSign() << std::endl
		<< CYAN "  • Required Grade To Execute: " DEFAULT
		<< info.getGradeToExecute() << std::endl;
	return out;
}
