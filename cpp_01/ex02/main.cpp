/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 20:09:17 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/10 21:40:55 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *strPtr = &str;
	std::string &strRef = str;

	std::cout << "Memory Addresses:" << std::endl;
	std::cout << "  • String Variable\t= " << &str << std::endl;
	std::cout << "  • String Pointer\t= " << strPtr << std::endl;
	std::cout << "  • String Reference\t= " << &strRef << std::endl;
	std::cout << "String Values:" << std::endl;
	std::cout << "  • String Variable\t= " << str << std::endl;
	std::cout << "  • String Pointer\t= " << *strPtr << std::endl;
	std::cout << "  • String Reference\t= " << strRef << std::endl;
	return (0);
}
