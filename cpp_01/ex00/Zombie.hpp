/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:28:36 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/10 22:28:33 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

/*------------------------------- COLOR CODES -------------------------------*/
#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
#define BRAINZ		": BraiiiiiiinnnzzzZ..."
#define TYPE_N		"Zombie"
#define TYPE_S		"Screamer"
#define TYPE_R		"Random Zombie"
#define END			" has been slain"

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>

/*---------------------------------- CLASS ----------------------------------*/
class Zombie {
	private:
		std::string m_name;
	public:
		Zombie(std::string name);
		~Zombie(void);
		void announce(void);
};

/*--------------------------- FUNCTION PROTOTYPES ---------------------------*/
Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif
