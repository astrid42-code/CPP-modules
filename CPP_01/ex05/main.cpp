/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:07:29 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/15 14:44:29 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av){
	Karen		karen;
	std::string	complaint;
	
	(void)av;
	if (ac != 1){
		std::cout << "Error in arguments" << std::endl;
		return (1);
	}
	while (1){
		if (std::cin.eof())
        {
           	std::cout << "Goodbye !" << std::endl;
           	break;
       	}
		   std::cout << "Hi Karen, what is your complaint?" << std::endl;
		std::getline(std::cin, complaint);
		karen.complain(complaint);
	}
	return (0);
}

// 4 plaintes acceptees : debug, warning, info, error
// sinon msg d'erreur