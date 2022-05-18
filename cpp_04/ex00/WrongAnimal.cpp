/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:07:20 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/18 16:23:10 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
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

WrongAnimal::~WrongAnimal(void) {
	std::cout << RED W_ANIMAL_DEC DEFAULT << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return this->m_type;
}

void WrongAnimal::makeSound(void) const {
	std::cout << W_ANIMAL_SND << std::endl;
}
