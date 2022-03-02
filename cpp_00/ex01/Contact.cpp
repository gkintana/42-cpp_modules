/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/02 11:15:31 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::saveFirstName(std::string userInput) {
	firstName = userInput;
}

void	Contact::saveLastName(std::string userInput) {
	lastName = userInput;
}

void	Contact::saveNickname(std::string userInput) {
	nickname = userInput;
}

void	Contact::savePhoneNumber(std::string userInput) {
	phoneNumber = userInput;
}

void	Contact::saveDarkestSecret(std::string userInput) {
	darkestSecret = userInput;
}

std::string	Contact::giveFirstName(void) {
	return (firstName);
}

std::string	Contact::giveLastName(void) {
	return (lastName);
}

std::string	Contact::giveNickname(void) {
	return (nickname);
}

std::string	Contact::givePhoneNumber(void) {
	return (phoneNumber);
}

std::string	Contact::giveDarkestSecret(void) {
	return (darkestSecret);
}
