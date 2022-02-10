/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 12:23:35 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/09 15:03:01 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int	main(int ac, char **av){
	(void)ac;
	(void)av;
	
	std::string	brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain;
	std::string	&stringREF = brain;

// address de ptr ou address pointee par ptr???
	std::cout << "ADDRESSES :" << std::endl;
	std::cout << "str brain : " << &brain << std::endl;
	std::cout << "stringPTR : " << stringPTR << std::endl;
	std::cout << "stringREF : " << &stringREF << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "VALUES :" << std::endl;
	std::cout << "str brain : " << brain << std::endl;
	std::cout << "stringPTR : " << *stringPTR << std::endl;
	std::cout << "stringREF : " << stringREF << std::endl;

	return (0);
}