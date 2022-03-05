/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:49:46 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/06 01:11:59 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {
	Fixed	a;
	Fixed	b(a);
	Fixed	c;
	
	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

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
