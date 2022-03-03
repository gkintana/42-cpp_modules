/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:28:32 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/03 14:40:37 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::announce(void) {
	std::cout << GREEN << name << BRAINZ << std::endl;
}

Zombie::Zombie(std::string name): name(name) {
	this->announce();
}

Zombie::~Zombie(void) {
	std::cout << RED << name << END << std::endl;
}
