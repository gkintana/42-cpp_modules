/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:25:33 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/06 23:57:34 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << GREEN "Cat Constructor" DEFAULT << std::endl;
	this->m_type = "Cat";
	this->m_brain = new Brain();
}

Cat::Cat(Cat const &source) {
	std::cout << GREEN "Cat Copy Constructor" DEFAULT << std::endl;
	*this = source;
}

Cat &Cat::operator=(Cat const &data) {
	std::cout << GREEN "Cat Copy Assignment Operator" DEFAULT << std::endl;
	this->m_type = data.m_type;
	this->m_brain = new Brain;
	return *this;
}

Cat::~Cat() {
	delete this->m_brain;
	std::cout << RED "Cat Destructor" DEFAULT << std::endl;
}

void Cat::makeSound() const {
	std::cout << "\"Meow\"" << std::endl;
}
