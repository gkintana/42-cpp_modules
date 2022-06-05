/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:25:33 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/05 23:13:48 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	std::cout << GREEN CAT_CON DEFAULT << std::endl;
	this->m_type = CAT;
}

Cat::Cat(Cat const &source) {
	std::cout << GREEN CAT_CPY DEFAULT << std::endl;
	*this = source;
}

Cat &Cat::operator=(Cat const &data) {
	std::cout << GREEN CAT_CAO DEFAULT << std::endl;
	this->m_type = data.m_type;
	return *this;
}

Cat::~Cat() {
	std::cout << RED CAT_DEC DEFAULT << std::endl;
}

void Cat::makeSound() const {
	std::cout << CAT_SND << std::endl;
}
