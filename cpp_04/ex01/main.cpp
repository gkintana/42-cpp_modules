/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:43:39 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/07 00:20:46 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void doRecommendedTests() {
	const Animal *j = new Dog;
	const Animal *i = new Cat;

	delete i;
	delete j;
}

void doArrayTests() {
	int size = 6;
	Animal *array[size];

	for (int i = 0; i < size; i++) {
		if (i < size / 2) {
			array[i] = new Dog;
		} else {
			array[i] = new Cat;
		}
	}
	for (int i = 0; i < size; i++) {
		delete array[i];
	}
}

void doDeepCopyTests() {
	Dog *dog = new Dog;
	Cat *cat = new Cat;

	Dog dogCopyCon(*dog);
	Dog dogCopyOp = *dog;
	Cat catCopyCon(*cat);
	Cat catCopyOp = *cat;

	delete cat;
	delete dog;

	std::cout << CYAN "Dog Clone from Copy Constructor: ";
	dogCopyCon.makeSound();
	std::cout << CYAN "Dog Clone from Copy Assignment Operator: ";
	dogCopyOp.makeSound();
	std::cout << CYAN "Cat Clone from Copy Constructor: ";
	catCopyCon.makeSound();
	std::cout << CYAN "Cat Clone from Copy Assignment Operator: ";
	catCopyOp.makeSound();
}

int	main(void) {
	std::cout << YELLOW "Recommended Tests" DEFAULT << std::endl;
	doRecommendedTests();
	std::cout << std::endl << YELLOW "Animal Array Tests" DEFAULT << std::endl;
	doArrayTests();
	std::cout << std::endl << YELLOW "Deep Copy Tests" DEFAULT << std::endl;
	doDeepCopyTests();
	std::cout << std::endl << YELLOW "Show Idea Tests" DEFAULT << std::endl;

	return 0;
}
