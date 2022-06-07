/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:43:39 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/08 00:18:51 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main() {
	const Animal *j = new Dog;
	const Animal *i = new Cat;

	/*
		in the event that we uncomment the following code below it should
		display some error messages during compilation since we are trying to
		instantiate an object from a class with a pure virtual function, also
		known as an abstract class
	*/

	// const Animal k;
	// k.makeSound();
	// const Animal *l = new Animal;
	// l->makeSound();
	// delete l;

	std::cout << CYAN "Dog: ";
	j->makeSound();
	std::cout << CYAN "Cat: ";
	i->makeSound();

	delete i;
	delete j;

	return 0;
}
