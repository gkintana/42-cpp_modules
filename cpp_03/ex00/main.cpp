/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:44:06 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/10 00:40:08 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	std::cout << std::endl << CYAN LINE LINE_CON LINE;

	ClapTrap	modelDummy;
	ClapTrap	modelEmpty("");
	ClapTrap	modelWarrior("ATK-01");
	ClapTrap	modelTank("DMG-02");
	ClapTrap	modelMedic("REP-03");
	long		numCases[6] = { -2147483648, -42, 0, 42, 2147483647, 4294967295 };
	std::string	strCases[10] = { "", "Handsome Jack", "an Alpha Skag", 
								 "a Bandit Raider", "a Bruiser",
								 "a Guardian Spectre", "a Hyperion Soldier",
								 "a Lance Shock Trooper", "a Scorpio Turret",
								 "a Spiderant King", };

	std::cout << PURPLE LINE LINE_ATK LINE;
	for (int i = 0; i < 4; i++) {
		modelWarrior.attack(strCases[i]);
		std::cout << std::endl;
	}
	std::cout << RED LINE LINE_DMG LINE;
	for (int i = 0; i < 6; i++) {
		modelTank.takeDamage(numCases[i]);
		std::cout << std::endl;
	}
	std::cout << GREEN LINE LINE_REP LINE;
	for (int i = 0; i < 6; i++) {
		modelMedic.beRepaired(numCases[i]);
		std::cout << std::endl;
	}
	std::cout << YELLOW LINE LINE_E_ATK LINE;
	for (int i = 0; i < 11; i++) {
		modelDummy.attack(strCases[i % 10]);
		std::cout << std::endl;
	}
	std::cout << YELLOW LINE LINE_E_REP LINE;
	for (int i = 0; i < 11; i++) {
		modelEmpty.beRepaired(1);
		std::cout << std::endl;
	}
	std::cout << CYAN LINE LINE_DES LINE;
	return (0);
}
