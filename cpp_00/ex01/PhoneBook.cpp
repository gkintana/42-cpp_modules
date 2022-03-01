/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/02 01:47:55 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

// https://www.tutorialspoint.com/cplusplus/cpp_class_access_modifiers.htm

std::string	checkLength(std::string contactInfo)
{
	if (contactInfo.size() > 10) {
		contactInfo.resize(9);
		contactInfo.append(".");
	}
	return (contactInfo);		
}

void	PhoneBook::displaySpecificContact(int index) {
	std::cout << SPEC_01 << index + 1 << SPEC_02 << std::endl;
	std::cout << SPEC_03 << list[index].giveFirstName() << std::endl;
	std::cout << SPEC_04 << list[index].giveLastName() << std::endl;
	std::cout << SPEC_05 << list[index].giveNickname() << std::endl;
	std::cout << SPEC_06 << list[index].givePhoneNumber() << std::endl;
	std::cout << SPEC_07 << list[index].giveDarkestSecret() << std::endl;
}

void	PhoneBook::displayAllContacts() {
	if (!this->index)
		std::cout << CYAN ZERO DEFAULT << std::endl;
	else {
		
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
	
	// NEED TO HANDLE EMPTY LISTS
	std::cout << SEARCH_01 SEARCH_02 SEARCH_03;
	std::string	index;
	while (1) {
		std::getline(std::cin, index);
		if (atoi(index.c_str()) >= 1 && atoi(index.c_str()) <= i) {
			displaySpecificContact(atoi(index.c_str()) - 1);
			break;
		} else if (atoi(index.c_str()) == 0) {
			// STRINGS WILL ENTER THIS STATEMENT
			std::cout << PURPLE CANCEL DEFAULT << std::endl;
			break;
		} else
			std::cout << RED NO_INDEX DEFAULT << std::endl;
	}
	
	}
}

void	PhoneBook::registerContact() {
	std::string	temp;
	
	if (this->index >= 0 && this->index < 8) {
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
		std::cout << GREEN << this->list[index].giveFirstName();
		std::cout << REG_OK DEFAULT << std::endl;
		this->index++;
	}
	else {
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
		std::cout << GREEN << this->list[oldest].giveFirstName();
		std::cout << REG_OK DEFAULT << std::endl;
		if (++oldest == 8)
			oldest = 0;
	}
}
