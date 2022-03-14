/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:25:33 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/14 12:48:02 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << CAT_CON << std::endl;
	this->m_type = CAT;
}

Cat::Cat(Cat const &source) {
	std::cout << CAT_CPY << std::endl;
	*this = source;
}

Cat	&Cat::operator=(Cat const &data) {
	std::cout << CAT_CAO << std::endl;
	this->m_type = data.m_type;
	return (*this);
}

Cat::~Cat(void) {
	std::cout << CAT_DEC << std::endl;
}

// std::string	Cat::getType(void) const {
// 	// this->m_type = "Cat";
// 	return (this->m_type);
// }

void	Cat::makeSound(void) const {
	std::cout << CAT_SND << std::endl;
}
