/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 01:42:10 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/05 02:23:38 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "File.hpp"

File::File() {}

File::~File() {
	m_fileRef.close();
	m_fileRep.close();
}

void	File::initialize(std::string filename, std::string s1, std::string s2) {
	m_filename = filename;
	m_s1 = s1;
	m_s2 = s2;
}

void	File::openFileRef() {
	m_fileRef.open(m_filename);
	if (!m_fileRef) {
		std::cout << m_filename << " not found" << std::endl;
	} else {
		std::cout << "Success!" << std::endl;
	}
}

void	File::createRep() {
	m_fileRep.open(m_filename + ".replace");
	if (!m_fileRep) {
		std::cout << m_filename + ".replace" << " not found" << std::endl;
	} else {
		std::cout << "Success!" << std::endl;
	}
}

void	File::copyToRep() {
	std::string	temp;
	
	while (std::getline(m_fileRef, temp)) {
		std::size_t	start = temp.find(m_s1);
		if (start != std::string::npos) {
			temp.erase(start, m_s1.length());
			temp.insert(start, m_s2);
		} else {
			std::cout << m_s1 << " not found in string" << std::endl;
		}
		m_fileRep << temp << std::endl;
	}
}
