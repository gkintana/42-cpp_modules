/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 09:58:40 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/14 21:51:04 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) {
	std::cout << DOG_CON << std::endl;
	this->m_type = DOG;
	this->m_brain = new Brain();
}

Dog::Dog(Dog const &source) {
	std::cout << DOG_CPY << std::endl;
	*this = source;
}

Dog	&Dog::operator=(Dog const &data) {
	std::cout << DOG_CAO << std::endl;
	this->m_type = data.m_type;
	return (*this);
}

Dog::~Dog(void) {
	std::cout << DOG_DEC << std::endl;
}

void	Dog::makeSound(void) const {
	std::cout << DOG_SND << std::endl;
}
