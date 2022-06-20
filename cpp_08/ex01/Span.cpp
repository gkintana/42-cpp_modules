/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:42:56 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/20 14:03:25 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() : m_max(0) {}

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
		throw std::length_error(RED "Vector has reached the maximum storage limit" DEFAULT);
	}
}

int Span::shortestSpan() {
	if (this->m_vector.size() < 2) {
		throw std::logic_error(RED "Unable to compute span. Vector size is less than 2" DEFAULT);
	}

	int min = *std::max_element(this->m_vector.begin(), this->m_vector.end());
	for (size_t i = 0; i < this->m_vector.size() - 1; i++) {
		int diff = std::abs(this->m_vector.at(i) - this->m_vector.at(i + 1));
		if (diff < min) {
			min = diff;
		}
	}
	return min;
}

int Span::longestSpan() {
	if (this->m_vector.size() < 2) {
		throw std::logic_error(RED "Unable to compute span. Vector size is less than 2" DEFAULT);
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

size_t Span::getSize() {
	return this->m_vector.size();
}

int randomNumber() {
	return rand() % 10240;
}

void printElement(int n) {
	std::cout << "    • " << n << std::endl;
}
