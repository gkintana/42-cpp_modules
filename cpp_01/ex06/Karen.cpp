/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:47:29 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/29 21:01:48 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen() {
	this->m_level[0] = "DEBUG";
	this->m_level[1] = "INFO";
	this->m_level[2] = "WARNING";
	this->m_level[3] = "ERROR";
	this->functionPtr[0] = &Karen::debug;
	this->functionPtr[1] = &Karen::info;
	this->functionPtr[2] = &Karen::warning;
	this->functionPtr[3] = &Karen::error;
}

Karen::~Karen() {}

void Karen::debug() {
	std::cout << LVL_D CYAN DEBUG DEFAULT << std::endl;
}

void Karen::info() {
	std::cout << LVL_I YELLOW INFO DEFAULT << std::endl;
}

void Karen::warning() {
	std::cout << LVL_W PURPLE WARNING DEFAULT << std::endl;
}

void Karen::error() {
	std::cout << LVL_E RED ERROR DEFAULT << std::endl;
}

void Karen::complain(std::string level) {
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
