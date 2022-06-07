/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:20:58 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/07 15:52:09 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include "Animal.hpp"
#include "Brain.hpp"

/*---------------------------------- CLASS ----------------------------------*/
class Cat : public Animal {
	private:
		Brain *m_brain;
	public:
		Cat();
		Cat(Cat const &source);
		Cat &operator=(Cat const &data);
		~Cat();
		void makeSound() const;
		void setIdeas();
		void shareIdeas();
};

#endif
