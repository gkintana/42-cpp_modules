/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 22:14:16 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/13 19:10:09 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include "Form.hpp"
#include <fstream>

#define ASCII_TREE	"\033[0;32m               ,@@@@@@@,\n\
       ,,,.   ,@@@@@@/@@,  .oo8888o.\n\
    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n\
   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n\
   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n\
   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n\
   `&%\\ ` /%&'    |.|        \\ '|8'\n\
       |o|        | |         | | \n\
       |.|        | |         | | \n\
     \\/ ._\\//_/__/  ,\\_//___\\/.  \\_//__/_\033[0m"

/*---------------------------------- CLASS ----------------------------------*/
class ShrubberyCreationForm : public Form {
	private:
		std::string const m_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string const target);
		ShrubberyCreationForm(ShrubberyCreationForm const &source);
		ShrubberyCreationForm &operator=(ShrubberyCreationForm const &data);
		~ShrubberyCreationForm();
		
		void execute(Bureaucrat const &executor) const;
};

#endif
