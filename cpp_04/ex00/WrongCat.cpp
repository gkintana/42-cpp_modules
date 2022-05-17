/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:19:59 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/17 22:00:51 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) {
	std::cout << GREEN WRONGC_CON DEFAULT << std::endl;
	this->m_type = WRONGC;
}

WrongCat::WrongCat(WrongCat const &source) {
	std::cout << GREEN WRONGC_CPY DEFAULT << std::endl;
	*this = source;
}

WrongCat &WrongCat::operator=(WrongCat const &data) {
	this->m_type = data.m_type;
	return *this;
}

WrongCat::~WrongCat(void) {
	std::cout << RED WRONGC_DEC DEFAULT << std::endl;
}

void WrongCat::makeSound(void) const {
	std::cout << WRONGC_SND << std::endl;
}
