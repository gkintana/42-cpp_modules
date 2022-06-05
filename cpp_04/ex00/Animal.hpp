/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:46:57 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/05 23:13:38 by gkintana         ###   ########.fr       */
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

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
#define ANIMAL_CON	"Animal Constructor"
#define ANIMAL_CPY	"Animal Copy Constructor"
#define ANIMAL_CAO	"Animal Copy Assignment Operator"
#define ANIMAL_DEC	"Animal Deconstructor"
#define ANIMAL_SND	"\"Rawr\""
#define ANIMAL		"Tiger"

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>

/*---------------------------------- CLASS ----------------------------------*/
class Animal {
	protected:
		std::string m_type;
	public:
		Animal();
		Animal(Animal const &source);
		virtual ~Animal();
		Animal &operator=(Animal const &data);
		std::string getType() const;
		virtual void makeSound() const;
};

#endif
