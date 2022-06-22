/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:13:10 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/22 14:47:05 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

std::string strUpper(std::string command) {
	for (std::string::size_type i = 0; i < command.length(); i++) {
		command[i] = std::toupper(command[i]);
	}
	return command;
}

int	main(int argc, char **argv) {
	Harl simulator;

	if (argc != 2) {
		std::cerr << ARG_ERROR << std::endl;
		return 1;
	}
	simulator.complain(strUpper(argv[1]));
	return 0;
}
