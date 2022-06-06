/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 12:45:33 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/06 23:50:50 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << GREEN "Animal Constructor" DEFAULT << std::endl;
	this->m_type = "Tiger";
}

Animal::Animal(Animal const &source) {
	std::cout << GREEN "Animal Copy Constructor" DEFAULT << std::endl;
	*this = source;
}

Animal &Animal::operator=(Animal const &data) {
	std::cout << GREEN "Animal Copy Assignment Operator" DEFAULT << std::endl;
	this->m_type = data.m_type;
	return *this;
}

Animal::~Animal() {
	std::cout << RED "Animal Destructor" DEFAULT << std::endl;
}

std::string Animal::getType() const {
	return this->m_type;
}

void Animal::makeSound() const {
	std::cout << "\"Roar\"" << std::endl;
}
