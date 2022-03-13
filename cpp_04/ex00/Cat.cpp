/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:25:33 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/13 20:51:21 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << "Cat Constructor" << std::endl;
	this->m_type = "Cat";
}

Cat::Cat(Cat const &source) {
	std::cout << "Cat Copy Constructor" << std::endl;
	*this = source;
}

Cat	&Cat::operator=(Cat const &data) {
	std::cout << "Cat Copy Assignment Operator" << std::endl;
	this->m_type = data.m_type;
	return (*this);
}

Cat::~Cat(void) {
	std::cout << "Cat Deconstructor" << std::endl;
}

// std::string	Cat::getType(void) const {
// 	// this->m_type = "Cat";
// 	return (this->m_type);
// }

void	Cat::makeSound(void) const {
	std::cout << "Meow" << std::endl;
}
