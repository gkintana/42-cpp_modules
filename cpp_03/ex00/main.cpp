/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 20:44:06 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/06 22:50:12 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void) {
	ClapTrap	modelDummy;
	ClapTrap	modelZero("");
	ClapTrap	modelWarrior("ATK-01");
	ClapTrap	modelTank("DMG-02");
	ClapTrap	modelMedic("REP-03");
	long		testCases[6] = {-2147483648, -42, 0, 42, 2147483647, 4294967295};
	
	std::cout << std::endl << LINE LINE_ATK LINE << std::endl;
	modelWarrior.attack("");
	modelWarrior.attack("a hostile vault hunter");
	modelWarrior.attack("Handsome Jack with a rocker launcher");
	modelWarrior.attack("Sanctuary");
	
	std::cout << std::endl << LINE LINE_DMG LINE << std::endl;
	modelTank.takeDamage(testCases[0]);
	std::cout << std::endl;
	modelTank.takeDamage(testCases[1]);
	std::cout << std::endl;
	modelTank.takeDamage(testCases[2]);
	std::cout << std::endl;
	modelTank.takeDamage(testCases[3]);
	std::cout << std::endl;
	modelTank.takeDamage(testCases[4]);
	std::cout << std::endl;
	modelTank.takeDamage(testCases[5]);
	
	std::cout << std::endl << LINE LINE_REP LINE << std::endl;
	modelMedic.beRepaired(testCases[0]);
	std::cout << std::endl;
	modelMedic.beRepaired(testCases[1]);
	std::cout << std::endl;
	modelMedic.beRepaired(testCases[2]);
	std::cout << std::endl;
	modelMedic.beRepaired(testCases[3]);
	std::cout << std::endl;
	modelMedic.beRepaired(testCases[4]);
	std::cout << std::endl;
	modelMedic.beRepaired(testCases[5]);
	
	std::cout << std::endl << LINE << std::endl;
	return (0);
}
