/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:55:19 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/06 19:47:11 by gkintana         ###   ########.fr       */
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
class	Fixed {
	private:
		int					m_fixedPoint;
		static const int	m_fractionalBit = 8;
	public:
		Fixed(void);
		Fixed(Fixed const &original);
		Fixed(int const a_integer);
		Fixed(float const a_float);
		~Fixed(void);
		Fixed	&operator=(Fixed const &num);
		int		getRawBits(void) const;
		// void	setRawBits(int const a_integer);
		// void	setRawBits(float const a_float);
		float	toFloat(void) const;
		int		toInt(void) const;
};

std::ostream	&operator<<(std::ostream &out, Fixed const &num);

// https://stackoverflow.com/questions/3247285/const-int-int-const

#endif
