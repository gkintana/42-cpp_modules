/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/28 13:48:26 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) {
	this->m_index = 0;
	this->m_replace = 0;
}

PhoneBook::~PhoneBook(void) {}

bool PhoneBook::checkRegistration(int type) {
	int i;
	
	type == NEW ? i = this->m_index : i = this->m_replace;
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

bool checkPhoneNumber(std::string phoneNumber) {
	if (!phoneNumber.length()) {
		return (false);
	}
	for (size_t i = 0; i < phoneNumber.length(); i++) {
		if (!isdigit(phoneNumber[i])) {
			return (false);
		}
	}
	return (true);
}

bool checkInput(std::string registrationInfo) {
	int isValid = false;

	for (size_t i = 0; i < registrationInfo.length(); i++) {
		if (isalnum(registrationInfo[i])) {
			isValid = true;
		} else if (registrationInfo[i] == 32) {
			;
		} else if (registrationInfo[i] == 9) {
			return (false);
		} else {
			return (isValid);
		}
	}
	return (isValid);
}

void registrationError(std::string temp) {
	if (temp.length()) {
		std::cout << RED REG_ERR_01 DEFAULT << std::endl;
	} else {
		std::cout << RED REG_ERR_02 DEFAULT << std::endl; 
	}
}

void PhoneBook::registrationType(int type) {
	std::string temp;
	int i;

	type == NEW ? i = this->m_index : i = this->m_replace;
	while (std::cout << REG_FN) {
		if (!std::getline(std::cin, temp)) {
			std::cout << std::endl;
			exit (1);
		}
		if (checkInput(temp)) {
			this->m_list[i].setFirstName(temp);
			break ;
		}
		else {
			registrationError(temp);
		}
	}
	while (std::cout << REG_LN) {
		if (!std::getline(std::cin, temp)) {
			std::cout << std::endl;
			exit (1);
		}
		if (checkInput(temp)) {
			this->m_list[i].setLastName(temp);
			break ;
		}
		else {
			registrationError(temp);
		}
	}
	while (std::cout << REG_NN) {
		if (!std::getline(std::cin, temp)) {
			std::cout << std::endl;
			exit (1);
		}
		if (checkInput(temp)) {
			this->m_list[i].setNickname(temp);
			break ;
		}
		else {
			registrationError(temp);
		}
	}
	while (std::cout << REG_PN) {
		if (!std::getline(std::cin, temp)) {
			std::cout << std::endl;
			exit (1);
		}
		if (checkPhoneNumber(temp)) {
			this->m_list[i].setPhoneNumber(temp);
			break ;
		} else {
			registrationError(temp);
		}
	}
	while (std::cout << REG_DS) {
		if (!std::getline(std::cin, temp)) {
			std::cout << std::endl;
			exit (1);
		}
		if (checkInput(temp)) {
			this->m_list[i].setDarkestSecret(temp);
			break ;
		}
		else {
			registrationError(temp);
		}
	}
}

void PhoneBook::registerContact(void) {
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

void PhoneBook::displaySpecificContact(int index) {
	std::cout << CYAN SPEC_01 << index + 1 << SPEC_02 DEFAULT << std::endl
			  << SPEC_03 << m_list[index].getFirstName() << std::endl
			  << SPEC_04 << m_list[index].getLastName() << std::endl
			  << SPEC_05 << m_list[index].getNickname() << std::endl
			  << SPEC_06 << m_list[index].getPhoneNumber() << std::endl
			  << SPEC_07 << m_list[index].getDarkestSecret() << std::endl
			  << GREEN SEARCH_04 DEFAULT << std::endl;
}

bool indexIsDigit(std::string index) {
	int	i = 0;
	while (index[i]) {
		if (!isdigit(index[i++])) {
			return (false);
		}
	}
	return (true);
}

std::string checkLength(std::string contactInfo) {
	if (contactInfo.length() > 10) {
		contactInfo.resize(9);
		contactInfo.append(".");
	}
	return (contactInfo);
}

void PhoneBook::askSpecificContact(int i) {
	std::cout << SEARCH_01 SEARCH_02 SEARCH_03;
	std::string index;

	while (std::getline(std::cin, index)) {
		if (!std::cin) {
			break;
		}
		if (!indexIsDigit(index)) {
			std::cout << RED KO_INDEX DEFAULT << std::endl;
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
	if (std::cin.eof()) {
		exit(1);
	}
}

void setWidth10(std::string info, int addNewline) {
	if (!addNewline) {
		std::cout << "|" << std::setw(10) << info;
	} else {
		std::cout << "|" << std::setw(10) << info << "|" << std::endl;
	}
}

void PhoneBook::displayAllContacts(void) {
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
