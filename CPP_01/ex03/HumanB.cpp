/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:16:48 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/13 12:35:38 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanB::attack() const{
    std::cout << this->_name << " attacks with their ";
    std::cout << _weaponB << std::endl;
}

std::string	HumanB::setWeapon(Weapon &weaponB){
    this->_weaponB = weaponB.getType();
    return (this->_weaponB);
}

// comment modifier la deuxième arme (qui est changée dans le main)?