/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:07:20 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/14 13:15:24 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) {
	std::cout << WRONGA_CON << std::endl;
	this->m_type = WRONGA;
}

WrongAnimal::WrongAnimal(WrongAnimal const &source) {
	std::cout << WRONGA_CPY << std::endl;
	*this = source;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &data) {
	this->m_type = data.m_type;
	return (*this);
}

WrongAnimal::~WrongAnimal(void) {
	std::cout << WRONGA_DEC << std::endl;
}

std::string	WrongAnimal::getType(void) const {
	return (this->m_type);
}

void	WrongAnimal::makeSound(void) const {
	std::cout << WRONGA_SND << std::endl;
}
