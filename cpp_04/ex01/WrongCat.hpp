/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:23:10 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/18 16:22:38 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
#define W_CAT_CON	"Wrong Cat Constructor"
#define W_CAT_CPY	"Wrong Cat Copy Constructor"
#define W_CAT_CAO	"Wrong Cat Copy Assignment Operator"
#define W_CAT_DEC	"Wrong Cat Deconstructor"
#define W_CAT_SND	"\"Bark!\""
#define W_CAT		"Cat"

/*--------------------------------- LIBRARY ---------------------------------*/
#include "WrongAnimal.hpp"

/*---------------------------------- CLASS ----------------------------------*/
class WrongCat: public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(WrongCat const &source);
		WrongCat &operator=(WrongCat const &data);
		~WrongCat(void);
		void makeSound(void) const;
};

#endif
