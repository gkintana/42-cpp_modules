/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:19:59 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/05 23:15:01 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << GREEN W_CAT_CON DEFAULT << std::endl;
	this->m_type = W_CAT;
}

WrongCat::WrongCat(WrongCat const &source) {
	std::cout << GREEN W_CAT_CPY DEFAULT << std::endl;
	*this = source;
}

WrongCat &WrongCat::operator=(WrongCat const &data) {
	this->m_type = data.m_type;
	return *this;
}

WrongCat::~WrongCat() {
	std::cout << RED W_CAT_DEC DEFAULT << std::endl;
}

void WrongCat::makeSound() const {
	std::cout << W_CAT_SND << std::endl;
}
