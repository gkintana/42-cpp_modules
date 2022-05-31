/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:55:19 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/31 12:05:39 by gkintana         ###   ########.fr       */
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
		Fixed(Fixed const &original);
		Fixed &operator=(Fixed const &num);
		Fixed(int const a_integer);
		Fixed(float const a_float);
		~Fixed();
		float toFloat() const;
		int toInt() const;
};

std::ostream &operator<<(std::ostream &out, Fixed const &num);

// https://stackoverflow.com/questions/3247285/const-int-int-const

#endif
