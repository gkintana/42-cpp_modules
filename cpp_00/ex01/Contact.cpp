/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/10 21:39:48 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void) {}

Contact::~Contact(void) {}

void Contact::setFirstName(std::string firstName) {
	this->m_firstName = firstName;
}

void Contact::setLastName(std::string lastName) {
	this->m_lastName = lastName;
}

void Contact::setNickname(std::string nickname) {
	this->m_nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber) {
	this->m_phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret) {
	this->m_darkestSecret = darkestSecret;
}

std::string Contact::getFirstName(void) {
	return (this->m_firstName);
}

std::string Contact::getLastName(void) {
	return (this->m_lastName);
}

std::string Contact::getNickname(void) {
	return (this->m_nickname);
}

std::string Contact::getPhoneNumber(void) {
	return (this->m_phoneNumber);
}

std::string Contact::getDarkestSecret(void) {
	return (this->m_darkestSecret);
}
