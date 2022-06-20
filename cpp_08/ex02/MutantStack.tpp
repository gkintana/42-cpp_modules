/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:24:05 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/20 21:58:22 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
#define MUTANTSTACK_TPP

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(MutantStack const &source) {
	*this = source;
}

template <typename T>
MutantStack<T> &MutantStack<T>::operator=(MutantStack const &data) {
	if (this != &data) {
		this->c = data.c;
	}
	return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin() {
	return this->c.begin();
}

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end() {
	return this->c.end();
}

template <typename T>
void pushToContainer(T &container) {
	for (size_t i = 0; i < 10; i++) {
		container.push_back(12.3456 * i);
	}
}

#endif
