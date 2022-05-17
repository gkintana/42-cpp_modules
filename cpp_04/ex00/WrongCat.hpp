/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:23:10 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/17 21:24:02 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
#define WRONGC_CON	"Wrong Cat Constructor"
#define WRONGC_CPY	"Wrong Cat Copy Constructor"
#define WRONGC_CAO	"Wrong Cat Copy Assignment Operator"
#define WRONGC_DEC	"Wrong Cat Deconstructor"
#define WRONGC_SND	"\"Bark!\""
#define WRONGC		"Cat"

/*--------------------------------- LIBRARY ---------------------------------*/
#include "WrongAnimal.hpp"

/*---------------------------------- CLASS ----------------------------------*/
class WrongCat: public WrongAnimal {
	public:
		WrongCat(void);
		WrongCat(WrongCat const &source);
		~WrongCat(void);
		WrongCat &operator=(WrongCat const &data);
		void makeSound(void) const;
};

#endif
