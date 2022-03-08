/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 12:08:10 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/08 12:43:08 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// https://docs.microsoft.com/en-us/cpp/cpp/protected-cpp?view=msvc-170#:~:text=The%20protected%20keyword%20specifies%20access,that%20originally%20declared%20these%20members.

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) {
	std::cout << S_UNKNOWN << std::endl;
	this->m_name = UNKNOWN;
	this->m_hitPoints = 100;
	this->m_energyPoints = 50;
	this->m_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string modelName) {
	this->m_name = modelName;
	if (!this->m_name.length()) {
		this->m_name = UNDEFINED;
	}
	this->m_hitPoints = 100;
	this->m_energyPoints = 50;
	this->m_attackDamage = 20;
	std::cout << S_CREATE << m_name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &source): ClapTrap(source) {
	std::cout << S_CLONE CC << std::endl;
	*this = source;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &data) {
	std::cout << S_CLONE CAO << std::endl;
	this->m_name = data.m_attackDamage;
	this->m_hitPoints = data.m_hitPoints;
	this->m_energyPoints = data.m_energyPoints;
	this->m_attackDamage = data.m_attackDamage;
	return (*this);
}

ScavTrap::~ScavTrap(void) {
	std::cout << S_MODEL << this->m_name << DESTROYED << std::endl;
}

void	ScavTrap::guardGate(void) {
	std::cout << S_MODEL << this->m_name << S_GKM << std::endl;
}
