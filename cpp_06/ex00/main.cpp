/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 21:38:18 by gkintana          #+#    #+#             */
/*   Updated: 2022/06/17 00:04:08 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "converter.hpp"

int main(int argc, char **argv) {
	if (argc == 2) {
		Converter scalar;
		scalar.setLiteral(argv[1]);
		scalar.convert();
	} else {
		std::cerr << RED "Invalid Arguments" DEFAULT << std::endl;
		return 1;
	}
	return 0;
}
