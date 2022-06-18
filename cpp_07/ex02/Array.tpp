/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/18 12:34:46 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/19 00:20:24 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
#define ARRAY_TPP

// https://stackoverflow.com/questions/3102353/what-happens-if-i-initialize-an-array-to-size-0
template <typename T>
Array<T>::Array() : m_size(0),
					m_array(0) {
	std::cout << GREEN "Array Default Constructor" DEFAULT << std::endl;
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
		std::cerr << RED "Caught an exception: " << e.what() << DEFAULT << std::endl;
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

		for (unsigned int i = 0; i < this->m_size; i++) {
			this->m_array[i] = data.m_array[i];
		}
	}
	return *this;
}

// https://en.cppreference.com/w/cpp/language/operators
template <typename T>
T &Array<T>::operator[](unsigned int i) {
	if (i < 0 || i >= this->m_size) {
		throw std::out_of_range(RED "Index is out of range" DEFAULT);
	}
	return this->m_array[i];
}

template <typename T>
T const &Array<T>::operator[](unsigned int i) const {
	if (i < 0 || i >= this->m_size) {
		throw std::out_of_range(RED "Index is out of range" DEFAULT);
	}
	return this->m_array[i];
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

template <typename T>
void Array<T>::printArray(bool randomize) {
	try {
		std::cout << CYAN "Array Size: " DEFAULT << this->m_size
				<< CYAN "\nArray Contents: " DEFAULT << std::endl;
		if (this->m_size) {
			for (unsigned int i = 0; i < this->m_size; i++) {
				std::cout << "  • " 
						  << (randomize ? (this->m_array[i] = rand() % 1998) : this->m_array[i])
						  << (i == this->m_size - 1 ? "\n" : "");
			}
		} else {
			throw std::out_of_range(RED "  Unable to print array elements\n" DEFAULT);
		}
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}

#endif
