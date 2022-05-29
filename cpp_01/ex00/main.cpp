/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:28:21 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/28 23:38:07 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main() {
	Zombie("Zombie");
	randomChump("Random Zombie");
	Zombie *special = newZombie("Screamer");
	delete special;
	return 0;
}
