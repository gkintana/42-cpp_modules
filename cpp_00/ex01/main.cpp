/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/22 16:37:51 by gkintana         ###   ########.fr       */
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

	signal(SIGINT, SIG_IGN);
	signal(SIGQUIT, SIG_IGN);

	std::cout << YELLOW TITLE DEFAULT << std::endl;
	while (std::cout << PROMPT && std::getline(std::cin, command)) {
		if (!strUpper(command).compare("ADD"))	{
			std::cout << YELLOW ADD DEFAULT << std::endl;
			if (!content.registerContact()) {
				break;
			}
		} else if (!strUpper(command).compare("SEARCH")) {
			if (!content.displayAllContacts()) {
				break;
			}
		} else if (!strUpper(command).compare("EXIT")) {
			std::cout << PURPLE EXIT DEFAULT << std::endl;
			break;
		} else {
			std::cerr << RED ERROR DEFAULT << std::endl;
		}
	}
	return 0;
}
