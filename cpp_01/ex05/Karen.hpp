/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:34:03 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/29 19:31:59 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
#define KAREN_HPP

/*------------------------------- COLOR CODES -------------------------------*/
#define DEFAULT		"\033[0m"
#define RED			"\033[3;31m"
#define GREEN		"\033[1;32m"
#define YELLOW		"\033[3;33m"
#define PURPLE		"\033[3;35m"
#define CYAN		"\033[3;36m"

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
#define LVL_D		"[ DEBUG ]\n"
#define LVL_I		"[ INFO ]\n"
#define LVL_W		"[ WARNING ]\n"
#define LVL_E		"[ ERROR ]\n"
#define LVL_U		"[ 🤯🤯🤯🤯🤯 ]\n"
#define LINE		"---------------------------------------------"
#define DEBUG		"I love having extra bacon for my 7XL-double-cheese-triple" \
					"-pickle-special-ketchup burger.\nI really do!\n"
#define INFO		"I cannot believe adding extra bacon costs more money.\nYou" \
					" didn't put enough bacon in my burger!\nIf you did, I" \
					" wouldn't be asking for more!\n"
#define WARNING		"I think I deserve to have some extra bacon for free.\nI've" \
					" been coming for years whereas you started working here" \
					" since last month.\n"
#define ERROR		"This is unacceptable!\nI want to speak to the manager now."
#define UNKNOWN		"Karen simulator is not aware of that comment level."

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>

/*---------------------------------- CLASS ----------------------------------*/
class Karen {
	private:
		std::string m_level[4];
		void debug();
		void info();
		void warning ();
		void error();
		void (Karen::*functionPtr[4])();
	public:
		Karen();
		~Karen();
		void complain(std::string level);
};

#endif
