/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:13:09 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/19 10:51:48 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void ){
	ClapTrap	lulu("Lucie");
	
	for (int i = 0; i < 10; i++){
		lulu.attack("Johan");
		lulu.takeDamage(3);
		lulu.beRepaired(2);	
	}

	
	return (0);
}