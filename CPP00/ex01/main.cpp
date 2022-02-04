/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 12:03:27 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/04 13:49:05 by astridgault      ###   ########.fr       */
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
			if (std::cin.eof())
        	{
            	std::cout << "Goodbye !" << std::endl;
            	exit(0);
       		}
			std::cout << "Please use one of the following instructions : ADD, SEARCH or EXIT" << std::endl;
			std::getline(std::cin, in);
			if (in == "ADD")
				my_phonebook.add();
			else if (in == "SEARCH")
				my_phonebook.search();
			else if (in == "EXIT")
				break ;
		}
	}
	return (0);
}
/*
pbs :
- please use one... du départ s'écrit 2 fois après un search 
*/