/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:28:21 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/10 21:26:08 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie	*special;
	
	Zombie(TYPE_N);
	randomChump(TYPE_R);
	special = newZombie(TYPE_S);
	delete special;
	return (0);
}
