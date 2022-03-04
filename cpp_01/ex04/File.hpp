/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   File.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 01:39:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/05 02:22:19 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FILE_HPP
# define FILE_HPP


# include <iostream>
# include <fstream>


class	File {
	private:
		std::string		m_filename;
		std::string		m_s1;
		std::string		m_s2;
		std::ifstream	m_fileRef;
		std::ofstream	m_fileRep;
	public:
		File();
		~File();
		void		initialize(std::string filename, std::string s1, std::string s2);
		void		openFileRef();
		void		createRep();
		void		copyToRep();
};

#endif
