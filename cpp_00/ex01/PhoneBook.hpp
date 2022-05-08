/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/08 23:27:40 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

/*------------------------------- COLOR CODES -------------------------------*/
#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[1;32m"
#define YELLOW		"\033[1;33m"
#define PURPLE		"\033[0;35m"
#define CYAN		"\033[0;36m"

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
#define REG_FN		"Enter First Name\t: "
#define REG_LN		"Enter Last Name\t\t: "
#define REG_NN		"Enter Nickname\t\t: "
#define REG_PN		"Enter Phone Number\t: "
#define REG_DS		"Enter Darkest Secret\t: "
#define REG_OK		"Contact Information Successfully Registered\n"
#define REG_KO		"Found an empty field. Contact list not updated"

#define TITLE		"My Awesome PhoneBook!\n\nAvailable Commands:"
#define COMMAND		"Command: "
#define COM_ADD		"  • Add\t   = Register a New Contact"
#define COM_SEARCH	"  • Search = Show All Saved Contacts"
#define COM_EXIT	"  • Exit   = Close Phonebook\n"

#define ADD			"Adding New Contact 📇"
#define SEARCH		"Displaying Contact Information 🧐"
#define EXIT		"Terminating Program 👋"
#define ZERO		"0 Contacts Available 😅"
#define ERROR		"Please Enter a Valid Command (Add or Search or Exit)"

#define LINE		"+----------+----------+----------+----------+"
#define COL_01		"Index"
#define COL_02		"First Name"
#define COL_03		"Last Name"
#define COL_04		"Nickname"

#define SEARCH_01	"\nChoose an index number to learn more about a specific"
#define SEARCH_02	" contact,\nor press {ENTER} to end search process\n\n"
#define SEARCH_03	"Index Number: "
#define SEARCH_04	"Search Process Complete\n"
#define CANCEL		"Search Process Cancelled"
#define ALPHA_01	"Alphabetic characters don't represent an index number,\n"
#define ALPHA_02	"please provide a valid index number. You may use either\n"
#define ALPHA_03	"0 (or simply leave it blank) to end search process."
#define NO_INDEX	"Contact Index Does Not Exist"
#define NUM_KO		"Invalid Phone Number"

#define SPEC_01		"\nContact ["
#define SPEC_02		"]'s Complete Information"
#define SPEC_03		"First Name\t: "
#define SPEC_04		"Last Name\t: "
#define SPEC_05		"Nickname\t: "
#define SPEC_06		"Phone Number\t: "
#define SPEC_07		"Darkest Secret\t: "

/*------------------------------- IDENTIFIERS -------------------------------*/
#define NEW			42
#define REPLACE		-42

/*-------------------------------- LIBRARIES --------------------------------*/
#include "Contact.hpp"
#include <cstring>
#include <iomanip>
#include <iostream>

/*---------------------------------- CLASS ----------------------------------*/
class	PhoneBook {
	private:
		Contact		m_list[8];
		int			m_index;
		int			m_replace;
	public:
		PhoneBook(void);
		~PhoneBook(void);
		void		registrationType(int type);
		bool		checkRegistration(int type);
		void		registerContact(void);
		void		displayAllContacts(void);
		void		askSpecificContact(int i);
		void		displaySpecificContact(int total);
};

#endif
