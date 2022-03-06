/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:27:20 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/06 22:52:13 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
#define CREATE		"Created ClapTrap Model No. "
#define CREATE_U	"Unknown ClapTrap generated"
#define UNKNOWN		"(unknown)"
#define UNDEFINED	"(undefined)"
#define CLONE		"A ClapTrap clone was generated using the "
#define	CC			"copy constructor"
#define CAO			"copy assignment operator"
#define MODEL		"ClapTrap Model: "
#define ATK_01		" attacks "
#define ATK_02		", causing ["
#define ATK_03		"] points of damage!"
#define DMG_01		" received ["
#define DMG_02		"'s remaining hit points = "
#define REP_01		" repaired itself for ["
#define REP_02		"] hit points"
#define DESTROYED	" has been destroyed"
#define INVALID_D	"Invalid damage amount of ["
#define INVALID_R	"Invalid repair amount of ["

#define LINE		"+----------------------------------------------------------+\n"
#define LINE_ATK	"|                      ATTACK TESTS                        |\n"
#define LINE_DMG	"|                      DAMAGE TESTS                        |\n"
#define LINE_REP	"|                      REPAIR TESTS                        |\n"

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>

/*---------------------------------- CLASS ----------------------------------*/
class	ClapTrap {
	private:
		std::string		m_name;
		unsigned int	m_hitPoints;
		unsigned int	m_energyPoints;
		unsigned int	m_attackDamage;
	public:
		ClapTrap(void);
		ClapTrap(std::string modelNum);
		ClapTrap(ClapTrap const &source);		
		~ClapTrap(void);
		ClapTrap		&operator=(ClapTrap const &data);
		void			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
};

#endif
