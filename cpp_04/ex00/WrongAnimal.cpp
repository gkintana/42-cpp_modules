/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:07:20 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/17 21:52:59 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << GREEN WRONGA_CON DEFAULT << std::endl;
	this->m_type = WRONGA;
}

WrongAnimal::WrongAnimal(WrongAnimal const &source) {
	std::cout << GREEN WRONGA_CPY DEFAULT << std::endl;
	*this = source;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &data) {
	this->m_type = data.m_type;
	return *this;
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << RED WRONGA_DEC DEFAULT << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return this->m_type;
}

void WrongAnimal::makeSound(void) const {
	std::cout << WRONGA_SND << std::endl;
}
