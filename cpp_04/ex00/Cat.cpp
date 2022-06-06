/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:25:33 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/06 21:55:24 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << GREEN "Cat Constructor" DEFAULT << std::endl;
	this->m_type = "Cat";
}

Cat::Cat(Cat const &source) {
	std::cout << GREEN "Cat Copy Constructor" DEFAULT << std::endl;
	*this = source;
}

Cat &Cat::operator=(Cat const &data) {
	std::cout << GREEN "Cat Copy Assignment Operator" DEFAULT << std::endl;
	this->m_type = data.m_type;
	return *this;
}

Cat::~Cat() {
	std::cout << RED "Cat Destructor" DEFAULT << std::endl;
}

void Cat::makeSound() const {
	std::cout << "\"Meow\"" << std::endl;
}
