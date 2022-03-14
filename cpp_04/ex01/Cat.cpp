/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:25:33 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/14 23:51:46 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) {
	std::cout << CAT_CON << std::endl;
	this->m_type = CAT;
	this->m_brain = new Brain();
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

void	Cat::makeSound(void) const {
	std::cout << CAT_SND << std::endl;
}
