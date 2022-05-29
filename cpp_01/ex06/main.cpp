/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:13:10 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/29 20:54:28 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

std::string strUpper(std::string command) {
	for (std::string::size_type i = 0; i < command.length(); i++) {
		command[i] = std::toupper(command[i]);
	}
	return command;
}

int	main(int argc, char **argv) {
	Karen simulator;

	if (argc != 2) {
		std::cout << "Error!" << std::endl;
		return 1;
	}
	simulator.complain(strUpper(argv[1]));
	return 0;
}
