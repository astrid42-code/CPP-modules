/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:13:09 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/21 15:21:52 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main( void ){
	ClapTrap	lulu("Lucie");
	ScavTrap	lison("Elise");
	
	std::cout << std::endl;
	std::cout << lulu << std::endl;
	std::cout << lison << std::endl;
	
	lulu.attack("Johan");
	lulu.takeDamage(3);
	lulu.beRepaired(2);	

	lison.attack("Simon");
	lison.takeDamage(10);
	lison.beRepaired(5);
	lison.guardGate();

	std::cout << std::endl;
	std::cout << lison << std::endl;
	std::cout << lulu << std::endl;
	
	return (0);
}
