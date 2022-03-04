/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 22:17:29 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/05 02:24:40 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

int	main(int argc, char **argv) {
	File	manager;
	
	if (argc != 4) {
		std::cout << "Incomplete Args" << std::endl;
		return (1);
	}
	
	std::string	filename = argv[1], s1 = argv[2], s2 = argv[3];
	if (s1 == s2) {
		std::cout << "WHY" << std::endl;
		return (1);
	}

	manager.initialize(filename, s1, s2);
	manager.openFileRef();
	manager.createRep();
	manager.copyToRep();

	// std::ifstream	fileRef;
	// fileRef.open(filename);
	// if (!fileRef) {
	// 	std::cout << filename << " not found" << std::endl;
	// 	return (1);
	// } else {
	// 	std::cout << "Success!" << std::endl;
	// }
	
	// std::ofstream	fileRep;
	// fileRep.open(filename + ".replace");
	// if (!fileRep) {
	// 	std::cout << filename + ".replace" << " not found" << std::endl;
	// 	return (1);
	// } else {
	// 	std::cout << "Success!" << std::endl;
	// }
	
	// std::string	temp;
	// while (std::getline(fileReference, temp)) {
	// 	std::size_t	start = temp.find(s1);
	// 	if (start != std::string::npos) {
	// 		temp.erase(start, s1.length());
	// 		temp.insert(start, s2);
	// 	} else {
	// 		std::cout << s1 << " not found in string" << std::endl;
	// 	}
	// 	fileReplacement << temp << std::endl;
	// }

	// fileRef.close();
	// fileRep.close();

	return (0);
}
