/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:47:29 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/22 14:37:00 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
	this->m_level[0] = "DEBUG";
	this->m_level[1] = "INFO";
	this->m_level[2] = "WARNING";
	this->m_level[3] = "ERROR";
	this->functionPtr[0] = &Harl::debug;
	this->functionPtr[1] = &Harl::info;
	this->functionPtr[2] = &Harl::warning;
	this->functionPtr[3] = &Harl::error;
}

Harl::~Harl() {}

void Harl::debug() {
	std::cout << LVL_D CYAN DEBUG DEFAULT << std::endl;
}

void Harl::info() {
	std::cout << LVL_I YELLOW INFO DEFAULT << std::endl;
}

void Harl::warning() {
	std::cout << LVL_W PURPLE WARNING DEFAULT << std::endl;
}

void Harl::error() {
	std::cout << LVL_E RED ERROR DEFAULT << std::endl;
}

void Harl::complain(std::string level) {
	int i;

	for (i = 0; i < 4; i++) {
		if (!m_level[i].compare(level)) { 
			break;
		}
	}
	switch (i) {
		case 0:
			(this->*functionPtr[0])();
		case 1:
			(this->*functionPtr[1])();
		case 2:
			(this->*functionPtr[2])();
		case 3:
			(this->*functionPtr[3])();
			break;
		default:
			std::cout << LVL_U PURPLE UNKNOWN DEFAULT << std::endl;
	}
}
