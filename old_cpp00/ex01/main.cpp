/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/28 13:48:16 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void printWelcomeMessage(void) {
	std::cout << YELLOW TITLE << std::endl
			  << COM_ADD << std::endl
			  << COM_SEARCH << std::endl
			  << COM_EXIT DEFAULT << std::endl;
}

std::string strUpper(std::string command) {
	int	i = -1;
	while (command[++i]) {
		command[i] = toupper(command[i]);
	}
	return (command);
}

int main(void) {
	PhoneBook content;
	std::string command;

	printWelcomeMessage();
	while (std::cout << COMMAND && std::getline(std::cin, command)) {
		if (strUpper(command) == "ADD")	{
			std::cout << YELLOW ADD DEFAULT << std::endl;
			content.registerContact();
		} else if (strUpper(command) == "SEARCH") {
			content.displayAllContacts();
		} else if (strUpper(command) == "EXIT") {
			std::cout << PURPLE EXIT DEFAULT << std::endl;
			break;
		} else {
			std::cout << RED ERROR DEFAULT << std::endl;
		}
	}
	return (0);
}
