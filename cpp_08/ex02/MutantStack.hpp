/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/20 14:10:53 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/20 21:53:16 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>
#include <iomanip>
#include <algorithm>
#include <stack>
#include <vector>
#include <list>

/*------------------------------- COLOR CODES -------------------------------*/
#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[1;4;33m"
#define PURPLE		"\033[0;35m"
#define CYAN		"\033[0;36m"

/*-------------------------------- TEMPLATES --------------------------------*/
template <typename T>
class MutantStack : public std::stack<T> {
	public:
		MutantStack();
		MutantStack(MutantStack const &source);
		MutantStack &operator=(MutantStack const &data);
		~MutantStack();

		typedef typename std::stack<T>::container_type::iterator iterator;
		iterator begin();
		iterator end();
};

template <typename T>
void pushToContainer(T &container);

#include "MutantStack.tpp"

#endif
