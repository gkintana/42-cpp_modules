/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:21:11 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/19 13:14:56 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

int main() {
	Data data;
	initData(data);	
	std::cout << "Memory Address of Data Structure: " CYAN << &data << DEFAULT << std::endl;
	printDataStruct(data);

	uintptr_t temp = serialize(&data);
	Data *dataPtr = deserialize(temp);
	std::cout << "\nSerialized Memory Address: " CYAN << &temp << DEFAULT << std::endl
			  << "\nMemory Address of Deserialized Data Structure: " CYAN << dataPtr << DEFAULT << std::endl;
	printDataStruct(*dataPtr);

	std::cout << CYAN "\nModifying Contents of Deserialized Data Structure" DEFAULT << std::endl;
	dataPtr->name = "Jane Doe";
	dataPtr->email = "janedoe@janedoe.com";
	dataPtr->gender = 'F';
	dataPtr->phoneNumber = 987654321;
	dataPtr->age = 24;
	printDataStruct(*dataPtr);

	std::cout << CYAN "\nPrinting Original Data Structure" DEFAULT << std::endl;
	printDataStruct(data);

	return 0;
}
