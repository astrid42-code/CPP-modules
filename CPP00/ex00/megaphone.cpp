/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:02:26 by asgaulti          #+#    #+#             */
/*   Updated: 2021/12/10 15:30:29 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //std::cout
#include <string> //std::string

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
	{
		std::string str(av[i]);
		for (size_t j = 0; j < str.length();  j++)
			std::cout << (char)toupper(str[j]); // caster le retour de toupper pour l'avoir en char
		if (i != ac - 1)
			std::cout << ' ';
	}
	std::cout << std::endl;
	return (0);
}

// a verifier : toupper de C autorise (ou celui de c++)???