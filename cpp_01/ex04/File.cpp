/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 01:42:10 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/29 22:46:21 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File() {}

File::~File() {}

void File::initialize(std::string filename, std::string s1, std::string s2) {
	this->m_filename = filename;
	this->m_replacement = m_filename;
	this->m_s1 = s1;
	this->m_s2 = s2;
}

bool File::openFileRef() {
	m_fileRef.open(m_filename.c_str());
	if (!m_fileRef) {
		std::cerr << m_filename << NO_FILE << std::endl;
		return false;
	}
	std::cout << GREEN OPEN << m_filename << DEFAULT << std::endl;
	return true;
}

bool File::createRep() {
	std::cout << CYAN CREATE << m_replacement.append(DOT_REP) << DEFAULT << std::endl;
	m_fileRep.open(m_replacement.c_str());
	if (!m_fileRep) {
		std::cerr << RED FAILED << m_replacement << DEFAULT << std::endl;
		return false;
	}
	std::cout << GREEN OPEN << m_replacement << COPY << m_filename << DEFAULT << std::endl;
	return true;
}

void File::copyToRep() {
	std::string	temp;
	
	std::cout << YELLOW SUMMARY << std::endl;
	for (int i = 1; std::getline(m_fileRef, temp); i++) {
		std::size_t	start = temp.find(m_s1);
		if (start != std::string::npos) {
			std::cout << BP << m_s1 << FOUND << i << REPLACE << m_s2 << "\"" << std::endl;
			temp.erase(start, m_s1.length());
			temp.insert(start, m_s2);
		}
		m_fileRep << temp << std::endl;
	}
}

void File::closeFiles() {
	m_fileRef.close();
	std::cout << "\n" PURPLE CLOSE << m_filename << std::endl;
	m_fileRep.close();
	std::cout << CLOSE << m_replacement << DEFAULT << std::endl;
}
