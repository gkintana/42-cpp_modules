/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:59:40 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/04 02:45:30 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name): m_name(name) {}

HumanB::~HumanB(void) {}

void	HumanB::setWeapon(Weapon &type) {
	m_type = &type;
}

void	HumanB::attack(void) {
	std::cout << m_name << ATK << m_type->getType() << std::endl;
}
