/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:02:26 by asgaulti          #+#    #+#             */
/*   Updated: 2022/01/31 13:34:00 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream> //std::cout
#include <string> //std::string
#include <locale> //std::locale et std::toupper

int	main(int ac, char **av)
{
	std::locale	loc;
	
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
	{
		std::string str(av[i]);
		for (size_t j = 0; j < str.length();  j++)
			std::cout << toupper(str[j], loc);
		if (i != ac - 1)
			std::cout << ' ';
	}
	std::cout << std::endl;
	return (0);
}
