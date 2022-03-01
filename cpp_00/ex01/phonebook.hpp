/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/01 17:28:38 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

/*------------------------------- COLOR CODES -------------------------------*/
# define DEFAULT		"\033[0m"
# define RED			"\033[0;31m"
# define GREEN			"\033[1;32m"
# define YELLOW			"\033[1;33m"
// # define PURPLE			"\033[0;35m"
# define CYAN			"\033[0;36m"

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
# define REG_FN		"Enter First Name: "
# define REG_LN		"Enter Last Name: "
# define REG_NN		"Enter Nickname: "
# define REG_PN		"Enter Phone Number: "
# define REG_DS		"Enter Darkest Secret: "
# define REG_OK		"'s Contact Information Successfully Registered\n"

# define TAB		"\t"
# define COM_ADD	"ADD\t= register a new contact"
# define COM_SEARCH	"SEARCH\t= find an existing contact"
# define COM_EXIT	"EXIT\t= close phonebook\n"

# define ADD		"\nAdding New Contact 📇"
# define SEARCH		"\nDisplaying Contact Information 🧐"
# define EXIT		"\nTerminating Program 👋"
# define ZERO		"0 Contacts Available 😅"
# define ERROR		"Please enter a valid command (ADD or SEARCH or EXIT)"


/*-------------------------------- LIBRARIES --------------------------------*/
# include <iomanip>
# include <iostream>
# include <cstring>

/*--------------------------------- CLASSES ---------------------------------*/
class	PhoneBook {
	private:
		std::string		firstName;
		std::string		lastName;
		std::string		nickname;
		std::string		number;
		std::string		secret;

	public:
		void			registerContact(void);
		// void			displayContacts(void);
		// std::string		printFirstName;
		// std::string		printLastName;
		// std::string		printNickname;
};

class	Contact {
	
};

#endif
