/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:59:40 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/29 00:19:38 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) {
	this->m_name = name;
}

HumanB::~HumanB(void) {}

void HumanB::setWeapon(Weapon &type) {
	this->m_type = &type;
}

void HumanB::attack(void) {
	std::cout << m_name << ATTACK << m_type->getType() << std::endl;
}
