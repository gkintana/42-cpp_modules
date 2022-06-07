/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:19:59 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/07 12:48:35 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << GREEN "Wrong Cat Constructor" DEFAULT << std::endl;
	this->m_type = "Cat";
}

WrongCat::WrongCat(WrongCat const &source) : WrongAnimal() {
	std::cout << GREEN "Wrong Cat Copy Constructor" DEFAULT << std::endl;
	*this = source;
}

WrongCat &WrongCat::operator=(WrongCat const &data) {
	std::cout << GREEN "Wrong Cat Copy Assignment Operator" DEFAULT << std::endl;
	this->m_type = data.m_type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << RED "Wrong Cat Destructor" DEFAULT << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << "\"Moo\"" << std::endl;
}
