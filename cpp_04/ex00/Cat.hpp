/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 15:20:58 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/13 23:53:45 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include "Animal.hpp"

/*---------------------------------- CLASS ----------------------------------*/
class	Cat: public Animal {
	public:
		Cat(void);
		Cat(Cat const &source);
		~Cat(void);
		Cat				&operator=(Cat const &data);
		// std::string		getType(void) const;
		void			makeSound(void) const;
};

#endif
