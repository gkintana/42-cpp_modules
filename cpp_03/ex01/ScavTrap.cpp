/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:45:30 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/05 21:51:36 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << S_CREATE_U << std::endl << std::endl;
	this->m_name = UNKNOWN;
	this->m_hitPoints = 100;
	this->m_energyPoints = 50;
	this->m_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string modelName): ClapTrap(modelName) {
	this->m_name = modelName;
	if (!this->m_name.length()) {
		this->m_name = UNDEFINED;
	}
	this->m_hitPoints = 100;
	this->m_energyPoints = 50;
	this->m_attackDamage = 20;
	std::cout << S_CREATE << this->m_name << std::endl << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &source): ClapTrap(source) {
	std::cout << S_CLONE CC << std::endl;
	*this = source;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &data) {
	std::cout << CLONE CAO << std::endl;
	this->m_name = data.m_name;
	this->m_hitPoints = data.m_hitPoints;
	this->m_energyPoints = data.m_energyPoints;
	this->m_attackDamage = data.m_attackDamage;
	return *this;
}

ScavTrap::~ScavTrap() {
	std::cout << S_MODEL << this->m_name << DESTROYED;
}

void ScavTrap::attack(const std::string &target) {
	if (!this->m_energyPoints || !this->m_hitPoints) {
		std::cout << RED S_MODEL << this->m_name << (!this->m_energyPoints ? NO_ENERGY : NO_HEALTH) << std::endl;
		return;
	}
	if (!target.length()) {
		std::cout << S_MODEL << this->m_name << ATK_01 NO_TARGET ATK_02;
	} else {
		std::cout << S_MODEL << this->m_name << ATK_01 << target << ATK_02;
	}
	std::cout << this->m_attackDamage << ATK_03 << std::endl;
	this->m_energyPoints--;
}

void ScavTrap::guardGate() {
	std::cout << S_MODEL << this->m_name << S_GKM;
}
