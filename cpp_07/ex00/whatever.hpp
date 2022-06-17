/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 01:03:55 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/17 18:03:59 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>

/*-------------------------------- TEMPLATES --------------------------------*/
template <typename T>
void swap(T &a, T &b) {
	T temp = a;
	a = b;
	b = temp;
}

template <typename T> 
T min(T a, T b) {
	return a < b ? a : b;
}

template <typename T> 
T max(T a, T b) {
	return a > b ? a : b;
}

#endif
