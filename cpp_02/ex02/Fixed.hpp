/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:55:19 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/31 21:43:48 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

/*------------------------------- COLOR CODES -------------------------------*/
#define DEFAULT		"\033[0m"
#define GREEN		"\033[1;32m"
#define YELLOW		"\033[1;33m"
#define CYAN		"\033[0;36m"

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
		bool operator>(Fixed const &num);
		bool operator<(Fixed const &num);
		bool operator>=(Fixed const &num);
		bool operator<=(Fixed const &num);
		bool operator==(Fixed const &num);
		bool operator!=(Fixed const &num);

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
		static Fixed const &min(Fixed const &num1, Fixed const &num2);
		static Fixed &max(Fixed &num1, Fixed &num2);
		static Fixed const &max(Fixed const &num1, Fixed const &num2);
};

std::ostream &operator<<(std::ostream &out, Fixed const &num);
// https://docs.microsoft.com/en-us/cpp/cpp/increment-and-decrement-operator-overloading-cpp?view=msvc-170

#endif
