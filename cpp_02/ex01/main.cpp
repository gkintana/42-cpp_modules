/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:49:46 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/06 02:22:57 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {
	Fixed		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const	d(b);
	
	a = Fixed(1234.4321f);

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	
	return (0);
}

/*
 *	Fixed	a;
 *		Default constructor called
 *	Fixed	b(a);
 *		Copy constructor called
 *		Copy assignment operator called		-> *this = original
 *		getRawBits member function called	-> this->m_fixedPoint = value.getRawBits()
 *	Fixed	c;
 *		Default constructor called
 *
 *	c = b;		 
 *		Copy assignment operator called
 *		getRawBits member function called
 *
 *	std::cout << a.getRawBits() << std::endl;
 *		getRawBits member function called
 *		0
 *	std::cout << b.getRawBits() << std::endl;
 *		getRawBits member function called
 *		0
 *	std::cout << c.getRawBits() << std::endl;
 *		getRawBits member function called
 *		0
 *
 * 	return (0);
 * 		Destructor called	(Fixed	c)
 * 		Destructor called	(Fixed	b(a))
 * 		Destructor called	(Fixed	a)
 */
