/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:42:56 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/20 00:37:12 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::Span(unsigned int max) {
	this->m_max = max;
}

Span::Span(Span const &source) {
	*this = source;
}

Span &Span::operator=(Span const &data) {
	if (this != &data) {
		this->m_vector = data.m_vector;
		this->m_max = data.m_max;
	}
	return *this;
}

Span::~Span() {}

void Span::addNumber(int n) {
	if (this->m_vector.size() < this->m_max) {
		this->m_vector.push_back(n);
	} else {
		throw std::out_of_range("Vector has reached the maximum storage limit");
	}
}

void Span::fillSpan() {
	this->m_vector.resize(this->m_max, 0);
	std::generate(this->m_vector.begin(), this->m_vector.end(), randomNumber);
}

void Span::printVector() {
	std::for_each(this->m_vector.begin(), this->m_vector.end(), printElement);
}

size_t Span::checkSize() {
	return this->m_vector.size();
}

int randomNumber() {
	return rand() % 100000;
}

void printElement(int n) {
	std::cout << "  • " << n << std::endl;
}
