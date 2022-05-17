/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:20:58 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/17 21:30:06 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
#define CAT_CON	"Cat Constructor"
#define CAT_CPY	"Cat Copy Constructor"
#define CAT_CAO	"Cat Copy Assignment Operator"
#define CAT_DEC	"Cat Deconstructor"
#define CAT_SND	"\"Meow\""
#define CAT		"Cat"

/*--------------------------------- LIBRARY ---------------------------------*/
#include "Animal.hpp"

/*---------------------------------- CLASS ----------------------------------*/
class Cat: public Animal {
	public:
		Cat(void);
		Cat(Cat const &source);
		~Cat(void);
		Cat &operator=(Cat const &data);
		void makeSound(void) const;
};

#endif
