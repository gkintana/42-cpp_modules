/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:42:56 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/20 02:20:47 by gkintana         ###   ########.fr       */
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
		throw std::length_error("Vector has reached the maximum storage limit");
	}
}

int Span::shortestSpan() {
	if (this->m_vector.size() < 2) {
		throw std::logic_error("Unable to compute shortest span from a vector with a size less than 2");
	}

	int min = *std::max_element(this->m_vector.begin(), this->m_vector.end());
	for (size_t i = 0; i < this->m_vector.size(); i++) {
		for (size_t j = i + 1; j < this->m_vector.size(); j++) {
			int diff = std::abs(this->m_vector.at(i) - this->m_vector.at(j));
			if (diff < min) {
				min = diff;
			}
		}
	}
	return min;
}

int Span::longestSpan() {
	if (this->m_vector.size() < 2) {
		throw std::logic_error("Unable to compute longest span from a vector with a size less than 2");
	}

	std::vector<int>::iterator min = std::min_element(this->m_vector.begin(), this->m_vector.end());
	std::vector<int>::iterator max = std::max_element(this->m_vector.begin(), this->m_vector.end());
	return *max - *min;
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
	return rand() % 10240;
}

void printElement(int n) {
	std::cout << "  • " << n << std::endl;
}
