/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 12:34:43 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/19 00:20:38 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include <climits>
#include <cstdlib>

/*------------------------------- COLOR CODES -------------------------------*/
#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[1;4;33m"
#define PURPLE		"\033[0;35m"
#define CYAN		"\033[0;36m"

/*-------------------------------- TEMPLATES --------------------------------*/
template <typename T>
class Array {
	private:
		unsigned int m_size;
		T *m_array;

	public:
		Array();
		Array(unsigned int n);
		Array(Array const &source);
		Array &operator=(Array const &data);
		T &operator[](unsigned int i);				// read + write
		T const &operator[](unsigned int i) const;	// read only
		~Array();

		unsigned int size();
		void printArray(bool randomize);
};

#include "Array.tpp"

#endif
