/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:46:57 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/14 12:48:28 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

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
class	Animal {
	protected:
		std::string		m_type;
	public:
		Animal(void);
		Animal(Animal const &source);
		~Animal(void);
		Animal			&operator=(Animal const &data);
		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};

#endif
