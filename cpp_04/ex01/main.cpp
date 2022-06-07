/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:43:39 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/08 00:08:17 by gkintana         ###   ########.fr       */
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
	Dog dog;
	std::cout << CYAN "Dog: ";
	dog.makeSound();
	dog.shareIdeas();
	
	Dog dogCopy(dog);
	std::cout << CYAN "Dog Clone: ";
	dogCopy.makeSound();
	dogCopy.shareIdeas();

	Cat cat;
	std::cout << CYAN "Cat: ";
	cat.makeSound();
	cat.shareIdeas();

	Cat catCopy = cat;
	std::cout << CYAN "Cat Clone: ";
	catCopy.makeSound();
	catCopy.shareIdeas();
}

int	main() {
	std::cout << YELLOW "Subject Tests" DEFAULT << std::endl;
	doSubjectTests();
	std::cout << YELLOW "\nAnimal Array Tests" DEFAULT << std::endl;
	doArrayTests();
	std::cout << YELLOW "\nDeep Copy Tests" DEFAULT << std::endl;
	doDeepCopyTests();

	return 0;
}
