/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:42:58 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/20 01:31:48 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

/*------------------------------- COLOR CODES -------------------------------*/
#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[1;4;33m"
#define PURPLE		"\033[0;35m"
#define CYAN		"\033[0;36m"

/*---------------------------------- CLASSS ---------------------------------*/
class Span {
	private:
		std::vector<int> m_vector;
		unsigned int m_max;

	public:
		Span();
		Span(unsigned int max);
		Span(Span const &source);
		Span &operator=(Span const &source);
		~Span();

		void addNumber(int n);
		int shortestSpan();
		int longestSpan();
		void fillSpan();

		void printVector();
		size_t checkSize();
};

void printElement(int n);
int randomNumber();

#endif
