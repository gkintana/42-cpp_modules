/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/22 16:41:51 by gkintana         ###   ########.fr       */
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
	return (this->m_list[i].getFirstName().length() &&
			this->m_list[i].getLastName().length() &&
			this->m_list[i].getNickname().length() &&
			this->m_list[i].getPhoneNumber().length() &&
			this->m_list[i].getDarkestSecret().length());
}

bool checkInput(std::string info, int checkNumber) {
	if ((checkNumber && !info.length()) || !info.length()) {
		return false;
	} else if (checkNumber && info.length() > 15) {
		std::cerr << PURPLE "Internationally, phone lengths vary, but the ITU E.164 states "\
					 "that phone numbers around the globe are recommended to not be longer "\
					 "than 15 digits." DEFAULT << std::endl;
		return false;
	}

	for (std::string::size_type i = 0; i < info.length(); i++) {
		if ((!checkNumber && std::isspace(info[i]) && info[i] != 32) || 
			(checkNumber && !std::isdigit(info[i]))) {
			return false;
		}
	}
	return info.find(ALPHANUM) ? true : false;
}

void PhoneBook::saveInfo(std::string field, int i, int function, bool &eof) {
	std::string temp;

	while (std::cout << field) {
		if (!std::getline(std::cin, temp)) {
			eof = true;
			std::cout << CYAN "EOF" DEFAULT << std::endl;
			return;
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
			std::cerr << RED << (temp.length() ? REG_ERR_01 : REG_ERR_02) 
					  << DEFAULT << std::endl;
		}
	}
}

bool PhoneBook::registrationType(int type) {
	std::string prompt[5] = { REG_FN, REG_LN, REG_NN, REG_PN, REG_DS };
	int i = type == new_reg ? this->m_index : this->m_replace;
	bool eof = false;

	for (int j = 0; j < 5; j++) {
		if (!eof) {
			saveInfo(prompt[j], i, j + 1, eof);
		}
	}
	return !eof ? true : false;
}

bool PhoneBook::registerContact() {
	if (this->m_index >= 0 && this->m_index < 8) {
		registrationType(new_reg);
		if (checkRegistration(new_reg)) {
			std::cout << GREEN REG_OK DEFAULT << std::endl;
			this->m_index++;
			return true;
		} else {
			std::cerr << RED REG_KO DEFAULT << std::endl;
			return false;
		}
	} else {
		registrationType(replace_reg);
		if (checkRegistration(replace_reg)) {
			std::cout << GREEN REG_OK DEFAULT << std::endl;
			if (++this->m_replace == 8) {
				this->m_replace = 0;
			}
			return true;
		} else {
			std::cerr << RED REG_KO DEFAULT << std::endl;
			return false;
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
			  << GREEN SEARCH_03 DEFAULT << std::endl;
}

bool indexIsDigit(std::string index) {
	for (std::string::size_type i = 0; i < index.length(); i++) {
		if (!std::isdigit(index[i])) {
			return false;
		}
	}
	return true;
}

std::string checkLength(std::string contactInfo) {
	if (contactInfo.length() > 10) {
		contactInfo.resize(9);
		contactInfo.append(".");
	}
	return contactInfo;
}

bool PhoneBook::askSpecificContact(int i) {
	std::string index;
	std::cout << SEARCH_01;

	while (std::cout << SEARCH_02) {
		if (!std::getline(std::cin, index)) {
			std::cout << CYAN "EOF" DEFAULT << std::endl;
			return false;
		}

		if (!indexIsDigit(index)) {
			std::cerr << RED KO_INDEX DEFAULT << std::endl;
		} else if (std::atol(index.c_str()) >= 1 && std::atol(index.c_str()) <= i) {
			displaySpecificContact(std::atoll(index.c_str()) - 1);
			return true;
		} else if (!std::atol(index.c_str())) {
			std::cout << PURPLE CANCEL DEFAULT << std::endl;
			return true;
		} else {
			std::cerr << RED NO_INDEX DEFAULT << std::endl;
		}
	}
	return true;
}

void setWidth10(std::string info, int addNewline) {
	if (!addNewline) {
		std::cout << "|" << std::setw(10) << info;
	} else {
		std::cout << "|" << std::setw(10) << info << "|" << std::endl;
	}
}

bool PhoneBook::displayAllContacts() {
	if (!this->m_index) {
		std::cout << CYAN ZERO DEFAULT << std::endl;
		return true;
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
		return askSpecificContact(i);
	}
}
