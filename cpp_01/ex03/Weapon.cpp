/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:59:56 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/04 02:32:32 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string const weaponType): m_type(weaponType) {}

Weapon::~Weapon(void) {}

void	Weapon::setType(std::string weaponType) {
	m_type = weaponType;
}

std::string const	&Weapon::getType(void) const {
	return (m_type);
}
