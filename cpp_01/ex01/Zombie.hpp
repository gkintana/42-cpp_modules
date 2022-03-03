/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 13:28:36 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/03 15:32:47 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

/*------------------------------- COLOR CODES -------------------------------*/
# define DEFAULT	"\033[0m"
# define RED		"\033[0;31m"
# define GREEN		"\033[0;32m"

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
# define BRAINZ		": BraiiiiiiinnnzzzZ..."
# define ZOMBIE		"Zombie "

/*--------------------------------- LIBRARY ---------------------------------*/
# include <iostream>

/*---------------------------------- CLASS ----------------------------------*/
class	Zombie {
	private:
		std::string		name;
	public:
		void			announce(void);
};

/*--------------------------- FUNCTION PROTOTYPE ----------------------------*/
Zombie*	zombieHorde(int N, std::string name);

#endif
