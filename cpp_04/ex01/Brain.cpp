/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 21:06:40 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/14 23:45:52 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "+42 IQ from Brain Contructor" << std::endl;	
}

Brain::Brain(Brain const &source) {
	std::cout << "+42 IQ from Brain Copy Constructor" << std::endl;
	*this = source;
}

Brain	&Brain::operator=(Brain const &data) {
	std::cout << "+42 IQ from Brain Copy Assignment Operator" << std::endl;
	return (*this);
}

Brain::~Brain(void) {
	std::cout << "-42 IQ due to Brain Deconstructor" << std::endl;
}
