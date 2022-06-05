/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/06 19:51:46 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/05 21:39:32 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	std::cout << CREATE_U;
	this->m_name = UNKNOWN;
	this->m_hitPoints = 10;
	this->m_energyPoints = 10;
	this->m_attackDamage = 0;
}

ClapTrap::ClapTrap(std::string modelName) {
	this->m_name = modelName;
	if (!this->m_name.length()) {
		this->m_name = UNDEFINED;
	}
	this->m_hitPoints = 10;
	this->m_energyPoints = 10;
	this->m_attackDamage = 0;
	std::cout << CREATE << m_name << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &source) {
	std::cout << CLONE CC << std::endl;
	*this = source;
}

ClapTrap &ClapTrap::operator=(ClapTrap const &data) {
	std::cout << CLONE CAO << std::endl;
	this->m_name = data.m_name;
	this->m_hitPoints = data.m_hitPoints;
	this->m_energyPoints = data.m_energyPoints;
	this->m_attackDamage = data.m_attackDamage;
	return *this;
}

ClapTrap::~ClapTrap() {
	std::cout << MODEL << this->m_name << DESTROYED;
}

void ClapTrap::attack(const std::string &target) {
	if (!this->m_energyPoints || !this->m_hitPoints) {
		std::cout << RED MODEL << this->m_name << (!this->m_energyPoints ? NO_ENERGY : NO_HEALTH) << std::endl;
		return;
	} else if (!target.length()) {
		std::cout << MODEL << this->m_name << ATK_01 NO_TARGET ATK_02;
	} else {
		std::cout << MODEL << this->m_name << ATK_01 << target << ATK_02;
	}
	std::cout << this->m_attackDamage << ATK_03 << std::endl;
	this->m_energyPoints--;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if ((int)amount < 0) {		// turns UINT_MAX into 0
		amount = 0;
	}
	std::cout << MODEL << this->m_name << DMG_01 << amount << ATK_03 << std::endl;
	if (amount >= this->m_hitPoints) {
		this->m_hitPoints = 0;
	} else {
		this->m_hitPoints -= amount;
	}
	std::cout << MODEL << this->m_name << DMG_02 << this->m_hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (!this->m_energyPoints || !this->m_hitPoints) {
		std::cout << RED MODEL << this->m_name << (!this->m_energyPoints ? NO_ENERGY : NO_HEALTH) << std::endl;
		return;
	}
	if ((int)amount < 0) {
		std::cout << RED INVALID_R << (int)amount << "]" GREEN << std::endl;
		return;
	}
	std::cout << MODEL << this->m_name << REP_01 << amount << REP_02 << std::endl;
	this->m_hitPoints += amount;
	std::cout << MODEL << this->m_name << DMG_02 << this->m_hitPoints << std::endl;
	this->m_energyPoints--;
}
