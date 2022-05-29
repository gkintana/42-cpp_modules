/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:59:59 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/29 23:29:16 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

/*--------------------------------- LIBRARY ---------------------------------*/
#include <iostream>

/*---------------------------------- CLASS ----------------------------------*/
class Weapon {
	private:
		std::string m_type;
	public:
		Weapon(std::string const weaponType);
		~Weapon(void);
		void setType(std::string weaponType);
		std::string const &getType(void);
};

#endif
