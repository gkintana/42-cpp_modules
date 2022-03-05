/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 22:02:35 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/06 01:09:14 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://www.geeksforgeeks.org/constructors-c/
// https://www.geeksforgeeks.org/copy-constructor-in-cpp/
// https://www.geeksforgeeks.org/copy-constructor-vs-assignment-operator-in-c/
// https://www.geeksforgeeks.org/copy-constructor-argument-const/

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << DEF_CONS << std::endl;
	this->m_fixedPoint = 0;
}

Fixed::Fixed(const Fixed &original) {
	std::cout << COPY_CONS << std::endl;
	*this = original;
}

Fixed	&Fixed::operator=(const Fixed &value) {
	std::cout << COPY_OPER << std::endl;
	this->m_fixedPoint = value.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << DESTRUCT << std::endl;
}

int		Fixed::getRawBits(void) const {
	std::cout << FN_GRB << std::endl;
	return (this->m_fixedPoint);
}

void	Fixed::setRawBits(int const raw) {
	this->m_fixedPoint = raw;
};
