/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/02 00:45:08 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
# include <iostream>

/*---------------------------------- CLASS ----------------------------------*/
class	Contact {
	private:
		std::string		firstName;
		std::string		lastName;
		std::string		nickname;
		std::string		phoneNumber;
		std::string		darkestSecret;
	
	public:
		void			saveFirstName(std::string userInput);
		void			saveLastName(std::string userInput);
		void			saveNickname(std::string userInput);
		void			savePhoneNumber(std::string userInput);
		void			saveDarkestSecret(std::string userInput);		
		std::string		giveFirstName(void);
		std::string		giveLastName(void);
		std::string		giveNickname(void);
		std::string		givePhoneNumber(void);
		std::string		giveDarkestSecret(void);
};

#endif
