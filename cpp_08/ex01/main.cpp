/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:42:54 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/20 00:53:29 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void doSubjectTests() {
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.printVector();

	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
}

int main() {

	std::cout << YELLOW "Subject Tests" DEFAULT << std::endl;
	doSubjectTests();
	Span sp = Span(5);

	std::cout << sp.checkSize() << std::endl;

	sp.fillSpan();
	sp.printVector();

	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;

	// try {
	// 	sp.addNumber(22);
	// }
	// catch (std::exception &e) {
	// 	std::cout << e.what() << std::endl;
	// }
	
	std::cout << sp.checkSize() << std::endl;

	return 0;
}
