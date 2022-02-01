/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 12:03:27 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/01 15:17:06 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int	main(int ac, char **av)
{
	Phonebook	my_phonebook;
	std::string in;

	(void)av;
	if (ac != 1){
		std::cout << "There is an error in arguments" << std::endl;
		return (1);
	}
	else if (ac == 1)
	{
		std::cout << "Welcome in my phonebook" << std::endl;
		while (1)
		{
			std::cout << "Please use one of the following instructions : ADD, SEARCH or EXIT" << std::endl;
			std::cin >> in;
			if (!in.compare("ADD"))
				my_phonebook.add();
			else if (!in.compare("SEARCH"))
				std::cout << "ole" << std::endl;
			else if (!in.compare("EXIT"))
				return (1);
		}
	}
	return (0);
}
