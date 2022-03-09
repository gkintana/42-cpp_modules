/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:45:28 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/10 00:33:55 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
#define S_CREATE	"Created ScavTrap Model: "
#define S_CREATE_U	"Unknown ScavTrap generated\n"
#define S_CLONE		"A ScavTrap clone was generated using the "
#define S_MODEL		"ScavTrap Model: "
#define S_GKM		" is now in gate keeper mode\n"

#define LINE_GATE	"|                GATE KEEPER TEST MESSAGE                  |\n"

/*--------------------------------- LIBRARY ---------------------------------*/
#include "ClapTrap.hpp"

/*---------------------------------- CLASS ----------------------------------*/
class	ScavTrap: public ClapTrap {
	public:
		ScavTrap(void);
		ScavTrap(std::string modelName);
		ScavTrap(ScavTrap const &source);
		~ScavTrap(void);
		ScavTrap	&operator=(ScavTrap const &data);
		void		attack(const std::string &target);
		void		guardGate(void);
};

#endif
