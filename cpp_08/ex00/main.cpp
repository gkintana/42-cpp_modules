/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 13:30:10 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/20 22:10:16 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int randomInt();
void printElement(int n);

int main() {
	std::cout << YELLOW "Vector<int> A" DEFAULT << std::endl;
	std::vector<int> a(5);

	srand(time(NULL));
	std::generate(a.begin(), a.end(), randomInt);
	std::for_each(a.begin(), a.end(), printElement);

	try {
		printResult(a, a[0]);
		printResult(a, a[2]);
		printResult(a, 1024);
		printResult(a, -1);
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}

void printElement(int n) {
	std::cout << "  • " << n << std::endl;
}

int randomInt() {
	return rand() % 512;
}
