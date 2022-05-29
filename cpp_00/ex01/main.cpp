/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/29 20:23:21 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string strUpper(std::string command) {
	for (std::string::size_type i = 0; i < command.length(); i++) {
		command[i] = std::toupper(command[i]);
	}
	return command;
}

int main(void) {
	PhoneBook content;
	std::string command;

	std::cout << YELLOW TITLE DEFAULT << std::endl;
	while (std::cout << PROMPT && std::getline(std::cin, command)) {
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
	return 0;
}
