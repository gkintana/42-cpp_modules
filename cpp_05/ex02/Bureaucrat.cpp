/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:00:13 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/19 13:24:17 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : m_name("Bureaucrat Sample") {
	std::cout << GREEN "Bureaucrat Default Constructor" DEFAULT << std::endl;
	this->m_grade = 150;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : m_name(name) {
	std::cout << GREEN "Bureaucrat Constructor" DEFAULT << std::endl;
	try {
		if (grade > 150) {
			throw Bureaucrat::GradeTooLowException();
		} else if (grade < 1) {
			throw Bureaucrat::GradeTooHighException();
		} else {
			this->m_grade = grade;
		}
	}
	catch (std::exception &e) {
		std::cerr << e.what() << CYAN "\nBureaucrat grade set to 150" DEFAULT << std::endl;
		this->m_grade = 150;
	}
}

Bureaucrat::Bureaucrat(Bureaucrat const &source) {
	std::cout << GREEN "Bureaucrat Copy Constructor" DEFAULT << std::endl;
	*this = source;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &data) {
	std::cout << GREEN "Bureaucrat Copy Assignment Operator" DEFAULT << std::endl;
	if (this != &data) {
		const_cast<std::string&>(m_name) = data.m_name;
		this->m_grade = data.m_grade;
	}
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << PURPLE "Bureaucrat Destructor" DEFAULT << std::endl;
}

std::string Bureaucrat::getName() const {
	return this->m_name;
}

int Bureaucrat::getGrade() const {
	return this->m_grade;
}

void Bureaucrat::incrementGrade() {
	try {
		if (m_grade > 1 && m_grade <= 150) {
			m_grade--;
		} else {
			throw Bureaucrat::GradeTooHighException();
		}
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::decrementGrade() {
	try {
		if (m_grade >= 1 && m_grade < 150) {
			m_grade++;
		} else {
			throw Bureaucrat::GradeTooLowException();
		}
	}
	catch (std::exception &e) {
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::signForm(Form &f) {
	try {
		if (this->getGrade() <= f.getGradeToSign()) {
			std::cout << GREEN << this->m_name << " signed " << f.getFormName() << DEFAULT << std::endl;
			f.updateSign();
		} else {
			throw std::out_of_range("their grade is below the specified grade to sign the form");
		}
	}
	catch (std::exception &e) {
		std::cerr << RED << this->m_name << " couldn't sign " << f.getFormName()
				  << " because " << e.what() << DEFAULT << std::endl;
	}
}

void Bureaucrat::executeForm(Form const &form) {
	if (form.hasBeenSigned()) {
		try {
			if (this->getGrade() <= form.getGradeToExecute()) {
				std::cout << GREEN << this->m_name << " executed " << form.getFormName() << DEFAULT << std::endl;
				form.execute(*this);
			} else {
				throw std::out_of_range("their grade is below the specified grade to execute the form");
			}
		}
		catch (std::exception &e) {
			std::cerr << RED << this->m_name << " couldn't execute " << form.getFormName()
					<< " because " << e.what() << DEFAULT << std::endl;
		}
	} else {
		std::cerr << RED << form.getFormName() << " has not been signed" << DEFAULT << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
	return RED "Bureaucrat grade exceeds the highest possible grade" DEFAULT;
}

const char *Bureaucrat::GradeTooLowException::what() const throw() {
	return RED "Bureaucrat grade is below the lowest possible grade" DEFAULT;
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const &info) {
	out << info.getName() << ", bureaucrat grade " << info.getGrade() << std::endl;
	return out;
}
