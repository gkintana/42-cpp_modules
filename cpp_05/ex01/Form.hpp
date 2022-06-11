/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/11 20:10:00 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/12 01:28:17 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include "Bureaucrat.hpp"

/*---------------------------------- CLASS ----------------------------------*/
class Bureaucrat;

class Form {
	private:
		const std::string m_name;
		bool m_signed;
		const int m_gradeToSign;
		const int m_gradeToExecute;
		
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};

	public:
		Form();
		Form(const std::string name, const int gradeToSign, const int gradeToExecute);
		Form(Form const &source);
		Form &operator=(Form const &data);
		~Form();

		void beSigned(Bureaucrat &b);
		std::string getFormName() const;
		bool hasBeenSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		void updateSign();
};

std::ostream &operator<<(std::ostream &out, Form const &info);

#endif
