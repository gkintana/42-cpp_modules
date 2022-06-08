/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 09:58:40 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/08 09:56:18 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	std::cout << GREEN "Dog Constructor" DEFAULT << std::endl;
	this->m_type = "Dog";
	this->m_brain = new Brain();
	setIdeas();
}

Dog::Dog(Dog const &source) : Animal() {
	std::cout << GREEN "Dog Copy Constructor" DEFAULT << std::endl;
	*this = source;
}

Dog	&Dog::operator=(Dog const &data) {
	std::cout << GREEN "Dog Copy Assignment Operator" DEFAULT << std::endl;
	this->m_type = data.m_type;
	this->m_brain = new Brain();
	setIdeas();
	return *this;
}

Dog::~Dog() {
	delete this->m_brain;
	std::cout << RED "Dog Destructor" DEFAULT << std::endl;
}

void Dog::makeSound() const {
	std::cout << "\"Woof\"" << std::endl;
}

void Dog::setIdeas() {
	std::string dailyGoals[5] = { "eat some chocolate 😋", 
								  "play outside! 🥏",
								  "get some sleep 💤",
								  "drink water 🌊",
								  "watch a movie 📺" };
	for (int i = 0; i < 100; i++) {
		this->m_brain->m_ideas[i] = dailyGoals[std::rand() % 5];
	}
}

void Dog::shareIdeas() {
	std::cout << PURPLE "Top 5 Ideas" DEFAULT << std::endl;
	for (int i = 0; i < 5; i++) {
		std::cout << DEFAULT "    Idea No. " << i + 1 << " is to ";
		std::cout << this->m_brain->m_ideas[i] << std::endl;
	}
}
