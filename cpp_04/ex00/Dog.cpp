/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 09:58:40 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/06 23:18:17 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << GREEN "Dog Constructor" DEFAULT << std::endl;
	this->m_type = "Dog";
}

Dog::Dog(Dog const &source) {
	std::cout << GREEN "Dog Copy Constructor" DEFAULT << std::endl;
	*this = source;
}

Dog	&Dog::operator=(Dog const &data) {
	std::cout << GREEN "Dog Copy Assignment Operator" DEFAULT << std::endl;
	this->m_type = data.m_type;
	return *this;
}

Dog::~Dog() {
	std::cout << RED "Dog Destructor" DEFAULT << std::endl;
}

void Dog::makeSound() const {
	std::cout << "\"Woof\"" << std::endl;
}
