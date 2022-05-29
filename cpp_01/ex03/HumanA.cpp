/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:59:35 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/29 00:01:58 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

// https://stackoverflow.com/questions/19576458/constructor-for-must-explicitly-initialize-the-reference-member
HumanA::HumanA(std::string name, Weapon &type): m_type(type) {
	this->m_name = name;
}

HumanA::~HumanA() {}

void HumanA::attack(void) {
	std::cout << m_name << ATTACK << m_type.getType() << std::endl;
}

