/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:44:06 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/07 09:57:55 by gkintana         ###   ########.fr       */
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
	std::string	strCases[4] =	{	"",
									"a hostile vault hunter",
									"Handsome Jack with a rocket launcher",
									"Sanctuary"	
								};
	long		numCases[6] = {-2147483648, -42, 0, 42, 2147483647, 4294967295};
	
	std::cout << std::endl << PURPLE LINE LINE_ATK LINE;
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
	std::cout << CYAN LINE LINE_DES LINE;
	return (0);
}
