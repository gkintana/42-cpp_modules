/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/12 22:14:10 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/13 01:55:32 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include "Form.hpp"
#include <cstdlib>

/*---------------------------------- CLASS ----------------------------------*/
class RobotomyRequestForm : public Form {
	private:
		std::string const m_target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(std::string const target);
		RobotomyRequestForm(RobotomyRequestForm const &source);
		RobotomyRequestForm &operator=(RobotomyRequestForm const &data);
		~RobotomyRequestForm();

		void execute(Bureaucrat const &executor) const;
};

#endif
