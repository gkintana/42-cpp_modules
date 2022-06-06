/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 09:58:40 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/07 00:06:33 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << GREEN "Dog Constructor" DEFAULT << std::endl;
	this->m_type = "Dog";
	this->m_brain = new Brain();
}

Dog::Dog(Dog const &source) {
	std::cout << GREEN "Dog Copy Constructor" DEFAULT << std::endl;
	*this = source;
}

Dog	&Dog::operator=(Dog const &data) {
	std::cout << GREEN "Dog Copy Assignment Operator" DEFAULT << std::endl;
	this->m_type = data.m_type;
	this->m_brain = new Brain();
	return *this;
}

Dog::~Dog() {
	delete this->m_brain;
	std::cout << RED "Dog Destructor" DEFAULT << std::endl;
}

void Dog::makeSound() const {
	std::cout << "\"Woof\"" << std::endl;
}
