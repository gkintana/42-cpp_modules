/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 17:27:20 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/12 23:27:23 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

/*------------------------------- COLOR CODES -------------------------------*/
#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[0;33m"
#define PURPLE		"\033[0;35m"
#define CYAN		"\033[0;36m"

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
#define CREATE		"Created ClapTrap Model: "
#define CREATE_U	"Unknown ClapTrap generated\n"
#define UNKNOWN		"(unknown)"
#define UNDEFINED	"(unidentified)"
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
#define DESTROYED	" has been destroyed\n"
#define NO_TARGET	"???"
#define NO_ENERGY	" ran out of energy points"
#define INVALID_D	"Invalid damage amount of ["
#define INVALID_R	"Invalid repair amount of ["

#define LINE		"+----------------------------------------------------------+\n"
#define LINE_CON	"|                      CONSTRUCTORS                        |\n"
#define LINE_DES	"|                       DESTRUCTOR                         |\n"
#define LINE_ATK	"|                      ATTACK TESTS                        |\n"
#define LINE_DMG	"|                      DAMAGE TESTS                        |\n"
#define LINE_REP	"|                      REPAIR TESTS                        |\n"
#define LINE_E_ATK	"|                  ENERGY TESTS (ATTACK)                   |\n"
#define LINE_E_REP	"|                  ENERGY TESTS (REPAIR)                   |\n"

/*------------------------------- TEST CASES --------------------------------*/
#define STR_01		""
#define STR_02		"Handsome Jack"
#define STR_03		"an Alpha Skag"
#define STR_04		"a Bandit Raider"
#define STR_05		"a Bruiser"
#define STR_06		"a Guardian Spectre"
#define STR_07		"a Hyperion Soldier"
#define STR_08		"a Lance Shock Trooper"
#define STR_09		"a Scorpio Turret"
#define STR_10		"a Spiderant King"

#define NUM_01		-2147483648
#define NUM_02		-42
#define NUM_03		0
#define NUM_04		42
#define NUM_05		2147483647
#define NUM_06		4294967295

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>

/*---------------------------------- CLASS ----------------------------------*/
class ClapTrap {
	private:
		std::string m_name;
		unsigned int m_hitPoints;
		unsigned int m_energyPoints;
		unsigned int m_attackDamage;
	public:
		ClapTrap(void);
		ClapTrap(std::string modelName);
		ClapTrap(ClapTrap const &source);
		~ClapTrap(void);
		ClapTrap &operator=(ClapTrap const &data);
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
};

#endif
