/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:07:20 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/05 23:14:44 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << GREEN W_ANIMAL_CON DEFAULT << std::endl;
	this->m_type = W_ANIMAL;
}

WrongAnimal::WrongAnimal(WrongAnimal const &source) {
	std::cout << GREEN W_ANIMAL_CPY DEFAULT << std::endl;
	*this = source;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &data) {
	this->m_type = data.m_type;
	return *this;
}

WrongAnimal::~WrongAnimal() {
	std::cout << RED W_ANIMAL_DEC DEFAULT << std::endl;
}

std::string WrongAnimal::getType() const {
	return this->m_type;
}

void WrongAnimal::makeSound() const {
	std::cout << W_ANIMAL_SND << std::endl;
}
