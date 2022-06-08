/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:00:15 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/08 17:06:36 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

/*------------------------------- COLOR CODES -------------------------------*/
#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[1;33m"
#define PURPLE		"\033[0;35m"
#define CYAN		"\033[0;36m"

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>

/*---------------------------------- CLASS ----------------------------------*/
class Bureaucrat {
	private:
		std::string m_name;
		int m_grade;
	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const &source);
		Bureaucrat &operator=(Bureaucrat const &data);
		~Bureaucrat();
		Bureaucrat(std::string name, int grade);
		std::string getName();
		int getGrade();

		// increment & decrement grades
};

// ostream function <<

#endif
