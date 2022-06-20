/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 21:42:54 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/20 22:44:25 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

void doSubjectTests();
void constructionTests();
void addNumberTests();
void shortestSpanTests();
void longestSpanTests();
void largeSpanTests();

int main() {
	srand(time(NULL));
	std::cout << YELLOW "Subject Tests" DEFAULT << std::endl;
	doSubjectTests();
	std::cout << YELLOW "\nConstruction Tests" DEFAULT << std::endl;
	constructionTests();
	std::cout << YELLOW "\nSpan::addNumber() & Span::fillSpan() Tests" DEFAULT << std::endl;
	addNumberTests();
	std::cout << YELLOW "\nSpan::shortestSpan() Tests" DEFAULT << std::endl;
	shortestSpanTests();
	std::cout << YELLOW "\nSpan::longestSpan() Tests" DEFAULT << std::endl;
	longestSpanTests();
	std::cout << YELLOW "\nLarge Span Tests" DEFAULT << std::endl;
	largeSpanTests();

	return 0;
}

void doSubjectTests() {
	Span sp = Span(5);

	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void constructionTests() {
	Span a(5);
	a.fillSpan();
	std::cout << CYAN "  Contents of Vector<int> A" DEFAULT << std::endl;
	a.printVector();

	Span b(a);
	std::cout << CYAN "  Contents of Vector<int> B" DEFAULT << std::endl;
	b.printVector();

	Span c(6);
	c.addNumber(1);
	c.addNumber(2);
	c.addNumber(3);
	std::cout << CYAN "  Contents of Vector<int> C" DEFAULT << std::endl;
	c.printVector();

	Span d;
	d = c;
	std::cout << CYAN "  Contents of Vector<int> D" DEFAULT << std::endl;
	d.addNumber(4);
	d.addNumber(5);
	d.addNumber(6);
	d.printVector();

	std::cout << CYAN "  Contents of Vector<int> C" DEFAULT << std::endl;
	c.printVector();
}

void addNumberTests() {
	Span a(5);
	try {
		a.addNumber(42);
		a.addNumber(43);
		a.addNumber(44);
		std::cout << "Vector A size = " << a.getSize() << std::endl;

		a.addNumber(45);
		a.addNumber(46);
		std::cout << "Vector A size = " << a.getSize() << std::endl;

		a.addNumber(47);
		std::cout << "Vector A size = " << a.getSize() << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << CYAN "Contents of Vector A" DEFAULT << std::endl;
	a.printVector();

	Span b(10);
	try {
		b.fillSpan();
		std::cout << "\nVector B size = " << b.getSize() << std::endl;
		b.addNumber(42);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << CYAN "Contents of Vector B" DEFAULT << std::endl;
	b.printVector();
}

void shortestSpanTests() {
	Span a(5);
	a.addNumber(12);
	a.addNumber(1);
	a.addNumber(24);
	a.addNumber(0);
	a.addNumber(5);
	std::cout << CYAN "Contents of Vector A" DEFAULT << std::endl;
	a.printVector();
	std::cout << PURPLE "Shortest Span = " << a.shortestSpan() << DEFAULT << std::endl;

	Span b(5);
	b.fillSpan();
	std::cout << CYAN "Contents of Vector B" DEFAULT << std::endl;
	b.printVector();
	std::cout << PURPLE "Shortest Span = " << b.shortestSpan() << DEFAULT << std::endl;
}

void longestSpanTests() {
	Span a(5);
	a.addNumber(0);
	a.addNumber(25);
	a.addNumber(50);
	a.addNumber(10);
	a.addNumber(42);
	std::cout << CYAN "Contents of Vector A" DEFAULT << std::endl;
	a.printVector();
	std::cout << PURPLE "Longest Span = " << a.longestSpan() << DEFAULT << std::endl;

	Span b(5);
	b.fillSpan();
	std::cout << CYAN "\nContents of Vector B" DEFAULT << std::endl;
	b.printVector();
	std::cout << PURPLE "Longest Span = " << b.longestSpan() << DEFAULT << std::endl;
}

void largeSpanTests() {
	Span a(100000);
	std::cout << PURPLE "Elements inside Vector<int> A = " << a.getSize() << DEFAULT << std::endl;
	a.fillSpan();
	std::cout << PURPLE "Elements inside Vector<int> A = " << a.getSize() << DEFAULT << std::endl;
}
