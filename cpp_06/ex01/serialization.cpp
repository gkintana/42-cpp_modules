/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:21:11 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/15 14:26:07 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "serialization.hpp"

void initData(Data &data) {
	data.name = "John Doe";
	data.email = "johndoe@johndoe.com";
	data.gender = 'M';
	data.phoneNumber = 123456789;
	data.age = 42;
}

uintptr_t serialize(Data *ptr) {
	return reinterpret_cast <uintptr_t>(ptr);
}

Data *deserialize(uintptr_t raw) {
	return reinterpret_cast <Data *>(raw);
}

void printDataStruct(Data &data) {
	std::cout << YELLOW "Contents of Data Structure" DEFAULT << std::endl
			  << PURPLE "  • Name         : " DEFAULT << data.name << std::endl
			  << PURPLE "  • Email        : " DEFAULT << data.email << std::endl
			  << PURPLE "  • Phone Number : " DEFAULT << data.phoneNumber << std::endl
			  << PURPLE "  • Gender       : " DEFAULT << data.gender << std::endl
			  << PURPLE "  • Age          : " DEFAULT << data.age << std::endl;
}
