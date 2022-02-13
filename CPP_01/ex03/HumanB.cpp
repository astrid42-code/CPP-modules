/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:16:48 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/13 13:59:10 by asgaulti         ###   ########.fr       */
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
    std::cout << this->_weaponB->getType() << std::endl; // -> car _weaponB est un ptr
}

void	HumanB::setWeapon(Weapon &tmp){
    this->_weaponB = &tmp; // _weaponB est un ptr donc on veut lui assigner l'adresse de tmp
    //return (this->_weaponB);
}

// comment modifier la deuxième arme (qui est changée dans le main)?