/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:21:11 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/15 14:21:27 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

int main() {
	Data data;
	initData(data);	
	std::cout << "Data Structure Memory Address: " CYAN << &data << DEFAULT << std::endl;
	printDataStruct(data);

	uintptr_t uintPtr = serialize(&data);
	Data *dataPtr = deserialize(uintPtr);
	std::cout << "\nSerialized Memory Address: " CYAN << &uintPtr << DEFAULT << std::endl;
	std::cout << "\nDeserialized Data Structure Memory Address: " CYAN << dataPtr << DEFAULT << std::endl;
	printDataStruct(*dataPtr);

	return 0;
}
