/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:26:52 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/15 19:15:04 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::~Base() {
	std::cout << RED "Base Destructor" DEFAULT << std::endl;
}

Base *generate() {
	std::srand(time(NULL));
	int n = std::rand() % 3;

	Base *ptr;
	!n ? ptr = new A : n == 1 ? ptr = new B : ptr = new C;
	return ptr;
}

void identify(Base *p) {
	dynamic_cast<A*>(p) ? PRINT_A : dynamic_cast<B*>(p) ? PRINT_B : PRINT_C;
}

void identify(Base &p) {
	try {
		dynamic_cast<A&>(p);
		PRINT_A;
	}
	catch (std::exception &e) {
		try {
			dynamic_cast<B&>(p);
			PRINT_B;
		}
		catch (std::exception &e) {
			PRINT_C;
		}
	}
}
