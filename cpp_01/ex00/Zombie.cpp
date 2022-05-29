/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:28:32 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/28 23:43:14 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
	this->m_name = name;
	this->announce();
}

Zombie::~Zombie() {
	std::cout << RED << m_name << " has been slain" DEFAULT << std::endl;
}

void Zombie::announce() {
	std::cout << GREEN << m_name << ": BraiiiiiiinnnzzzZ..." DEFAULT << std::endl;
}
