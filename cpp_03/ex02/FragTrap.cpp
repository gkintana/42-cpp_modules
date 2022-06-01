/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 19:05:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/01 14:59:29 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) {
	std::cout << F_CREATE_U << std::endl;
	this->m_name = UNKNOWN;
	this->m_hitPoints = 100;
	this->m_energyPoints = 100;
	this->m_attackDamage = 30;
}

FragTrap::FragTrap(std::string modelName): ClapTrap(modelName) {
	this->m_name = modelName;
	if (!this->m_name.length()) {
		this->m_name = UNDEFINED;
	}
	this->m_hitPoints = 100;
	this->m_energyPoints = 100;
	this->m_attackDamage = 30;
	std::cout << F_CREATE << this->m_name << std::endl << std::endl;
}

FragTrap::FragTrap(FragTrap const &source): ClapTrap(source) {
	std::cout << F_CLONE CC << std::endl;
	*this = source;
}

FragTrap &FragTrap::operator=(FragTrap const &data) {
	std::cout << F_CLONE CAO << std::endl;
	this->m_name = data.m_attackDamage;
	this->m_hitPoints = data.m_hitPoints;
	this->m_energyPoints = data.m_energyPoints;
	this->m_attackDamage = data.m_attackDamage;
	return (*this);
}

FragTrap::~FragTrap(void) {
	std::cout << F_MODEL << this->m_name << DESTROYED;
}

void FragTrap::hiFivesGuys(void) {
	std::cout << F_MODEL << this->m_name << HIGH_FIVE;
}
