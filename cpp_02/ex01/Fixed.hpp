/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:55:19 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/30 08:20:00 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
#define DEF_CONS	"Default constructor called"
#define COPY_CONS	"Copy constructor called"
#define COPY_OPER	"Copy assignment operator called"
#define INT_CONS	"Int constructor called"
#define FLOAT_CONS	"Float constructor called"
#define DESTRUCT	"Destructor called"

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
		Fixed(Fixed const &original);
		Fixed(int const a_integer);
		Fixed(float const a_float);
		~Fixed();
		Fixed &operator=(Fixed const &num);
		float toFloat() const;
		int toInt() const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &num);

// https://stackoverflow.com/questions/3247285/const-int-int-const

#endif
