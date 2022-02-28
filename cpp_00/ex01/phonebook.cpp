/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/02/28 23:43:08 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

// https://www.tutorialspoint.com/cplusplus/cpp_class_access_modifiers.htm

// void	phonebook::save_first_name(std::string input)
// {
// 	first_name = input;
// }

void	phonebook::register_contact(void)
{
	std::cout << REG_FN;
	std::cin >> this->first_name;
	std::cout << REG_LN;
	std::cin >> this->last_name;
	std::cout << REG_NN;
	std::cin >> this->nickname;
	std::cout << REG_PN;
	std::cin >> this->number;
	std::cout << REG_DS;
	std::cin >> this->secret;
	std::cout << GREEN << this->first_name << REG_OK DEFAULT << std::endl;
}

void	display_commands(void)
{
	std::cout << COM_ADD << std::endl;
	std::cout << COM_SEARCH << std::endl;
	std::cout << COM_EXIT << std::endl;
}

std::string	str_upper(std::string input)
{
	int	i;
	
	i = -1;
	while (input[++i])
		input[i] = toupper(input[i]);
	return (input);
}

int	main(void)
{
	phonebook	contacts[8];
	std::string	command;
	int			i;

	std::cout << "PHONEBOOK v1.00" << std::endl;
	std::cout << "    Available Commands:" << std::endl;
	std::cout << TAB COM_ADD << std::endl;
	std::cout << TAB COM_SEARCH << std::endl;
	std::cout << TAB COM_EXIT << std::endl;

	i = 0;
	while (1)
	{
		std::getline(std::cin, command);
		if (str_upper(command) == "ADD")
		{
			std::cout << YELLOW ADD DEFAULT << std::endl;
			contacts[i].register_contact();
			if (++i == 8)
				i = 0;
		}
		else if (str_upper(command) == "SEARCH")
		{
			if (i == 0)
				std::cout << CYAN ZERO DEFAULT << std::endl;
			else
				std::cout << YELLOW SEARCH DEFAULT << std::endl;
		}
		else if (str_upper(command) == "EXIT")
		{
			std::cout << YELLOW EXIT DEFAULT << std::endl;
			break ;
		}
		else
			std::cout << RED ERROR DEFAULT << std::endl;
	}
	return (0);
}
