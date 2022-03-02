/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/02 11:38:50 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string	strUpper(std::string command) {
	int	i = -1;
	while (command[++i])
		command[i] = toupper(command[i]);
	return (command);
}

int	main(void) {
	PhoneBook	content;
	std::string	command;

	std::cout << "My Awesome PhoneBook!\n" << std::endl;
	std::cout << "Available Commands:" << std::endl;
	std::cout << COM_ADD << std::endl;
	std::cout << COM_SEARCH << std::endl;
	std::cout << COM_EXIT << std::endl;

	while (1) {
		std::getline(std::cin, command);
		if (strUpper(command) == "ADD")	{
			std::cout << YELLOW ADD DEFAULT << std::endl;
			content.registerContact();
		} else if (strUpper(command) == "SEARCH") {
			content.displayAllContacts();
		} else if (strUpper(command) == "EXIT") {
			std::cout << PURPLE EXIT DEFAULT << std::endl;
			break;
		} else
			std::cout << RED ERROR DEFAULT << std::endl;
	}
	return (0);
}
