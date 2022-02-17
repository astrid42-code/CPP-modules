/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:15:43 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/17 12:07:39 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void){
}

// récupère l'instance de classe club (puis ham and cheese)
Weapon::Weapon(std::string weapon) : _weapon(weapon){
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType() const{
    return (this->_weapon);
}

void	Weapon::setType(std::string new_weapon){
    this->_weapon = new_weapon;
}
