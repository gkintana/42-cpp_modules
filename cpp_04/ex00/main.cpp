/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:43:39 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/17 22:43:30 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void doRecommendedTests(void) {
	const Animal *meta = new Animal;
	const Animal *j = new Dog;
	const Animal *i = new Cat;

	std::cout << CYAN << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << DEFAULT;

	delete meta;
	delete j;
	delete i;
}

void doWrongAnimalTests(void) {
	const WrongAnimal *wrongAnimal = new WrongAnimal;
	const WrongAnimal *wrongCat = new WrongCat;

	std::cout << CYAN << wrongAnimal->getType() << ": ";
	wrongAnimal->makeSound();
	std::cout << wrongCat->getType() << ": ";
	wrongCat->makeSound();
	std::cout << DEFAULT;
	
	delete wrongAnimal;
	delete wrongCat;
}

void doExtraTests(void) {
	Animal animal;
	Dog dogClass;
	Cat catClass;
	Animal &dog = dogClass;
	Animal &cat = catClass;
	
	std::cout << CYAN << animal.getType() << ": ";
	animal.makeSound();
	std::cout << dog.getType() << ": ";
	dog.makeSound();
	std::cout << cat.getType() << ": ";
	cat.makeSound();
	std::cout << DEFAULT;
}

int	main(void) {
	std::cout << YELLOW "Recommended Tests" DEFAULT << std::endl;
	doRecommendedTests();
	std::cout << std::endl << YELLOW "Wrong Animal Tests" DEFAULT << std::endl;
	doWrongAnimalTests();
	std::cout << std::endl << YELLOW "Extra Tests" DEFAULT << std::endl;
	doExtraTests();

	return 0;
}
