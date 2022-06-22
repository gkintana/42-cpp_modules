/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/22 16:36:26 by gkintana         ###   ########.fr       */
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
#define REG_KO		"Contact list not updated"

#define TITLE		"My Awesome PhoneBook!\n\nAvailable Commands:\n" \
					"  • Add\t   = Register a New Contact\n" \
					"  • Search = Show All Saved Contacts\n" \
					"  • Exit   = Close Phonebook\n"
#define PROMPT		"Command: "

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

#define SEARCH_01	"\nProvide an index number to learn more about a specific contact.\n" \
					"To end search process, leave field empty or set it to zero.\n\n"
#define SEARCH_02	"Index Number: "
#define SEARCH_03	"Search Process Complete\n"
#define CANCEL		"Search Process Cancelled"
#define KO_INDEX	"Invalid Contact Index"
#define NO_INDEX	"Contact Index Does Not Exist"
#define NUM_KO		"Invalid Phone Number"
#define REG_ERR_01	"Invalid input, please try again"
#define REG_ERR_02	"Field cannot be left empty"

#define SPEC_01		"\nContact Index ["
#define SPEC_02		"]'s Complete Information"
#define SPEC_03		"First Name\t: "
#define SPEC_04		"Last Name\t: "
#define SPEC_05		"Nickname\t: "
#define SPEC_06		"Phone Number\t: "
#define SPEC_07		"Darkest Secret\t: "

/*------------------------------- IDENTIFIERS -------------------------------*/
#define ALPHANUM		"0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"
#define new_reg			1
#define replace_reg		0

/*-------------------------------- LIBRARIES --------------------------------*/
#include "Contact.hpp"
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <csignal>

/*---------------------------------- CLASS ----------------------------------*/
class PhoneBook {
	private:
		Contact m_list[8];
		int m_index;
		int m_replace;

		void saveInfo(std::string field, int type, int function, bool &eof);
		bool registrationType(int type);
		bool checkRegistration(int type);
		bool askSpecificContact(int i);
		void displaySpecificContact(int total);

	public:
		PhoneBook();
		~PhoneBook();

		bool registerContact();
		bool displayAllContacts();
};

#endif
