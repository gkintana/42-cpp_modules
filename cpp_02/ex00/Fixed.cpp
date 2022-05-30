/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:02:35 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/30 07:55:04 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://www.geeksforgeeks.org/constructors-c/
// https://www.geeksforgeeks.org/copy-constructor-in-cpp/
// https://www.geeksforgeeks.org/copy-constructor-vs-assignment-operator-in-c/
// https://www.geeksforgeeks.org/copy-constructor-argument-const/

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << DEF_CONS << std::endl;
	this->m_fixedPoint = 0;
}

Fixed::Fixed(Fixed const &original) {
	std::cout << COPY_CONS << std::endl;
	*this = original;
}

Fixed &Fixed::operator=(Fixed const &num) {
	std::cout << COPY_OPER << std::endl;
	this->m_fixedPoint = num.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << DESTRUCT << std::endl;
}

int Fixed::getRawBits() const {
	std::cout << FN_GRB << std::endl;
	return this->m_fixedPoint;
}

void Fixed::setRawBits(int const integer) {
	this->m_fixedPoint = integer;
}
