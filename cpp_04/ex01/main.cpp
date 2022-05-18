/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:43:39 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/18 23:52:35 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void doRecommendedTests() {
	const Animal *j = new Dog;
	const Animal *i = new Cat;

	delete i;
	delete j;
}

void doArrayTests() {
	Animal *array[10];

	for (int i = 0; i < 10 / 2; i++) {
		array[i] = new Dog;
	} for (int i = 5; i < 10; i++) {
		array[i] = new Cat;
	} for (int i = 0; i < 10; i++) {
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
	return 0;
}
