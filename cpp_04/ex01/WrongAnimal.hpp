/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:46:57 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/14 13:22:55 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

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
class	WrongAnimal {
	protected:
		std::string		m_type;
	public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &source);
		~WrongAnimal(void);
		WrongAnimal		&operator=(WrongAnimal const &data);
		std::string		getType(void) const;
		virtual void	makeSound(void) const;
};

#endif
