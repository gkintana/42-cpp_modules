/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:47:29 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/10 22:24:30 by gkintana         ###   ########.fr       */
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

void Karen::debug(void) {
	std::cout << LVL_D CYAN DEBUG_01 DEBUG_02 DEFAULT << std::endl;
}

void Karen::info(void) {
	std::cout << LVL_I YELLOW INFO_01 INFO_02 INFO_03 DEFAULT << std::endl;
}

void Karen::warning(void) {
	std::cout << LVL_W PURPLE WARNING_01 WARNING_02 WARNING_03 DEFAULT << std::endl;
}

void Karen::error(void) {
	std::cout << LVL_E RED ERROR DEFAULT << std::endl;
}

static std::string strUpper(std::string command) {
	int	i = -1;
	while (command[++i]) {
		command[i] = toupper(command[i]);
	}
	return (command);
}

void Karen::complain(std::string level) {
	int	ok = 0;

	for(int i = 0; i < 4; i++) {
		if (m_level[i] == strUpper(level)) {
			(this->*functionPtr[i])();
			ok = 1;
		}
	}
	if (!ok) {
		std::cout << LVL_U PURPLE UNPREPARED DEFAULT << std::endl;
	}
}
