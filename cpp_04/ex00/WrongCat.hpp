/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 13:23:10 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/07 00:41:48 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include "WrongAnimal.hpp"

/*---------------------------------- CLASS ----------------------------------*/
class WrongCat : public WrongAnimal {
	public:
		WrongCat();
		WrongCat(WrongCat const &source);
		WrongCat &operator=(WrongCat const &data);
		~WrongCat();
		void makeSound() const;
};

#endif
