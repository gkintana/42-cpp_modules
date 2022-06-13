/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/13 21:39:51 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/13 22:20:18 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

/*---------------------------------- CLASS ----------------------------------*/
class Intern {
	private:
		Form *(Intern::*funcPtr[3])(std::string target);
		Form *ShrubberyCreation(std::string target);
		Form *RobotomyRequest(std::string target);
		Form *PresidentialPardon(std::string target);
	public:
		Intern();
		Intern(Intern const &source);
		Intern &operator=(Intern const &data);
		~Intern();
		
		Form *makeForm(std::string formName, std::string formTarget);
};

#endif
