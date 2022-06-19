/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:00:15 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/19 13:17:07 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

/*------------------------------- COLOR CODES -------------------------------*/
#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[1;4;33m"
#define PURPLE		"\033[0;35m"
#define CYAN		"\033[0;36m"

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>

/*---------------------------------- CLASS ----------------------------------*/
class Bureaucrat {
	private:
		std::string const m_name;
		int m_grade;

		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};

	public:
		Bureaucrat();
		Bureaucrat(Bureaucrat const &source);
		Bureaucrat(std::string name, int grade);
		Bureaucrat &operator=(Bureaucrat const &data);
		~Bureaucrat();

		std::string getName() const;
		int getGrade() const;
		void incrementGrade();
		void decrementGrade();
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const &info);

#endif
