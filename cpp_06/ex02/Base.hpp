/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 15:26:34 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/15 17:59:17 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>
#include <cstdlib>
#include <exception>

/*------------------------------- COLOR CODES -------------------------------*/
#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[0;33m"
#define PURPLE		"\033[0;35m"
#define CYAN		"\033[0;36m"

/*---------------------------------- MACROS ---------------------------------*/
#define PRINT_A	std::cout << GREEN "Base pointer is pointing to Class A" DEFAULT << std::endl
#define PRINT_B	std::cout << YELLOW "Base pointer is pointing to Class B" DEFAULT << std::endl
#define PRINT_C	std::cout << CYAN "Base pointer is pointing to Class C" DEFAULT << std::endl

/*---------------------------------- CLASS ----------------------------------*/
class Base {
	public:
		virtual ~Base();
};

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

/*--------------------------- FUNCTION PROTOTYPES ---------------------------*/
Base *generate();
void identify(Base *p);
void identify(Base &p);

#endif
