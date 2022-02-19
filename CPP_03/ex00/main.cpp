/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:13:09 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/19 21:19:27 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void ){
	ClapTrap	lulu("Lucie");
	ClapTrap	lu(lulu);
	
	std::cout << lulu << std::endl;
	std::cout << std::endl;
	
	for (int i = 0; i < 10; i++){
		lulu.attack("Johan");
		lulu.takeDamage(3);
		lulu.beRepaired(2);	
	}
	std::cout << std::endl;
	std::cout << lulu << std::endl;
	
	return (0);
}