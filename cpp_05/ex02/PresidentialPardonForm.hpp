/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 22:14:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/12 23:12:52 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include "Form.hpp"

/*---------------------------------- CLASS ----------------------------------*/
class PresidentialPardonForm : public Form {
	private:
		std::string const m_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string const target);
		PresidentialPardonForm(PresidentialPardonForm const &source);
		PresidentialPardonForm &operator=(PresidentialPardonForm const &data);
		~PresidentialPardonForm();

		void execute(Bureaucrat const &executor) const;
};

#endif
