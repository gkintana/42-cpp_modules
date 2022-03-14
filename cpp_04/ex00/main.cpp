/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 11:43:39 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/14 13:35:54 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void) {
	std::cout << "Recommended Tests" << std::endl;
	
	const Animal	*meta = new Animal();
	const Animal	*j = new Dog();
	const Animal	*i = new Cat;
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();

	/*-----------------------------------------------------------------------*/
	std::cout << "\nAdditional Tests" << std::endl;
	
	const WrongAnimal *w_meta = new WrongAnimal();
	const WrongAnimal *w_i = new WrongCat();

	std::cout << w_meta->getType() << ":\t";
	w_meta->makeSound();
	std::cout << w_i->getType() << ":\t";
	w_i->makeSound();

	return (0);
}
