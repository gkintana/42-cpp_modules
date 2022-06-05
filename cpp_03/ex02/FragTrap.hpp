/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:03:46 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/05 15:14:37 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
#define F_CREATE	"Created FragTrap Model: "
#define F_CREATE_U	"Unknown FragTrap generated\n"
#define F_CLONE		"A FragTrap clone was generated using the "
#define F_MODEL		"FragTrap Model: "
#define HIGH_FIVE	" is asking for some high fives\n"

#define LINE_HF		"|                        HIGH FIVES                        |\n"

/*--------------------------------- LIBRARY ---------------------------------*/
#include "ClapTrap.hpp" 

/*---------------------------------- CLASS ----------------------------------*/
class FragTrap: public ClapTrap {
	public:
		FragTrap(void);
		FragTrap(std::string modelName);
		FragTrap(FragTrap const &source);
		FragTrap &operator=(FragTrap const &data);
		~FragTrap(void);
		void hiFivesGuys(void);
};

#endif
