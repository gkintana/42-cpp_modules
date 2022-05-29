/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 20:09:17 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/28 23:46:39 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main() {
	std::string str = "HI THIS IS BRAIN", *strPtr = &str, &strRef = str;

	std::cout << "Memory Addresses:" << std::endl
			  << "  • String Variable\t= " << &str << std::endl
			  << "  • String Pointer\t= " << strPtr << std::endl
			  << "  • String Reference\t= " << &strRef << std::endl
			  << "String Values:" << std::endl
			  << "  • String Variable\t= " << str << std::endl
			  << "  • String Pointer\t= " << *strPtr << std::endl
			  << "  • String Reference\t= " << strRef << std::endl;
	return 0;
}
