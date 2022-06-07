/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/18 17:43:24 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/07 00:29:33 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
	std::cout << PURPLE "Brain Constructor" DEFAULT << std::endl;
}

Brain::Brain(Brain const &source) {
	std::cout << PURPLE "Brain Copy Constructor" DEFAULT << std::endl;
	*this = source;
}

Brain &Brain::operator=(Brain const &data) {
	std::cout << PURPLE "Brain Copy Assignment Operator" DEFAULT << std::endl;
	(void)data;
	return *this;
}

Brain::~Brain() {
	std::cout << RED "Brain Destructor" DEFAULT << std::endl;
}
