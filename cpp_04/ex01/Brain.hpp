/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:43:27 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/18 23:33:04 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

/*------------------------------- COLOR CODES -------------------------------*/
#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[1;33m"
#define PURPLE		"\033[0;35m"
#define CYAN		"\033[0;36m"

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/


/*--------------------------------- LIBRARY ---------------------------------*/
#include "Animal.hpp"

/*---------------------------------- CLASS ----------------------------------*/
class Brain {
	private:
		std::string m_ideas[100];
	public:
		Brain(void);
		Brain(Brain const &source);
		Brain &operator=(Brain const &data);
		~Brain(void);
		void addIdeas(std::string idea, int i);
		void shareIdeas(Animal type);
};

#endif
