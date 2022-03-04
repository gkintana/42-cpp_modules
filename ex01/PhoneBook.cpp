/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/04 18:05:15 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// https://www.tutorialspoint.com/cplusplus/cpp_class_access_modifiers.htm
// https://www.tutorialspoint.com/5-different-methods-to-find-length-of-a-string-in-cplusplus
// https://www.delftstack.com/howto/cpp/how-to-determine-if-a-string-is-number-cpp/
// https://stackoverflow.com/questions/9047671/invalid-use-of-this-in-non-member-function

PhoneBook::PhoneBook(void) {
	this->m_index = 0;
	this->m_replace = 0;
}

PhoneBook::~PhoneBook(void) {}

bool	PhoneBook::checkRegistration(int type) {
	int	i;
	
	if (type == NEW) {
		i = this->m_index;
	} else {
		i = this->m_replace;
	}
	if (!this->m_list[i].getFirstName().length()) {
		return (false);
	} if (!this->m_list[i].getLastName().length()) {
		return (false);
	} if (!this->m_list[i].getNickname().length()) {
		return (false);
	} if (!this->m_list[i].getPhoneNumber().length()) {
		return (false);
	} if (!this->m_list[i].getDarkestSecret().length()) {
		return (false);
	}
	return (true);
}

void	PhoneBook::registrationType(int type) {
	int	i;
	std::string	temp;

	if (type == NEW) {
		i = this->m_index;
	} else {
		i = this->m_replace;
	}
	std::cout << REG_FN;
	std::getline(std::cin, temp);
	this->m_list[i].setFirstName(temp);
	std::cout << REG_LN;
	std::getline(std::cin, temp);
	this->m_list[i].setLastName(temp);
	std::cout << REG_NN;
	std::getline(std::cin, temp);
	this->m_list[i].setNickname(temp);
	std::cout << REG_PN;
	std::getline(std::cin, temp);
	this->m_list[i].setPhoneNumber(temp);
	std::cout << REG_DS;
	std::getline(std::cin, temp);
	this->m_list[i].setDarkestSecret(temp);
}

void	PhoneBook::registerContact(void) {
	if (this->m_index >= 0 && this->m_index < 8) {
		registrationType(NEW);
		if (checkRegistration(NEW) == true) {
			std::cout << GREEN REG_OK DEFAULT << std::endl;
			this->m_index++;
		} else {
			std::cout << RED REG_KO DEFAULT << std::endl;
			return;
		}
	} else {
		registrationType(REPLACE);
		if (checkRegistration(REPLACE) == true) {
			std::cout << GREEN REG_OK DEFAULT << std::endl;
			this->m_replace++;
		} else {
			std::cout << RED REG_KO DEFAULT << std::endl;
			return;
		}
		if (this->m_replace == 8) {
			this->m_replace = 0;
		}
	}
}

void	PhoneBook::displaySpecificContact(int index) {
	std::cout << CYAN SPEC_01 << index + 1 << SPEC_02 DEFAULT << std::endl;
	std::cout << SPEC_03 << m_list[index].getFirstName() << std::endl;
	std::cout << SPEC_04 << m_list[index].getLastName() << std::endl;
	std::cout << SPEC_05 << m_list[index].getNickname() << std::endl;
	std::cout << SPEC_06 << m_list[index].getPhoneNumber() << std::endl;
	std::cout << SPEC_07 << m_list[index].getDarkestSecret() << std::endl;
	std::cout << GREEN SEARCH_04 DEFAULT << std::endl;
}

bool	indexIsDigit(std::string index) {
	int	i = 0;
	while (index[i]) {
		if (!isdigit(index[i++])) {
			return (false);
		}
	}
	return (true);
}

std::string	checkLength(std::string contactInfo) {
	if (contactInfo.length() > 10) {
		contactInfo.resize(9);
		contactInfo.append(".");
	}
	return (contactInfo);
}

void	PhoneBook::askSpecificContact(int i) {
	std::cout << SEARCH_01 SEARCH_02 SEARCH_03;
	std::string	index;

	while (1) {
		std::getline(std::cin, index);
		if (!indexIsDigit(index)) {
			std::cout << RED ALPHA_01 ALPHA_02 ALPHA_03 DEFAULT << std::endl;
			std::cout << SEARCH_03;
		} else if (atoi(index.c_str()) >= 1 && atoi(index.c_str()) <= i) {
			displaySpecificContact(atoi(index.c_str()) - 1);
			break;
		} else if (!atoi(index.c_str())) {
			std::cout << PURPLE CANCEL DEFAULT << std::endl;
			break;
		} else {
			std::cout << RED NO_INDEX DEFAULT << std::endl;
			std::cout << SEARCH_03;
		}
	}
}

void	setWidth10(std::string info, int endl) {
	if (!endl) {
		std::cout << "|" << std::setw(10) << info;
	} else {
		std::cout << "|" << std::setw(10) << info << "|" << std::endl;
	}
}

void	PhoneBook::displayAllContacts(void) {
	if (!this->m_index) {
		std::cout << CYAN ZERO DEFAULT << std::endl;
	} else {
		std::cout << PURPLE LINE << std::endl;
		setWidth10(COL_01, 0);
		setWidth10(COL_02, 0);
		setWidth10(COL_03, 0);
		setWidth10(COL_04, 1);
		std::cout << LINE << std::endl;
		int i = -1;
		while (++i < this->m_index) {
			std::cout << "|" << std::setw(10) << i + 1;
			setWidth10(checkLength(m_list[i].getFirstName()), 0);
			setWidth10(checkLength(m_list[i].getLastName()), 0);
			setWidth10(checkLength(m_list[i].getNickname()), 1);
		}
		std::cout << LINE DEFAULT << std::endl;
		askSpecificContact(i);
	}
}
