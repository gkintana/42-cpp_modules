/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 01:42:10 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/10 21:56:54 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File() {}

File::~File() {}

void File::initialize(std::string filename, std::string s1, std::string s2) {
	m_filename = filename;
	m_s1 = s1;
	m_s2 = s2;
}

bool File::openFileRef() {
	m_fileRef.open(m_filename.c_str());
	if (!m_fileRef) {
		std::cout << m_filename << NO_FILE << std::endl;
		return (false);
	} else {
		std::cout << GREEN OPEN << m_filename << DEFAULT << std::endl;
		return (true);
	}
}

bool File::createRep() {
	std::string	fileRep = m_filename + DOT_REP;
	std::cout << CYAN CREATE << fileRep << DEFAULT << std::endl;
	m_fileRep.open(fileRep.c_str());
	if (!m_fileRep) {
		std::cout << RED FAILED << fileRep << DEFAULT << std::endl;
		return (false);
	} else {
		std::cout << GREEN OPEN << fileRep << COPY;
		std::cout << m_filename << DEFAULT << std::endl;
		return (true);
	}
}

void File::copyToRep() {
	std::string	temp;
	int	i = 1;
	
	std::cout << YELLOW SUMMARY << std::endl;
	while (std::getline(m_fileRef, temp)) {
		std::size_t	start = temp.find(m_s1);
		if (start != std::string::npos) {
			std::cout << BP << m_s1 << FOUND << i << REPLACE;
			std::cout << m_s2 << "\"" << std::endl;
			temp.erase(start, m_s1.length());
			temp.insert(start, m_s2);
		}
		m_fileRep << temp << std::endl;
		i++;
	}
}

void File::closeFiles() {
	m_fileRef.close();
	std::cout << "\n" PURPLE CLOSE << m_filename << std::endl;
	m_fileRep.close();
	std::cout << CLOSE << m_filename + DOT_REP << DEFAULT << std::endl;
}
