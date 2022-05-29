/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:28:32 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/29 10:47:22 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() {}

Zombie::~Zombie() {
	std::cout << RED "A zombie has been slain" DEFAULT << std::endl;
}

void Zombie::announce() {
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
