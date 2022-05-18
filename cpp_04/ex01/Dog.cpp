/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 09:58:40 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/18 23:39:11 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << GREEN DOG_CON DEFAULT << std::endl;
	this->m_type = DOG;
	this->m_brain = new Brain();
}

Dog::Dog(Dog const &source) {
	std::cout << GREEN DOG_CPY DEFAULT << std::endl;
	*this = source;
	// (void)source;
}

Dog	&Dog::operator=(Dog const &data) {
	std::cout << GREEN DOG_CAO DEFAULT << std::endl;
	this->m_type = data.m_type;
	this->m_brain = new Brain();
	return *this;
}

Dog::~Dog(void) {
	delete this->m_brain;
	std::cout << RED DOG_DEC DEFAULT << std::endl;
}

void Dog::makeSound(void) const {
	std::cout << DOG_SND << std::endl;
}
