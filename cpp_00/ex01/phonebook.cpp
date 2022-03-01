/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/01 17:30:33 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

// https://www.tutorialspoint.com/cplusplus/cpp_class_access_modifiers.htm

void	displayContacts(int total) {
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|----------|----------|----------|----------|" << std::endl;
	
	int i = -1;
	while (++i < total)	{
		std::cout << "|" << std::setw(10) << i;
		std::cout << "|" << std::setw(10) << "testFirst12345";
		std::cout << "|" << std::setw(10) << "testLast";
		std::cout << "|" << std::setw(10) << "testNick";
		std::cout << "|" << std::endl;
	}
	
	std::cout << "|-------------------------------------------|" << std::endl;
}

void	PhoneBook::registerContact(void) {
	std::cout << REG_FN;
	std::getline(std::cin, this->firstName);
	// std::cin >> this->first_name;
	std::cout << REG_LN;
	std::getline(std::cin, this->lastName);
	// std::cin >> this->last_name;
	std::cout << REG_NN;
	std::getline(std::cin, this->nickname);
	// std::cin >> this->nickname;
	std::cout << REG_PN;
	std::getline(std::cin, this->number);
	// std::cin >> this->number;
	std::cout << REG_DS;
	std::getline(std::cin, this->secret);
	// std::cin >> this->secret;
	std::cout << GREEN << this->firstName << REG_OK DEFAULT << std::endl;
}

// void	displayCommands(void)
// {
// 	std::cout << COM_ADD << std::endl;
// 	std::cout << COM_SEARCH << std::endl;
// 	std::cout << COM_EXIT << std::endl;
// }

std::string	strUpper(std::string input) {
	int	i = -1;
	while (input[++i])
		input[i] = toupper(input[i]);
	return (input);
}

int	main(void) {
	PhoneBook	contacts[8];
	std::string	command;

	std::cout << "PHONEBOOK v1.00" << std::endl;
	std::cout << "    Available Commands:" << std::endl;
	std::cout << TAB COM_ADD << std::endl;
	std::cout << TAB COM_SEARCH << std::endl;
	std::cout << TAB COM_EXIT << std::endl;

	int	i = 0;
	while (1) {
		std::getline(std::cin, command);
		if (strUpper(command) == "ADD")	{
			std::cout << YELLOW ADD DEFAULT << std::endl;
			contacts[i].registerContact();
			if (++i == 8)
				i = 0;
		}
		else if (strUpper(command) == "SEARCH") {
			if (i == 0)
				std::cout << CYAN ZERO DEFAULT << std::endl;
			else {
				std::cout << YELLOW SEARCH DEFAULT << std::endl;
				displayContacts(i);
			}
		}
		else if (strUpper(command) == "EXIT") {
			std::cout << YELLOW EXIT DEFAULT << std::endl;
			break ;
		}
		else
			std::cout << RED ERROR DEFAULT << std::endl;
	}
	return (0);
}
