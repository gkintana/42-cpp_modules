/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:02:35 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/31 21:41:59 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() {
	this->m_fixedPoint = 0;
}

Fixed::~Fixed() {}

Fixed::Fixed(Fixed const &original) {
	*this = original;
}

Fixed &Fixed::operator=(Fixed const &num) {
	this->m_fixedPoint = num.getRawBits();
	return *this;
}

bool Fixed::operator>(Fixed const &num) {
	return (this->toFloat() > num.toFloat());
}

bool Fixed::operator<(Fixed const &num) {
	return (this->toFloat() < num.toFloat());
}

bool Fixed::operator>=(Fixed const &num) {
	return (this->toFloat() >= num.toFloat());
}

bool Fixed::operator<=(Fixed const &num) {
	return (this->toFloat() <= num.toFloat());
}

bool Fixed::operator==(Fixed const &num) {
	return (this->toFloat() == num.toFloat());
}

bool Fixed::operator!=(Fixed const &num) {
	return (this->toFloat() != num.toFloat());
}

Fixed Fixed::operator+(Fixed const &num) {
	Fixed sum = this->toFloat() + num.toFloat();
	return sum;
}

Fixed Fixed::operator-(Fixed const &num) {
	Fixed difference = this->toFloat() - num.toFloat();
	return difference;
}

Fixed Fixed::operator*(Fixed const &num) {
	Fixed product = this->toFloat() * num.toFloat();
	return product;
}

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

Fixed::Fixed(int const a_integer) {
	this->m_fixedPoint = a_integer << this->m_fractionalBit;
}

Fixed::Fixed(float const a_float) {
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
