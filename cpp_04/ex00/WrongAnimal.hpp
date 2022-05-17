/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:46:57 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/17 21:51:00 by gkintana         ###   ########.fr       */
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
#define WRONGA_CON	"Wrong Animal Constructor"
#define WRONGA_CPY	"Wrong Animal Copy Constructor"
#define WRONGA_CAO	"Wrong Animal Copy Assignment Operator"
#define WRONGA_DEC	"Wrong Animal Deconstructor"
#define WRONGA_SND	"\"Bark!\""
#define WRONGA		"Tiger"

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>

/*---------------------------------- CLASS ----------------------------------*/
class WrongAnimal {
	protected:
		std::string m_type;
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &source);
		virtual ~WrongAnimal(void);
		WrongAnimal &operator=(WrongAnimal const &data);
		std::string getType(void) const;
		virtual void makeSound(void) const;
};

#endif
