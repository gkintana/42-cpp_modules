/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 12:45:33 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/13 19:39:11 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
	std::cout << "Animal Constructor" << std::endl;
}

Animal::Animal(Animal const &source) {
	std::cout << "Animal Copy Constructor" << std::endl;
	*this = source;
}

Animal &Animal::operator=(Animal const &data) {
	std::cout << "Animal Copy Assignment Operator" << std::endl;
	this->m_type = data.m_type;
	return (*this);
}

Animal::~Animal(void) {
	std::cout << "Animal Deconstructor" << std::endl;
}

std::string	Animal::getType(void) const {
	return (this->m_type);
}

void	Animal::makeSound(void) const {
	std::cout << "Animal Sound" << std::endl;
}
