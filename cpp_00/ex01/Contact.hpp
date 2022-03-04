/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/04 11:12:57 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
# include <iostream>

/*---------------------------------- CLASS ----------------------------------*/
class	Contact {
	private:
		std::string		m_firstName;
		std::string		m_lastName;
		std::string		m_nickname;
		std::string		m_phoneNumber;
		std::string		m_darkestSecret;
	
	public:
		void			setFirstName(std::string userInput);
		void			setLastName(std::string userInput);
		void			setNickname(std::string userInput);
		void			setPhoneNumber(std::string userInput);
		void			setDarkestSecret(std::string userInput);		
		std::string		getFirstName(void);
		std::string		getLastName(void);
		std::string		getNickname(void);
		std::string		getPhoneNumber(void);
		std::string		getDarkestSecret(void);
};

#endif
