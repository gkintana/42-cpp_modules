/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:20:58 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/18 21:27:33 by gkintana         ###   ########.fr       */
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
#include "Brain.hpp"

/*---------------------------------- CLASS ----------------------------------*/
class Cat: public Animal {
	private:
		Brain *m_brain;
	public:
		Cat(void);
		Cat(Cat const &source);
		~Cat(void);
		Cat &operator=(Cat const &data);
		void makeSound(void) const;
};

#endif
