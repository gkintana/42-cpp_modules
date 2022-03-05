/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 22:17:29 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/05 15:01:42 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int	main(int argc, char **argv) {
	File	manager;
	
	if (argc != 4) {
		std::cout << RED ARG_INC DEFAULT << std::endl;
		std::cout << YELLOW EXPECTED INFO_01 INFO_02 DEFAULT << std::endl;
		return (1);
	}
	std::string	filename = argv[1], s1 = argv[2], s2 = argv[3];
	if (s1 == s2) {
		std::cout << RED ARG_SAME DEFAULT << std::endl;
		return (1);
	}
	manager.initialize(filename, s1, s2);
	if (!manager.openFileRef()) {
		return (1);
	} if (!manager.createRep()) {
		return (1);
	}
	manager.copyToRep();
	manager.closeFiles();
	return (0);
}
