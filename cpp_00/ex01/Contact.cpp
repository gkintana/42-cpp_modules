/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/04 11:14:14 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::setFirstName(std::string firstName) {
	m_firstName = firstName;
}

void	Contact::setLastName(std::string lastName) {
	m_lastName = lastName;
}

void	Contact::setNickname(std::string nickname) {
	m_nickname = nickname;
}

void	Contact::setPhoneNumber(std::string phoneNumber) {
	m_phoneNumber = phoneNumber;
}

void	Contact::setDarkestSecret(std::string darkestSecret) {
	m_darkestSecret = darkestSecret;
}

std::string	Contact::getFirstName(void) {
	return (m_firstName);
}

std::string	Contact::getLastName(void) {
	return (m_lastName);
}

std::string	Contact::getNickname(void) {
	return (m_nickname);
}

std::string	Contact::getPhoneNumber(void) {
	return (m_phoneNumber);
}

std::string	Contact::getDarkestSecret(void) {
	return (m_darkestSecret);
}
