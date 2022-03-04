/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/04 16:26:56 by gkintana         ###   ########.fr       */
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
		void			setFirstName(std::string firstName);
		void			setLastName(std::string lastName);
		void			setNickname(std::string nickname);
		void			setPhoneNumber(std::string phoneNumber);
		void			setDarkestSecret(std::string darkestSecret);		
		std::string		getFirstName(void);
		std::string		getLastName(void);
		std::string		getNickname(void);
		std::string		getPhoneNumber(void);
		std::string		getDarkestSecret(void);
};

#endif
