/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 11:08:56 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/08 12:37:57 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
#define S_UNKNOWN	"Unknown ScavTrap generated"
#define S_MODEL		"ScavTrap Model: "
#define S_CREATE	"Created ScavTrap Model: "
#define S_CLONE		"A ScavTrap clone was generated using the "
#define S_GKM		" is now in gate keeper mode"

/*--------------------------------- LIBRARY ---------------------------------*/
#include "ClapTrap.hpp"

/*---------------------------------- CLASS ----------------------------------*/
class	ScavTrap: public ClapTrap {
	private:

	public:
		ScavTrap(void);
		ScavTrap(std::string modelName);
		ScavTrap(ScavTrap const &source);
		~ScavTrap(void);
		ScavTrap	&operator=(ScavTrap const &data);
		void		guardGate(void);
};

#endif
