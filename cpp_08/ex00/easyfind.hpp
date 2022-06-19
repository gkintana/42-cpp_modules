/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 13:30:08 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/19 21:36:43 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>
#include <algorithm>
#include <vector>

/*------------------------------- COLOR CODES -------------------------------*/
#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[1;4;33m"
#define PURPLE		"\033[0;35m"
#define CYAN		"\033[0;36m"

/*-------------------------------- TEMPLATES --------------------------------*/
template <typename T>
typename T::difference_type easyfind(T container, int n) {
	typename T::iterator iter = std::find(container.begin(), container.end(), n);
	if (iter != container.end()) {
		return std::distance(container.begin(), iter);
	} else {
		throw std::out_of_range(RED "\b[Element doesn't exist in the container]" DEFAULT);
	}
}

template <typename T>
void printResult(T container, int n) {
	std::cout << CYAN << n << "'s first occurrence is at iter["
			  << easyfind(container, n) << "]"
			  << DEFAULT << std::endl;
}

#endif
