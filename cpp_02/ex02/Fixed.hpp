/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:55:19 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/31 19:38:00 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

/*-------------------------------- LIBRARIES --------------------------------*/
#include <iostream>
#include <cmath>

/*---------------------------------- CLASS ----------------------------------*/
class Fixed {
	private:
		int m_fixedPoint;
		static const int m_fractionalBit = 8;
		int getRawBits() const;
	public:
		Fixed();
		~Fixed();
		
		Fixed(Fixed const &original);
		Fixed &operator=(Fixed const &num);
		
		Fixed(int const a_integer);
		Fixed(float const a_float);
		float toFloat() const;
		int toInt() const;
		
		// Comparison Overload Operators
		
		
		// Arithmetic Overload Operators
		Fixed operator+(Fixed const &num);
		Fixed operator-(Fixed const &num);
		Fixed operator*(Fixed const &num);
		Fixed operator/(Fixed const &num);
		
		// Increment & Decrement Overload Operators
		Fixed &operator++();
		Fixed operator++(int);
		Fixed &operator--();
		Fixed operator--(int);

		// Min-Max Overload Member Functions
		static Fixed &min(Fixed &num1, Fixed &num2);
		static const Fixed &min(Fixed const &num1, Fixed const &num2);
		static Fixed &max(Fixed &num1, Fixed &num2);
		static const Fixed &max(Fixed const &num1, Fixed const &num2);
		
};

std::ostream &operator<<(std::ostream &out, Fixed const &num);
// https://docs.microsoft.com/en-us/cpp/cpp/increment-and-decrement-operator-overloading-cpp?view=msvc-170

#endif
