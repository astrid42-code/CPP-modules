/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:13:09 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/19 20:27:09 by astridgault      ###   ########.fr       */
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
	max.takeDamage(10);
	max.beRepaired(5);
	max.highFivesGuys();	

	std::cout << std::endl;
	std::cout << max << std::endl;
	std::cout << lulu << std::endl;
	
	return (0);
}

/* heritage

factoriser des cptmts d'une serie de classes differentes aux comportements assez similaires
 et les rassembler dans une meme classe
 ensuite les objets derives pourront utiliser ces cptmts

*/

// question : pk cree t il un claptrap par defaut? : car scavtrap herite de claptrap?