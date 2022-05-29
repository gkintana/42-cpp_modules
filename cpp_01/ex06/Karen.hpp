/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 15:34:03 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/29 21:05:24 by gkintana         ###   ########.fr       */
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
