/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:02:35 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/06 22:51:28 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << DEF_CONS << std::endl;
	this->m_fixedPoint = 0;
}

Fixed::Fixed(Fixed const &original) {
	std::cout << COPY_CONS << std::endl;
	*this = original;
}

Fixed	&Fixed::operator=(Fixed const &num) {
	std::cout << COPY_OPER << std::endl;
	this->m_fixedPoint = num.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << DESTRUCT << std::endl;
}

Fixed::Fixed(int const a_integer) {
	std::cout << INT_CONS << std::endl;
	this->m_fixedPoint = a_integer << this->m_fractionalBit;
}

Fixed::Fixed(float const a_float) {
	std::cout << FLOAT_CONS << std::endl;
	this->m_fixedPoint = roundf(a_float * (1 << this->m_fractionalBit));
}

int		Fixed::getRawBits(void) const {
	return (this->m_fixedPoint);
}

// // setRawBits for Constant Integers
// void	Fixed::setRawBits(int const a_integer) {
// 	this->m_fixedPoint = a_integer;
// }

// // setRawBits for Constant Floats
// void	Fixed::setRawBits(float const a_float) {
// 	this->m_fixedPoint = a_float;
// }

float	Fixed::toFloat(void) const {
	return (roundf(this->m_fixedPoint) / (1 << this->m_fractionalBit));
}

int		Fixed::toInt(void) const {
	return (this->m_fixedPoint >> this->m_fractionalBit);
}

std::ostream	&operator<<(std::ostream &out, Fixed const &num) {
	out << num.toFloat();
	return (out);
}
