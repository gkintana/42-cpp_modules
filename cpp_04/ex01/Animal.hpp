/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:46:57 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/06 23:55:32 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

/*------------------------------- COLOR CODES -------------------------------*/
#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[1;33m"
#define PURPLE		"\033[0;35m"
#define CYAN		"\033[0;36m"

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>

/*---------------------------------- CLASS ----------------------------------*/
class Animal {
	protected:
		std::string m_type;
	public:
		Animal();
		Animal(Animal const &source);
		Animal &operator=(Animal const &data);
		virtual ~Animal();
		std::string getType() const;
		virtual void makeSound() const;
};

#endif
