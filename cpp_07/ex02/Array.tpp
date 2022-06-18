/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 12:34:46 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/18 17:06:16 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

template <typename T>
Array<T>::Array() {
	std::cout << GREEN "Array Default Constructor" DEFAULT << std::endl;
	this->m_size = 0;
	this->m_array = 0;
}

template <typename T>
Array<T>::Array(unsigned int n) {
	std::cout << GREEN "Array Constructor" DEFAULT << std::endl;
	try {
		if (n < INT_MAX) {
			this->m_size = n;
		} else {
			throw std::bad_alloc();
		}
		this->m_array = new T[this->m_size];
	}
	catch (std::bad_alloc &e) {
		std::cerr << RED "Caught an exception <" << e.what() << ">" DEFAULT << std::endl;
		this->m_array = 0;
		this->m_size = 0;
	}
}

template <typename T>
Array<T>::Array(Array const &source) {
	std::cout << GREEN "Array Copy Constructor" DEFAULT << std::endl;
	*this = source;
}

template <typename T>
Array<T> &Array<T>::operator=(Array const &data) {
	std::cout << GREEN "Array Copy Assignment Operator" DEFAULT << std::endl;
	if (this != &data) {
		this->m_size = data.m_size;
		this->m_array = new T[this->m_size];
	}
	return *this;
}

template <typename T>
Array<T> &Array<T>::operator[](Array const &data) {
	std::cout << "Array Overload [] Operator" << std::endl;
	(void)data;
	
}

template <typename T>
Array<T> const &Array<T>::operator[](Array const &data) const{
	std::cout << "Array Overload [] Operator" << std::endl;
	(void)data;
	
}

template <typename T>
Array<T>::~Array() {
	std::cout << PURPLE "Array Destructor" DEFAULT << std::endl;
	delete[] this->m_array;
}

template <typename T>
unsigned int Array<T>::size() {
	return this->m_size;
}

#endif
