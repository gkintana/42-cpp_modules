/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:59:37 by gkintana          #+#    #+#             */
/*   Updated: 2022/03/04 02:45:44 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
# define ATK	" attacks with their "

/*--------------------------------- LIBRARY ---------------------------------*/
# include "Weapon.hpp"

/*---------------------------------- CLASS ----------------------------------*/
class	HumanA {
	private:
		std::string		m_name;
		Weapon			&m_type;
	public:
		HumanA(std::string name, Weapon &type);
		~HumanA(void);
		void			attack(void);
};

#endif
