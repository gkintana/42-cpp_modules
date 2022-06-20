/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:47:53 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/20 23:41:46 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>

/*------------------------------- COLOR CODES -------------------------------*/
#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[1;4;33m"
#define PURPLE		"\033[0;35m"
#define CYAN		"\033[0;36m"

/*-------------------------------- TEMPLATES --------------------------------*/
template <typename T>
void iter(T *array, size_t arrayLen, void (*funcPtr)(T const &)) {
	for (size_t i = 0; i < arrayLen; i++) {
		funcPtr(array[i]);
	}
}

template <typename T>
void printElements(T const &element) {
	std::cout << CYAN "\t• " << element << DEFAULT;
}

template <typename T>
void printIntValue(T const &element) {
	std::cout << CYAN "\t• " << static_cast<int>(element) << DEFAULT;
}

template <typename T>
void printAll(std::string arrayName, T &array) {
	std::cout << YELLOW << arrayName << DEFAULT << std::endl
			  << PURPLE "  ‣ Array Elements" DEFAULT << std::endl;
	iter(array, sizeof(array) / sizeof(array[0]), printElements);

	std::cout << PURPLE "\n  ‣ Elements Explicitly Cast to Int" DEFAULT << std::endl;
	iter(array, sizeof(array) / sizeof(array[0]), printIntValue);
	std::cout << std::endl;
}

#endif
