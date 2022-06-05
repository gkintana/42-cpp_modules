/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 09:55:47 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/05 23:14:26 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
#define DOG_CON	"Dog Constructor"
#define DOG_CPY	"Dog Copy Constructor"
#define DOG_CAO	"Dog Copy Assignment Operator"
#define DOG_DEC	"Dog Deconstructor"
#define DOG_SND	"\"Woof\""
#define DOG		"Dog"

/*--------------------------------- LIBRARY ---------------------------------*/
#include "Animal.hpp"

/*---------------------------------- CLASS ----------------------------------*/
class Dog: public Animal {
	public:
		Dog();
		Dog(Dog const &source);
		~Dog();
		Dog &operator=(Dog const &data);
		void makeSound() const;
};

#endif
