/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:02:35 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/31 20:14:28 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	// std::cout << "Default constructor called" << std::endl;
	this->m_fixedPoint = 0;
}

Fixed::Fixed(Fixed const &original) {
	// std::cout << "Copy constructor called" << std::endl;
	*this = original;
}

Fixed &Fixed::operator=(Fixed const &num) {
	// std::cout << "Copy assignment operator called" << std::endl;
	this->m_fixedPoint = num.getRawBits();
	return *this;
}

// Addition Overload Operators
Fixed Fixed::operator+(Fixed const &num) {
	Fixed sum = this->toFloat() + num.toFloat();
	return sum;
}

// Subtraction Overload Operators
Fixed Fixed::operator-(Fixed const &num) {
	Fixed difference = this->toFloat() - num.toFloat();
	return difference;
}

// Multiplication Overload Operators
Fixed Fixed::operator*(Fixed const &num) {
	Fixed product = this->toFloat() * num.toFloat();
	return product;
}

// Division Overload Operators
Fixed Fixed::operator/(Fixed const &num) {
	Fixed quotient = this->toFloat() / num.toFloat();
	return quotient;
}

// Pre-Increment Overload Operator
Fixed &Fixed::operator++() {
	this->m_fixedPoint++;
	return *this;
}

// Post-Increment Overload Operator
Fixed Fixed::operator++(int) {
	Fixed postIncrement = *this;
	this->m_fixedPoint++;
	return postIncrement;
}

// Pre-Decrement Overload Operator
Fixed &Fixed::operator--() {
	this->m_fixedPoint--;
	return *this;
}

// Post-Decrement Overload Operator
Fixed Fixed::operator--(int) {
	Fixed postDecrement = *this;
	this->m_fixedPoint--;
	return postDecrement;
}

Fixed::~Fixed() {
	// std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(int const a_integer) {
	// std::cout << "Int constructor called" << std::endl;
	this->m_fixedPoint = a_integer << this->m_fractionalBit;
}

Fixed::Fixed(float const a_float) {
	// std::cout << "Float constructor called" << std::endl;
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

Fixed &Fixed::min(Fixed &num1, Fixed &num2) {
	return (num1.toFloat() < num2.toFloat() ? num1 : num2);
}

Fixed const &Fixed::min(Fixed const &num1, Fixed const &num2) {
	return (num1.toFloat() < num2.toFloat() ? num1 : num2);
}

Fixed &Fixed::max(Fixed &num1, Fixed &num2) {
	return (num1.toFloat() > num2.toFloat() ? num1 : num2);
}

Fixed const &Fixed::max(Fixed const &num1, Fixed const &num2) {
	return (num1.toFloat() > num2.toFloat() ? num1 : num2);
}

std::ostream &operator<<(std::ostream &out, Fixed const &num) {
	out << num.toFloat();
	return out;
}
