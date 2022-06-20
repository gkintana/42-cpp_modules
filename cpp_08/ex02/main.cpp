/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:07:46 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/20 21:57:42 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

void doSubjectTests();
void memberFunctionTests();
void mutantStackTests();
void containerTests();

int main () {
	std::cout << YELLOW "Subject Tests" DEFAULT << std::endl;
	doSubjectTests();
	std::cout << YELLOW "\nMember Function Tests" DEFAULT << std::endl;
	memberFunctionTests();
	std::cout << YELLOW "\nMutantStack Tests" DEFAULT << std::endl;
	mutantStackTests();
	std::cout << YELLOW "\nOutput from std::vector and std::list" DEFAULT << std::endl;
	containerTests();

	return 0;
}

void doSubjectTests() {
	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(42);
	mstack.push(24);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite) {
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
}

void pushToStack(std::stack<double> &stack) {
	for (size_t i = 0; i < 10; i++) {
		stack.push(12.3456 * i);
	}
}

void printStack(std::stack<double> stack) {
	for (size_t i = stack.size(); i > 0; i--) {
		std::cout << std::setprecision(3) << std::fixed 
				  << "  • " << stack.top() << std::endl;
		stack.pop();
	}
}

void memberFunctionTests() {
	MutantStack<double> a;
	pushToStack(a);
	std::stack<double> aCopy;
	aCopy = a;
	std::cout << CYAN "Contents of MutantStack A" DEFAULT << std::endl;
	printStack(aCopy);

	std::stack<double> b;
	pushToStack(b);
	std::stack<double> bCopy;
	bCopy = b;
	std::cout << CYAN "Contents of std::stack B" DEFAULT << std::endl;
	printStack(bCopy);

	std::cout << PURPLE "Top element in MutantStack = " << a.top()
			  << "\nTop element in std::stack<double> = " << b.top()
			  << "\nTotal elements in MutantStack = " << a.size()
			  << "\nTotal elements in std::stack<double> = " << b.size() << std::boolalpha
			  << "\nIs MutantStack empty? " << a.empty()
			  << "\nIs std::stack<double> empty? " << b.empty()
			  << DEFAULT << std::endl;
}

void printElement(double n) {
	std::cout << std::setprecision(3) << std::fixed << "  • " << n << std::endl;
}

void mutantStackTests() {
	MutantStack<double> a;
	pushToStack(a);
	std::cout << CYAN "Contents of MutantStack A" DEFAULT << std::endl;
	printStack(a);

	std::stack<double> b(a);
	std::cout << CYAN "Contents of std::stack<double> B" DEFAULT << std::endl;
	printStack(b);
}

void containerTests() {
	std::vector<double> a;
	pushToContainer(a);
	std::cout << CYAN "Contents of Vector<double> A (printed in reverse to replicate std::stack output)" DEFAULT << std::endl;
	std::for_each(a.rbegin(), a.rend(), printElement);

	std::list<double> b;
	pushToContainer(b);
	std::cout << CYAN "Contents of List<double> B (printed in reverse to replicate std::stack output)" DEFAULT << std::endl;
	std::for_each(a.rbegin(), a.rend(), printElement);
}
