/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:20:58 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/07 00:41:39 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include "Animal.hpp"

/*---------------------------------- CLASS ----------------------------------*/
class Cat : public Animal {
	public:
		Cat();
		Cat(Cat const &source);
		Cat &operator=(Cat const &data);
		~Cat();
		void makeSound() const;
};

#endif
