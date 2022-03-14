/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/14 20:13:50 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/14 21:06:35 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>

/*---------------------------------- CLASS ----------------------------------*/
class	Brain {
	public:
		Brain(void);
		Brain(Brain const &source);
		~Brain(void);
		Brain			&operator=(Brain const &data);
		std::string		ideas[100];		
};

#endif
