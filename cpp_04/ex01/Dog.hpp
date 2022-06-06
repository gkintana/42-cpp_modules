/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 09:55:47 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/07 00:06:47 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include "Animal.hpp"
#include "Brain.hpp"

/*---------------------------------- CLASS ----------------------------------*/
class Dog : public Animal {
	private:
		Brain *m_brain;
	public:
		Dog();
		Dog(Dog const &source);
		Dog &operator=(Dog const &data);
		~Dog();
		void makeSound() const;
};

#endif
