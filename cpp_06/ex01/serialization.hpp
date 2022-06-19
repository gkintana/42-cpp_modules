/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   serialization.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 13:46:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/19 13:03:47 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>
#include <stdint.h>

/*------------------------------- COLOR CODES -------------------------------*/
#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[1;4;33m"
#define PURPLE		"\033[0;35m"
#define CYAN		"\033[1;36m"

/*-------------------------------- STRUCTURE --------------------------------*/
struct Data {
	std::string name;
	std::string email;
	int phoneNumber;
	char gender;
	int age;
};

/*--------------------------- FUNCTION PROTOTYPES ---------------------------*/
uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);

void initData(Data &data);
void printDataStruct(Data &data);

#endif
