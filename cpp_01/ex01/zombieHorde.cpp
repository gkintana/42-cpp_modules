/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 16:52:31 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/04 02:54:53 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde(int N, std::string name) {
	Zombie	*horde = new Zombie[N];
	
	for (int i = 0; i < N; i++) {
		std::cout << GREEN << name << i + 1;
		horde->announce();
		std::cout << DEFAULT;
	}
	return (horde);
}
