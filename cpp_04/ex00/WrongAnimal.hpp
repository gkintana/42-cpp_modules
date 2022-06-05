/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:46:57 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/05 23:14:51 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

/*------------------------------- COLOR CODES -------------------------------*/
#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[1;33m"
#define PURPLE		"\033[0;35m"
#define CYAN		"\033[0;36m"

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
#define W_ANIMAL_CON	"Wrong Animal Constructor"
#define W_ANIMAL_CPY	"Wrong Animal Copy Constructor"
#define W_ANIMAL_CAO	"Wrong Animal Copy Assignment Operator"
#define W_ANIMAL_DEC	"Wrong Animal Deconstructor"
#define W_ANIMAL_SND	"\"Bark!\""
#define W_ANIMAL		"Tiger"

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>

/*---------------------------------- CLASS ----------------------------------*/
class WrongAnimal {
	protected:
		std::string m_type;
	public:
		WrongAnimal();
		WrongAnimal(WrongAnimal const &source);
		~WrongAnimal();
		WrongAnimal &operator=(WrongAnimal const &data);
		std::string getType() const;
		void makeSound() const;
};

#endif
