/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:59:43 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/04 02:45:35 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
# define ATK	" attacks with their "

/*--------------------------------- LIBRARY ---------------------------------*/
# include "Weapon.hpp"

/*---------------------------------- CLASS ----------------------------------*/
class	HumanB {
	private:
		std::string		m_name;
		Weapon			*m_type;
	public:
		HumanB(std::string name);
		~HumanB(void);
		void			setWeapon(Weapon &type);
		void			attack(void);
};

#endif
