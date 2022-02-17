/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:16:48 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/17 12:06:13 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string name) : _name(name)
{
	this->_weaponB = NULL; // protection pour le cas ou on n'envoie pas de weapon
}

HumanB::~HumanB()
{
}

void	HumanB::attack() const{
	if (this->_weaponB == NULL)
		return;
    std::cout << this->_name << " attacks with their ";
    std::cout << this->_weaponB->getType() << std::endl; // -> car _weaponB est un ptr
}

void	HumanB::setWeapon(Weapon &tmp){
    this->_weaponB = &tmp; // _weaponB est un ptr donc on veut lui assigner l'adresse de tmp
    //return (this->_weaponB);
}

// comment modifier la deuxième arme (qui est changée dans le main)?