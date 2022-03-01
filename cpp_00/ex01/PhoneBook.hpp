/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/02 01:45:11 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

/*------------------------------- COLOR CODES -------------------------------*/
# define DEFAULT		"\033[0m"
# define RED			"\033[0;31m"
# define GREEN			"\033[1;32m"
# define YELLOW			"\033[1;33m"
# define PURPLE			"\033[0;35m"
# define CYAN			"\033[0;36m"

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
# define REG_FN		"Enter First Name: "
# define REG_LN		"Enter Last Name: "
# define REG_NN		"Enter Nickname: "
# define REG_PN		"Enter Phone Number: "
# define REG_DS		"Enter Darkest Secret: "
# define REG_OK		"'s Contact Information Successfully Registered\n"

# define COM_ADD	"   Add\t   = Register a New Contact"
# define COM_SEARCH	"   Search  = Show All Saved Contacts"
# define COM_EXIT	"   Exit\t   = Close Phonebook\n"

# define LINE_01	"+-------------------------------------------+"
# define LINE_02	"+----------+----------+----------+----------+"

# define ADD		"Adding New Contact 📇"
# define SEARCH		"Displaying Contact Information 🧐"
# define EXIT		"Terminating Program 👋"
# define ZERO		"0 Contacts Available 😅"
# define ERROR		"Please Enter a Valid Command (Add or Search or Exit)"

# define COL_01		"Index"
# define COL_02		"First Name"
# define COL_03		"Last Name"
# define COL_04		"Nickname"

# define SEARCH_01	"\nChoose an Index Number to Learn More About a Specific"
# define SEARCH_02	" Contact,\nor press {ENTER} to End Search Process\n\n"
# define SEARCH_03	"Index Number: "
# define CANCEL		"Search Process Cancelled"
# define NO_INDEX	"Contact Index Does Not Exist"

# define SPEC_01	"\nContact ["
# define SPEC_02	"]'s Complete Information"
# define SPEC_03	"First Name\t: "
# define SPEC_04	"Last Name\t: "
# define SPEC_05	"Nickname\t: "
# define SPEC_06	"Phone Number\t: "
# define SPEC_07	"Darkest Secret\t: "

/*-------------------------------- LIBRARIES --------------------------------*/
# include "Contact.hpp"
# include <cstring>
# include <iomanip>
# include <iostream>

/*---------------------------------- CLASS ----------------------------------*/
class	PhoneBook {
	private:
		Contact		list[8];
		int			index;
		int			oldest;

	public:
		void		registerContact();
		void		displayAllContacts();
		void		displaySpecificContact(int total);
};

#endif
