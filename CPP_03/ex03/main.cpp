/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:13:09 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/19 17:05:23 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"

int	main( void ){
	ClapTrap	lulu("Lucie");
	DiamondTrap	max("Maxime");
	
	// for (int i = 0; i < 5; i++){
		lulu.attack("Johan");
		lulu.takeDamage(3);
		lulu.beRepaired(2);	
	// }

	// for (int i = 0; i < 5; i++){
		max.attack("Julien");
		max.takeDamage(10);
		max.beRepaired(5);
		max.highFivesGuys();	
	// }
	
	return (0);
}

/* heritage

factoriser des cptmts d'une serie de classes differentes aux comportements assez similaires
 et les rassembler dans une meme classe
 ensuite les objets derives pourront utiliser ces cptmts

*/

// question : pk cree t il un claptrap par defaut? : car scavtrap herite de claptrap?