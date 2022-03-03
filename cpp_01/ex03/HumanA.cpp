/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:59:35 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/04 02:36:40 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type): m_name(name), m_type(type) {}

HumanA::~HumanA() {}

void	HumanA::attack(void) {
	std::cout << m_name << ATTACK << m_type.getType() << std::endl;
}

