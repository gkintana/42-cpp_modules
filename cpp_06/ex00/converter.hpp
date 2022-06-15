/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 21:48:14 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/16 01:24:35 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERTER_HPP
#define CONVERTER_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <sstream>

#include <climits>
// #include <string>
// #include <iomanip>

/*------------------------------- COLOR CODES -------------------------------*/
#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[0;33m"
#define PURPLE		"\033[0;35m"
#define CYAN		"\033[0;36m"

/*---------------------------------- CLASS ----------------------------------*/
class Converter {
	private:
		std::string m_literal;
		char m_char;
		int m_int;
		float m_float;
		double m_double;
		// bool hasPrecision;

		bool isChar();
		bool isInt();
		bool isFloat();
		bool isDouble();

		void implicitChar();
		void implicitInt();
		void implicitFloat();
		void implicitDouble();
		void error();

		void printPseudoLiteral();
		
	public:
		Converter();
		Converter(Converter const &source);
		Converter &operator=(Converter const &data);
		~Converter();

		void setLiteral(std::string literal);
		void convert();
};

#endif
