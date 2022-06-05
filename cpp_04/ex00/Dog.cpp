/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 09:58:40 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/05 23:14:18 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << GREEN DOG_CON DEFAULT << std::endl;
	this->m_type = DOG;
}

Dog::Dog(Dog const &source) {
	std::cout << GREEN DOG_CPY DEFAULT << std::endl;
	*this = source;
}

Dog	&Dog::operator=(Dog const &data) {
	std::cout << GREEN DOG_CAO DEFAULT << std::endl;
	this->m_type = data.m_type;
	return *this;
}

Dog::~Dog() {
	std::cout << RED DOG_DEC DEFAULT << std::endl;
}

void Dog::makeSound() const {
	std::cout << DOG_SND << std::endl;
}
