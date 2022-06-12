/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 22:14:16 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/13 01:28:13 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include "Form.hpp"

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
