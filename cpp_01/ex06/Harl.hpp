/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:34:03 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/22 14:46:59 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

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
#define LVL_U		"[ ❓❓❓❓❓ ]\n"
#define LINE		"---------------------------------------------"
#define DEBUG		"I love having extra bacon for my 7XL-double-cheese-triple" \
					"-pickle-special-ketchup burger. I really do!"
#define INFO		"I cannot believe adding extra bacon costs more money. You" \
					" didn't put enough bacon in my burger! If you did, I" \
					" wouldn't be asking for more!"
#define WARNING		"I think I deserve to have some extra bacon for free. I've" \
					" been coming for years whereas you started working here" \
					" since last month."
#define ERROR		"This is unacceptable! I want to speak to the manager now."
#define UNKNOWN		"Probably complaining about insignificant problems."
#define ARG_ERROR	"\033[0;31mError!\n\033[0;33mExpected: ./harlFilter" \
					" \"Debug or Info or Warning or Error\"\033[0m"

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>

/*---------------------------------- CLASS ----------------------------------*/
class Harl {
	private:
		std::string m_level[4];
		void debug();
		void info();
		void warning ();
		void error();
		void (Harl::*functionPtr[4])();
	public:
		Harl();
		~Harl();
		void complain(std::string level);
};

#endif
