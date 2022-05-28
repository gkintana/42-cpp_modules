/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/28 23:09:42 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {
	this->m_index = 0;
	this->m_replace = 0;
}

PhoneBook::~PhoneBook() {}

bool PhoneBook::checkRegistration(int type) {
	int i = type == new_reg ? this->m_index : this->m_replace;

	if (this->m_list[i].getFirstName().length() &&
		this->m_list[i].getLastName().length() &&
		this->m_list[i].getNickname().length() &&
		this->m_list[i].getPhoneNumber().length() &&
		this->m_list[i].getDarkestSecret().length()) {
		return true;
	}
	return false;
}

bool checkInput(std::string info, int checkNumber) {
	if ((checkNumber && !info.length()) || !info.length()) {
		return false;
	}
	for (std::string::size_type i = 0; i < info.length(); i++) {
		if (!checkNumber && info[i] == 9) {
			return false;
		} else if (checkNumber && !std::isdigit(info[i])) {
			return false;
		}
	}
	if (info.find(ALPHANUM)) {
		return true;
	}
	return false;
}

void registrationError(std::string temp) {
	if (temp.length()) {
		std::cout << RED REG_ERR_01 DEFAULT << std::endl;
	} else {
		std::cout << RED REG_ERR_02 DEFAULT << std::endl; 
	}
}

void PhoneBook::saveInfo(std::string field, int i, int function) {
	std::string temp;

	while (std::cout << field) {
		if (!std::getline(std::cin, temp)) {
			std::exit(1);
		}
		if (checkInput(temp, 0) && function == 1) {
			this->m_list[i].setFirstName(temp);
			break ;
		} else if (checkInput(temp, 0) && function == 2) {
			this->m_list[i].setLastName(temp);
			break ;
		} else if (checkInput(temp, 0) && function == 3) {
			this->m_list[i].setNickname(temp);
			break ;
		} else if (checkInput(temp, 1) && function == 4) {
			this->m_list[i].setPhoneNumber(temp);
			break ;
		} else if (checkInput(temp, 0) && function == 5) {
			this->m_list[i].setDarkestSecret(temp);
			break ;
		} else {
			registrationError(temp);
		}
	}
}

void PhoneBook::registrationType(int type) {
	int i = type == new_reg ? this->m_index : this->m_replace;

	saveInfo(REG_FN, i, 1);
	saveInfo(REG_LN, i, 2);
	saveInfo(REG_NN, i, 3);
	saveInfo(REG_PN, i, 4);
	saveInfo(REG_DS, i, 5);
}

void PhoneBook::registerContact() {
	if (this->m_index >= 0 && this->m_index < 8) {
		registrationType(new_reg);
		if (checkRegistration(new_reg) == true) {
			std::cout << GREEN REG_OK DEFAULT << std::endl;
			this->m_index++;
		} else {
			std::cout << RED REG_KO DEFAULT << std::endl;
		}
	} else {
		registrationType(replace_reg);
		if (checkRegistration(replace_reg) == true) {
			std::cout << GREEN REG_OK DEFAULT << std::endl;
			if (++this->m_replace == 8) {
				this->m_replace = 0;
			}
		} else {
			std::cout << RED REG_KO DEFAULT << std::endl;
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
	for (std::string::size_type i = 0; i < index.length(); i++) {
		if (!std::isdigit(index[i])) {
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
	std::string index;
	std::cout << SEARCH_01 SEARCH_02;

	while (std::cout << SEARCH_03) {
		if (!std::getline(std::cin, index)) {
			std::exit(1);
		}
		if (!indexIsDigit(index)) {
			std::cout << RED KO_INDEX DEFAULT << std::endl;
		} else if (std::atoi(index.c_str()) >= 1 && std::atoi(index.c_str()) <= i) {
			displaySpecificContact(std::atoi(index.c_str()) - 1);
			break;
		} else if (!std::atoi(index.c_str())) {
			std::cout << PURPLE CANCEL DEFAULT << std::endl;
			break;
		} else {
			std::cout << RED NO_INDEX DEFAULT << std::endl;
		}
	}
}

void setWidth10(std::string info, int addNewline) {
	if (!addNewline) {
		std::cout << "|" << std::setw(10) << info;
	} else {
		std::cout << "|" << std::setw(10) << info << "|" << std::endl;
	}
}

void PhoneBook::displayAllContacts() {
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
