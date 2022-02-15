/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 17:07:29 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/15 14:39:33 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av){
	Karen		karen;
	std::string	complaint;
	
	while (1){
		if (std::cin.eof())
        {
           	std::cout << "Goodbye !" << std::endl;
           	exit(0);
       	}
		   std::cout << "Hi Karen, what is your complaint?" << std::endl;
		std::getline(std::cin, complaint);
		karen.complain(complaint);
	}
	return (0);
}

// 4 complaintes acceptees : debug, warning, info, error
// sinon msg d'erreur