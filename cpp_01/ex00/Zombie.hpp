/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:28:36 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/29 22:25:03 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

/*------------------------------- COLOR CODES -------------------------------*/
#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>

/*---------------------------------- CLASS ----------------------------------*/
class Zombie {
	private:
		std::string m_name;
		void announce();
	public:
		Zombie(std::string name);
		~Zombie();
};

/*--------------------------- FUNCTION PROTOTYPES ---------------------------*/
Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
