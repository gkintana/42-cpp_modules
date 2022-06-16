/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:21:11 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/17 00:59:31 by gkintana         ###   ########.fr       */
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

	return 0;
}
