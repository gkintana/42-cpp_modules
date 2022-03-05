/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 21:55:19 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/06 01:17:39 by gkintana         ###   ########.fr       */
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
		int					m_fixedPoint;
		static const int	m_fracBit = 8;
	public:
		Fixed(void);
		Fixed(const Fixed &original);
		Fixed &operator=(const Fixed &rhs);
		~Fixed(void);
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif
