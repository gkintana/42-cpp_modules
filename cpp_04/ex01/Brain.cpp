/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:43:24 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/18 21:25:31 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << PURPLE "Brain Constructor" DEFAULT << std::endl;
}

Brain::Brain(Brain const &source) {
	std::cout << PURPLE "Brain Copy Constructor" DEFAULT << std::endl;
	*this = source;
}

Brain &Brain::operator=(Brain const &data) {
	std::cout << PURPLE "Brain Copy Assignment Operator" DEFAULT << std::endl;
	(void)data;
	return *this;
}

Brain::~Brain(void) {
	std::cout << RED "Brain Deconstructor" DEFAULT << std::endl;
}

void Brain::addIdeas(std::string idea, int i) {
	this->m_ideas[i] = idea;
}

// void Brain::shareIdeas(Animal type) {
// 	for (int i = 0; i < 100; i++)
// 	{
// 		std::cout << type.m_ideas[i] << std::endl;
// 	}
// }
