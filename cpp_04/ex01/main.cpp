/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:43:39 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/07 22:32:33 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

void doSubjectTests() {
	const Animal *j = new Dog;
	const Animal *i = new Cat;

	delete i;
	delete j;
}

void doArrayTests() {
	int size = 6;
	const Animal *array[size];

	for (int i = 0; i < size; i++) {
		if (i < size / 2) {
			array[i] = new Dog;
		} else {
			array[i] = new Cat;
		}
	}
	for (int i = size - 1; i > -1; i--) {
		delete array[i];
	}
}

void doDeepCopyTests() {
	Dog *dog = new Dog;

	std::cout << CYAN "Dog: ";
	dog->makeSound();
	dog->shareIdeas();

	Dog dogCopyCon(*dog);
	std::cout << CYAN "Dog Clone from Copy Constructor: ";
	dogCopyCon.makeSound();
	dogCopyCon.shareIdeas();

	Dog dogCopyOp = *dog;
	std::cout << CYAN "Dog Clone from Copy Assignment Operator: ";
	dogCopyOp.makeSound();
	dogCopyOp.shareIdeas();

	delete dog;
}

int	main() {
	std::cout << YELLOW "Subject Tests" DEFAULT << std::endl;
	doSubjectTests();
	std::cout << std::endl << YELLOW "Animal Array Tests" DEFAULT << std::endl;
	doArrayTests();
	std::cout << std::endl << YELLOW "Deep Copy Tests" DEFAULT << std::endl;
	doDeepCopyTests();

	return 0;
}
