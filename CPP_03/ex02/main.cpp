/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:13:09 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/19 21:34:56 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int	main( void ){
	ClapTrap	lulu("Lucie");
	FragTrap	max("Maxime");
	
	std::cout << std::endl;
	std::cout << lulu << std::endl;
	std::cout << max << std::endl;
	
	lulu.attack("Johan");
	lulu.takeDamage(3);
	lulu.beRepaired(2);	

	max.attack("Julien");
	max.takeDamage(20);
	max.beRepaired(10);
	max.highFivesGuys();	

	std::cout << std::endl;
	std::cout << max << std::endl;
	std::cout << lulu << std::endl;
	
	return (0);
}
