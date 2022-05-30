/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:55:19 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/30 07:54:22 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
#define DEF_CONS	"Default constructor called"
#define COPY_CONS	"Copy constructor called"
#define COPY_OPER	"Copy assignment operator called"
#define DESTRUCT	"Destructor called"
#define FN_GRB		"getRawBits member function called"

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>

/*---------------------------------- CLASS ----------------------------------*/
class	Fixed {
	private:
		int m_fixedPoint;
		static const int m_fractionalBit = 8;
	public:
		Fixed();
		Fixed(Fixed const &original);
		~Fixed();
		Fixed &operator=(Fixed const &num);
		int getRawBits() const;
		void setRawBits(int const integer);
};

#endif
