/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 12:45:33 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/17 21:46:08 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) {
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

Animal::~Animal(void) {
	std::cout << RED ANIMAL_DEC DEFAULT << std::endl;
}

std::string Animal::getType(void) const {
	return this->m_type;
}

void Animal::makeSound(void) const {
	std::cout << ANIMAL_SND << std::endl;
}
