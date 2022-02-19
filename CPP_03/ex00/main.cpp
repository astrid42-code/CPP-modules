/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:13:09 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/18 18:58:40 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main( void ){
	ClapTrap	lulu("Lucie");
	
	while (this->_energy_points != 0 || this->_hit_points != 0){
		lulu.attack("Johan");
		lulu.takeDamage(3);
		lulu.beRepaired(1);
	}
	return (0);
}