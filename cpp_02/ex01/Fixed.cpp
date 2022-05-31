/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:02:35 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/31 13:54:00 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->m_fixedPoint = 0;
}

Fixed::Fixed(Fixed const &original) {
	std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

Fixed &Fixed::operator=(Fixed const &num) {
	std::cout << "Copy assignment operator called" << std::endl;
	this->m_fixedPoint = num.getRawBits();
	return *this;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const a_integer) {
	std::cout << "Int constructor called" << std::endl;
	this->m_fixedPoint = a_integer << this->m_fractionalBit;
}

Fixed::Fixed(float const a_float) {
	std::cout << "Float constructor called" << std::endl;
	this->m_fixedPoint = roundf(a_float * (1 << this->m_fractionalBit));
}

int Fixed::getRawBits() const {
	return this->m_fixedPoint;
}

float Fixed::toFloat() const {
	return (roundf(this->m_fixedPoint) / (1 << this->m_fractionalBit));
}

int Fixed::toInt() const {
	return this->m_fixedPoint >> this->m_fractionalBit;
}

std::ostream &operator<<(std::ostream &out, Fixed const &num) {
	out << num.toFloat();
	return out;
}
