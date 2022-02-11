/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:15:43 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/10 17:32:17 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(void){
}

Weapon::Weapon(std::string weapon) : _weapon(weapon){
}

Weapon::~Weapon()
{
}

const std::string &Weapon::getType() const{
    return (this->_weapon);
}

void	Weapon::setType(const std::string &new_weapon){
    this->_weapon = new_weapon;
}
