/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 16:13:10 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/22 14:36:10 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main() {
	Harl simulator;

	simulator.complain("DEBUG");
	simulator.complain("INFO");
	simulator.complain("WARNING");
	simulator.complain("ERROR");
	std::cout << GREEN LINE LINE DEFAULT << std::endl;
	simulator.complain("debug");
	simulator.complain("info");
	simulator.complain("warning");
	simulator.complain("error");
	std::cout << GREEN LINE LINE DEFAULT << std::endl;
	simulator.complain("May I speak to your manager?");
	simulator.complain("How dare you speak to me that way!");
	simulator.complain("I need an apology right now!");
	simulator.complain("");
	return 0;
}
