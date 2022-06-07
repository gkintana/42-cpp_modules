/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 18:25:33 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/07 15:53:04 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include <cstdlib>

Cat::Cat() {
	std::cout << GREEN "Cat Constructor" DEFAULT << std::endl;
	this->m_type = "Cat";
	this->m_brain = new Brain();
	setIdeas();
}

Cat::Cat(Cat const &source) : Animal() {
	std::cout << GREEN "Cat Copy Constructor" DEFAULT << std::endl;
	*this = source;
}

Cat &Cat::operator=(Cat const &data) {
	std::cout << GREEN "Cat Copy Assignment Operator" DEFAULT << std::endl;
	this->m_type = data.m_type;
	this->m_brain = new Brain;
	setIdeas();
	return *this;
}

Cat::~Cat() {
	delete this->m_brain;
	std::cout << RED "Cat Destructor" DEFAULT << std::endl;
}

void Cat::makeSound() const {
	std::cout << "\"Meow\"" << std::endl;
}

void Cat::setIdeas() {
	std::string food[10] = { "Apple", "Orange", "Banana", "Strawberry", "Chocolate", \
							"Blueberry", "Chicken", "Shawarma", "Cake", "Watermelon" };
	for (int i = 0; i < 100; i++) {
		this->m_brain->m_ideas[i] = food[std::rand() % 9];
	}
}

void Cat::shareIdeas() {
	for (int i = 0; i < 5; i++) {
		std::cout << DEFAULT "Food Idea No. " << i + 1 << " = " << PURPLE;
		std::cout << this->m_brain->m_ideas[i] << std::endl;
	}
}
