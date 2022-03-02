/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/02 21:38:56 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// https://www.tutorialspoint.com/cplusplus/cpp_class_access_modifiers.htm
// https://www.tutorialspoint.com/5-different-methods-to-find-length-of-a-string-in-cplusplus
// https://www.delftstack.com/howto/cpp/how-to-determine-if-a-string-is-number-cpp/
// https://stackoverflow.com/questions/9047671/invalid-use-of-this-in-non-member-function

void	PhoneBook::initialize(void) {
	this->index = 0;
	this->oldest = 0;
}

bool	PhoneBook::checkRegistration(int type) {
	if (type == NEW) {
		if (!this->list[index].giveFirstName().length())
			return (false);
		if (!this->list[index].giveLastName().length())
			return (false);
		if (!this->list[index].giveNickname().length())
			return (false);
		if (!this->list[index].givePhoneNumber().length())
			return (false);
		if (!this->list[index].giveDarkestSecret().length())
			return (false);
	} else if (type == REP) {
		if (!this->list[oldest].giveFirstName().length())
			return (false);
		if (!this->list[oldest].giveLastName().length())
			return (false);
		if (!this->list[oldest].giveNickname().length())
			return (false);
		if (!this->list[oldest].givePhoneNumber().length())
			return (false);
		if (!this->list[oldest].giveDarkestSecret().length())
			return (false);
	}
	return (true);
}

void	PhoneBook::registrationType(int type) {
	std::string	temp;

	if (type == NEW) {
		std::cout << REG_FN;
		std::getline(std::cin, temp);
		this->list[index].saveFirstName(temp);
		std::cout << REG_LN;
		std::getline(std::cin, temp);
		this->list[index].saveLastName(temp);
		std::cout << REG_NN;
		std::getline(std::cin, temp);
		this->list[index].saveNickname(temp);
		std::cout << REG_PN;
		std::getline(std::cin, temp);
		this->list[index].savePhoneNumber(temp);
		std::cout << REG_DS;
		std::getline(std::cin, temp);
		this->list[index].saveDarkestSecret(temp);
	} else if (type == REP) {
		std::cout << REG_FN;
		std::getline(std::cin, temp);
		this->list[oldest].saveFirstName(temp);
		std::cout << REG_LN;
		std::getline(std::cin, temp);
		this->list[oldest].saveLastName(temp);
		std::cout << REG_NN;
		std::getline(std::cin, temp);
		this->list[oldest].saveNickname(temp);
		std::cout << REG_PN;
		std::getline(std::cin, temp);
		this->list[oldest].savePhoneNumber(temp);
		std::cout << REG_DS;
		std::getline(std::cin, temp);
		this->list[oldest].saveDarkestSecret(temp);
	}
}

void	PhoneBook::registerContact(void) {
	if (this->index >= 0 && this->index < 8) {
		registrationType(NEW);
		if (checkRegistration(NEW) == true) {
			std::cout << GREEN REG_OK DEFAULT << std::endl;
			this->index++;
		} else {
			std::cout << RED REG_KO DEFAULT << std::endl;
			return;
		}
	} else {
		registrationType(REP);
		if (checkRegistration(REP) == true) {
			std::cout << GREEN REG_OK DEFAULT << std::endl;
			this->oldest++;
		} else {
			std::cout << RED REG_KO DEFAULT << std::endl;
			return;
		}
		if (this->oldest == 8)
			this->oldest = 0;
	}
}

void	PhoneBook::displaySpecificContact(int index) {
	std::cout << SPEC_01 << index + 1 << SPEC_02 << std::endl;
	std::cout << SPEC_03 << list[index].giveFirstName() << std::endl;
	std::cout << SPEC_04 << list[index].giveLastName() << std::endl;
	std::cout << SPEC_05 << list[index].giveNickname() << std::endl;
	std::cout << SPEC_06 << list[index].givePhoneNumber() << std::endl;
	std::cout << SPEC_07 << list[index].giveDarkestSecret() << std::endl;
}

bool	indexIsDigit(std::string index) {
	int	i = 0;
	while (index[i])
		if (!isdigit(index[i++]))
			return (false);
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
		} else if (atoi(index.c_str()) >= 1 && atoi(index.c_str()) <= i) {
			displaySpecificContact(atoi(index.c_str()) - 1);
			break;
		} else if (atoi(index.c_str()) == 0) {
			std::cout << PURPLE CANCEL DEFAULT << std::endl;
			break;
		} else
			std::cout << RED NO_INDEX DEFAULT << std::endl;
	}
}

void	PhoneBook::displayAllContacts(void) {
	if (!this->index) {
		std::cout << CYAN ZERO DEFAULT << std::endl;
	} else {
		std::cout << LINE_01 << std::endl;
		std::cout << "|" << std::setw(10) << COL_01;
		std::cout << "|" << std::setw(10) << COL_02;
		std::cout << "|" << std::setw(10) << COL_03;
		std::cout << "|" << std::setw(10) << COL_04 << "|" << std::endl;
		std::cout << LINE_02 << std::endl;
		int i = -1;
		while (++i < this->index) {
			std::cout << "|" << std::setw(10) << i + 1;
			std::cout << "|" << std::setw(10) << checkLength(list[i].giveFirstName());
			std::cout << "|" << std::setw(10) << checkLength(list[i].giveLastName());
			std::cout << "|" << std::setw(10) << checkLength(list[i].giveNickname());
			std::cout << "|" << std::endl;
		}
		std::cout << LINE_02 << std::endl;
		askSpecificContact(i);
	}
}
