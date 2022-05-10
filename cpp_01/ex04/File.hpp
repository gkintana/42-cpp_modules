/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 01:39:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/10 22:26:28 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_HPP
#define FILE_HPP

/*------------------------------- COLOR CODES -------------------------------*/
#define DEFAULT		"\033[0m"
#define RED			"\033[0;31m"
#define GREEN		"\033[0;32m"
#define YELLOW		"\033[0;33m"
#define PURPLE		"\033[0;35m"
#define CYAN		"\033[0;36m"

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
#define ARG_INC		"Error!\nIncorrect arguments"
#define EXPECTED	"\nExpected: ./exercise_04 [1] [2] [3]\n"
#define INFO_01		"Where:\n  [1] = file to open\n  [2] = string to replace\n"
#define INFO_02		"  [3] = string replacement"
#define ARG_SAME	"Error!\ns1 and s2 are the same"
#define NO_FILE		" not found"
#define OPEN		"Opened "
#define DOT_REP		".replace"
#define CREATE		"Creating "
#define FAILED		"Failed to create "
#define COPY		" and copying contents of "
#define SUMMARY		"\nSummary of Changes:"
#define BP			"  • \""
#define FOUND		"\" found in line ("
#define REPLACE		"), replaced with \""
#define CLOSE		"Closed "

/*-------------------------------- LIBRARIES --------------------------------*/
#include <iostream>
#include <fstream>

/*---------------------------------- CLASS ----------------------------------*/
class File {
	private:
		std::string m_filename;
		std::string m_s1;
		std::string m_s2;
		std::ifstream m_fileRef;
		std::ofstream m_fileRep;
	public:
		File();
		~File();
		void initialize(std::string filename, std::string s1, std::string s2);
		bool openFileRef();
		bool createRep();
		void copyToRep();
		void closeFiles();
};

#endif
