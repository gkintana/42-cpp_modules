/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:43:39 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/06 23:48:04 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void doSubjectTests() {
	const Animal *meta = new Animal;
	const Animal *j = new Dog;
	const Animal *i = new Cat;

	std::cout << CYAN << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	std::cout << DEFAULT;

	delete i;
	delete j;
	delete meta;
}

void doWrongAnimalTests() {
	const WrongAnimal *wrongAnimal = new WrongAnimal;
	const WrongAnimal *wrongCat = new WrongCat;

	std::cout << CYAN << wrongAnimal->getType() << ": ";
	wrongAnimal->makeSound();
	std::cout << wrongCat->getType() << ": ";
	wrongCat->makeSound();
	std::cout << DEFAULT;

	delete wrongCat;
	delete wrongAnimal;
}

void doExtraTests() {
	Animal animal;
	Dog dogClass;
	Cat catClass;
	Animal &dog = dogClass, &cat = catClass;

	std::cout << CYAN << animal.getType() << ": ";
	animal.makeSound();
	std::cout << dog.getType() << ": ";
	dog.makeSound();
	std::cout << cat.getType() << ": ";
	cat.makeSound();
	std::cout << DEFAULT;
}

int	main() {
	std::cout << YELLOW "Subject Tests" DEFAULT << std::endl;
	doSubjectTests();
	std::cout << YELLOW "\nWrong Animal Tests" DEFAULT << std::endl;
	doWrongAnimalTests();
	std::cout << YELLOW "\nExtra Tests" DEFAULT << std::endl;
	doExtraTests();

	return 0;
}
