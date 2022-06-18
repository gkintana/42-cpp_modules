/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 12:34:43 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/18 17:08:34 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include <climits>

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
		T *m_array;
		unsigned int m_size;

	public:
		Array();
		Array(unsigned int n);
		Array(Array const &source);
		Array &operator=(Array const &data);
		Array &operator[](Array const &data);				// write
		Array const &operator[](Array const &data) const;	// read
		~Array();

		unsigned int size();
};

#include "Array.tpp"

#endif
