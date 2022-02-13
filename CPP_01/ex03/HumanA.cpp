/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:16:26 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/13 12:07:09 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

//constructeur surchargé où on initialise la classe Weapon avec la réf &weapon (envoyée depuis le main)
// Weapon &weapon récupère donc l'instance de classe construite par le constructeur surchargé de Weapon (ici instance club puis ham and cheese)
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), weaponA(weapon){
}

HumanA::~HumanA(){
}

void	HumanA::attack() const{
	std::cout << this->_name << " attacks with their ";
	std::cout << weaponA.getType() << std::endl;
}

