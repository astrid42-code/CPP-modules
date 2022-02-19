/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:13:09 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/19 21:28:03 by astridgault      ###   ########.fr       */
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

// question : claptrap par défault renvoie un msg claptrap avec le name de scavtrap (est-ce bien ok?)

/* heritage

factoriser des cptmts d'une serie de classes differentes aux comportements assez similaires
 et les rassembler dans une meme classe
 ensuite les objets derives pourront utiliser ces cptmts

*/

// question : pk cree t il un claptrap par defaut? : car scavtrap herite de claptrap?