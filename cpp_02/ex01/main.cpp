/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:49:46 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/31 14:10:29 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {
	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;

	return 0;
}

/*
	Fixed a;
		this->m_fixedPoint = 0;

	Fixed const b(10);
		this->m_fixedPoint = a_integer << this->m_fractionalBit;
		this->m_fixedPoint = 10 << 8;
							 0000 1010 << 8
							 1010 0000 0000
		this->m_fixedPoint = 2560

	Fixed const c(42.42f);
		this->m_fixedPoint = roundf(a_float * (1 << this->m_fractionalBit));
		this->m_fixedPoint = roundf(42.42 * (1 << 8));
											0000 0001 << 8
											0001 0000 0000 = 256
		this->m_fixedPoint = roundf(42.42 * 256);
		this->m_fixedPoint = roundf(10859.52);
		this->m_fixedPoint = 10860;

	Fixed const d(b);
		*this = original;
		this->m_fixedPoint = num.getRawBits();
		*this = 2560;

	a = Fixed(1234.4321f);
		this->m_fixedPoint = roundf(a_float * (1 << this->m_fractionalBit));
		this->m_fixedPoint = roundf(1234.4321 * 256);
		this->m_fixedPoint = roundf(316014.618);
		this->m_fixedPoint = 316015;



	std::cout << "a is " << a << std::endl;
		out << num.toFloat();
		return (roundf(this->m_fixedPoint) / (1 << this->m_fractionalBit));
		return (roundf(316015) / 256);
		return (316015 / 256);
		return 1234.43;

	std::cout << "b is " << b << std::endl;
		out << num.toFloat();
		return (roundf(this->m_fixedPoint) / (1 << this->m_fractionalBit));
		return (roundf(2560) / 256);
		return (2560 / 256);
		return 10;

	std::cout << "c is " << c << std::endl;
		out << num.toFloat();
		return (roundf(this->m_fixedPoint) / (1 << this->m_fractionalBit));
		return (roundf(10860) / 256);
		return (10860 / 256);
		return 42.4219;

	std::cout << "d is " << d << std::endl;
		out << num.toFloat();
		return (roundf(this->m_fixedPoint) / (1 << this->m_fractionalBit));
		return (roundf(2560) / 256);
		return (2560 / 256);
		return 10;



	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
		return (this->m_fixedPoint >> this->m_fractionalBit);
		return (316015 >> 8);
				0100 1101 0010 0110 1111 >> 8
				0000 0000 0100 1101 0010 = 1234
		return 1234;

	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
		return (this->m_fixedPoint >> this->m_fractionalBit);
		return (2560 >> 8);
				1010 0000 0000 >> 8
				0000 0000 1010 = 10
		return 10;

	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
		return (this->m_fixedPoint >> this->m_fractionalBit);
		return (10860 >> 8);
				0010 1010 0110 1100 >> 8
				0000 0000 0010 1010 = 42
		return 42;

	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
		return (this->m_fixedPoint >> this->m_fractionalBit);
		return (2560 >> 8);
				1010 0000 0000 >> 8
				0000 0000 1010 = 10
		return 10;
*/
