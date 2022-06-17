/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:47:40 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/17 18:35:37 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main() {
	std::string strArray[] = { "42", "Abu", "Dhabi", "is", "Awesome!" };
	std::cout << YELLOW "String Array" DEFAULT << std::endl
			  << PURPLE "  ⮩  Array Elements" DEFAULT << std::endl;
	iter(*strArray, sizeof(strArray) / sizeof(std::string), print);

	char charArray[] = { 'a', 'b', 'c', 'D', 'E', 'F', '~', '!', '@' };
	printAll("\n\nCharacter Array", charArray);

	int intArray[] = { 21, 42, 98, 72, 123, 789, 456 };
	printAll("\nInt Array", intArray);

	double doubleArray[] = { 123.123123, 42.424242, 23.987654, 1.23456, 987.6543210 };
	printAll("\nDouble Array", doubleArray);
}
