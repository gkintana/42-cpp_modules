/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:07:20 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/06 23:30:23 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << GREEN "Wrong Animal Constructor" DEFAULT << std::endl;
	this->m_type = "Cow";
}

WrongAnimal::WrongAnimal(WrongAnimal const &source) {
	std::cout << GREEN "Wrong Animal Copy Constructor" DEFAULT << std::endl;
	*this = source;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &data) {
	std::cout << GREEN "Wrong Animal Copy Assignment Operator" DEFAULT << std::endl;
	this->m_type = data.m_type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << RED "Wrong Animal Destructor" DEFAULT << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->m_type;
}

void WrongAnimal::makeSound() const {
	std::cout << "\"Meow\"" << std::endl;
}
