/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:16:26 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/10 17:26:51 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(){
}

HumanA::HumanA(std::string name, std::string weapon) :
					_name(name), _weaponA(weapon){
}

HumanA::~HumanA(){
}

void	HumanA::attack() const{
	this->_weaponA.getType();
	std::cout << this->_name << "attacks with their ";
	std::cout << this->_weaponA << std::endl;
}

Weapon	&HumanA::get_weapon(void) const{
    return (this->_weaponA);
}
