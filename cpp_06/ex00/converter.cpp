/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 21:48:17 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/18 11:49:38 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

Converter::Converter() {
	this->m_char = 0;
	this->m_int = 0;
	this->m_float = 0;
	this->m_double = 0;
}

Converter::Converter(Converter const &source) {
	*this = source;
}

Converter &Converter::operator=(Converter const &data) {
	if (this != &data) {
		this->m_literal = data.m_literal;
		this->m_char = data.m_char;
		this->m_int = data.m_int;
		this->m_float = data.m_float;
		this->m_double = data.m_double;
	}
	return *this;	
}

Converter::~Converter() {}

void Converter::setLiteral(std::string literal) {
	this->m_literal = literal;
}

void Converter::convert() {
	isChar() ? implicitChar() : \
	isInt() ? implicitInt() : \
	isFloat() ? implicitFloat() : \
	isDouble() ? implicitDouble() : \
	error();
}

bool Converter::isChar() {
	return std::isprint(this->m_literal[0]) && !std::isdigit(this->m_literal[0]) && this->m_literal.length() == 1 ? true : false;
}

bool Converter::isInt() {
	long temp = std::atol(this->m_literal.c_str());
	if (temp < INT_MIN || temp > INT_MAX) {
		return false;
	}

	bool sign = (this->m_literal[0] == '-' || this->m_literal[0] == '+') ? true : false;
	for (std::string::size_type i = sign == true ? 1 : 0; this->m_literal[i]; i++) {
		if (!std::isdigit(this->m_literal[i])) {
			return false;
		}
	}
	return true;
}

// https://stackoverflow.com/questions/447206/c-isfloat-function
bool Converter::isFloat() {
	if (!this->m_literal.compare("-inff") || !this->m_literal.compare("+inff") ||
		!this->m_literal.compare("nanf")) {
		return true;
	}

	int decimal = 0;
	bool sign = (this->m_literal[0] == '-' || this->m_literal[0] == '+') ? true : false;
	for (std::string::size_type i = sign == true ? 1 : 0; this->m_literal[i]; i++) {
		if (this->m_literal[i] == '.') {
			decimal++;
		} else if (!std::isdigit(this->m_literal[i]) && i != this->m_literal.length() - 1) {
			return false;
		}
	}
	return F_CHECK ? true : false;
}

bool Converter::isDouble() {
	if (!this->m_literal.compare("-inf") || !this->m_literal.compare("+inf") ||
		!this->m_literal.compare("nan")) {
		return true;
	}

	int decimal = 0;
	bool sign = (this->m_literal[0] == '-' || this->m_literal[0] == '+') ? true : false;
	for (std::string::size_type i = sign == true ? 1 : 0; this->m_literal[i]; i++) {
		if (this->m_literal[i] == '.') {
			decimal++;
		} else if (!std::isdigit(this->m_literal[i])) {
			return false;
		}
	}
	return D_CHECK ? true : false;
}

// https://www.freecodecamp.org/news/string-to-int-in-c-how-to-convert-a-string-to-an-integer-example/#:~:text=One%20effective%20way%20to%20convert,the%20integer%20version%20of%20it.
void Converter::implicitChar() {
	std::stringstream c;
	c << this->m_literal;
	c >> this->m_char;

	this->m_int = static_cast<int>(this->m_char);
	this->m_float = static_cast<float>(this->m_char);
	this->m_double = static_cast<double>(this->m_char);
	printAll(true);
}

void Converter::implicitInt() {
	std::stringstream i;
	i << this->m_literal;
	i >> this->m_int;

	this->m_char = static_cast<char>(this->m_int);
	this->m_float = static_cast<float>(this->m_int);
	this->m_double = static_cast<double>(this->m_int);
	printAll(true);
}

void Converter::implicitFloat() {
	if (isPseudoLiteral("nanf", "-inff", "+inff")) {
		return printPseudoLiteral();
	}

	this->m_float = std::atof(this->m_literal.c_str());
	this->m_char = static_cast<char>(this->m_float);
	this->m_int = static_cast<int>(this->m_float);
	this->m_double = static_cast<double>(this->m_float);

	!(this->m_float - static_cast<float>(this->m_int)) ? printAll(true) : printAll(false);
}

void Converter::implicitDouble() {
	if (isPseudoLiteral("nan", "-inf", "+inf")) {
		return printPseudoLiteral();
	}

	this->m_double = std::atof(this->m_literal.c_str());
	this->m_char = static_cast<char>(this->m_double);
	this->m_int = static_cast<int>(this->m_double);
	this->m_float = static_cast<float>(this->m_double);

	!(this->m_double - static_cast<double>(this->m_int)) ? printAll(true) : printAll(false);
}

void Converter::error() {
	std::cerr << RED "Invalid Literal" DEFAULT << std::endl;
}

bool Converter::isPseudoLiteral(std::string nan, std::string nInf, std::string pInf) {
	return !this->m_literal.compare(nan) ? true : \
		   !this->m_literal.compare(nInf) ? true : \
		   !this->m_literal.compare(pInf) ? true : false;
}

void Converter::printPseudoLiteral() {
	this->m_float = static_cast<float>(std::atof(this->m_literal.c_str()));
	this->m_double = static_cast<double>(std::atof(this->m_literal.c_str()));

	std::cout << CYAN "char: " DEFAULT << "impossible" << std::endl
			  << CYAN "int: " DEFAULT << "impossible" << std::endl
			  << CYAN "float: " DEFAULT << this->m_float << "f" << std::endl
			  << CYAN "double: " DEFAULT << this->m_double << std::endl;
}

void Converter::printAll(bool addZero) {
	std::cout << CYAN "char: " DEFAULT;
	if (!(this->m_int >= 0 && this->m_int <= 177)) {
		std::cout << "impossible" << std::endl;
	} else if (!std::isprint(this->m_char)) {
		std::cout << "non displayable" << std::endl;
	} else {
		std::cout << this->m_char << std::endl;
	}
	
	std::cout << CYAN "int: " DEFAULT;
	long temp = static_cast<long>(this->m_double);
	if (temp < INT_MIN || temp > INT_MAX) {
		std::cout << "impossible" << std::endl;
	} else {
		std::cout << this->m_int << std::endl;
	}
	
	std::cout << CYAN "float: " DEFAULT << this->m_float << (addZero ? ".0f" : "f") << std::endl
			  << CYAN "double: " DEFAULT << this->m_double << (addZero ? ".0" : "") << std::endl;
}
