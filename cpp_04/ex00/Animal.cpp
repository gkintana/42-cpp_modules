/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 12:45:33 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/05 23:13:27 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << GREEN ANIMAL_CON DEFAULT << std::endl;
	this->m_type = ANIMAL;
}

Animal::Animal(Animal const &source) {
	std::cout << GREEN ANIMAL_CPY DEFAULT << std::endl;
	*this = source;
}

Animal &Animal::operator=(Animal const &data) {
	std::cout << GREEN ANIMAL_CAO DEFAULT << std::endl;
	this->m_type = data.m_type;
	return *this;
}

Animal::~Animal() {
	std::cout << RED ANIMAL_DEC DEFAULT << std::endl;
}

std::string Animal::getType() const {
	return this->m_type;
}

void Animal::makeSound() const {
	std::cout << ANIMAL_SND << std::endl;
}
