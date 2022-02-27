/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkintana <gkintana@student.42abudhabi.ae>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 20:59:04 by gkintana          #+#    #+#             */
/*   Updated: 2022/02/27 23:48:34 by gkintana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char	ft_toupper(char c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	return (c);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		i = 0;
		while (++i < argc)
		{
			j = 0;
			while (argv[i][j])
				std::cout << ft_toupper(argv[i][j++]);
		}
		std::cout << std::endl;
	}
	return (0);
}
