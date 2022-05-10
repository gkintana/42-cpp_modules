/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 22:59:37 by gkintana          #+#    #+#             */
/*   Updated: 2022/05/10 22:28:07 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
#define HUMAN_A_HPP

/*------------------------ PRINT TO STANDARD OUTPUT -------------------------*/
#define ATTACK	" attacks with their "

/*--------------------------------- LIBRARY ---------------------------------*/
#include "Weapon.hpp"

/*---------------------------------- CLASS ----------------------------------*/
class HumanA {
	private:
		std::string m_name;
		Weapon &m_type;
	public:
		HumanA(std::string name, Weapon &type);
		~HumanA(void);
		void attack(void);
};

#endif
