/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 13:30:10 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/19 21:58:16 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

// https://www.techiedelight.com/print-contents-array-cpp/
void printElement(int n) {
	std::cout << "  • " << n << std::endl;
}

int randomInt() {
	return rand() % 512;
}

int main() {
	srand(time(NULL));
	std::cout << YELLOW "Vector<int> A" DEFAULT << std::endl;
	std::vector<int> a(5);

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
