/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:44:06 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/12 23:29:56 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	std::cout << std::endl << CYAN LINE LINE_CON LINE;

	ClapTrap modelDummy;
	ClapTrap modelEmpty("");
	ClapTrap modelWarrior("ATK-01");
	ClapTrap modelTank("DMG-02");
	ClapTrap modelMedic("REP-03");
	long numCases[6] = { NUM_01, NUM_02, NUM_03, NUM_04, NUM_05, NUM_06 };
	std::string strCases[10] = { STR_01, STR_02, STR_03, STR_04, STR_05,
								 STR_06, STR_07, STR_08, STR_09, STR_10, };

	std::cout << PURPLE LINE LINE_ATK LINE;
	for (int i = 0; i < 10; i++) {
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
