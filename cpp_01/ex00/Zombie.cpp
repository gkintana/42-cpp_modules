/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:28:32 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/10 21:26:20 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name): m_name(name) {
	this->announce();
}

Zombie::~Zombie(void) {
	std::cout << RED << m_name << END << std::endl;
}

void Zombie::announce(void) {
	std::cout << GREEN << m_name << BRAINZ << std::endl;
}
