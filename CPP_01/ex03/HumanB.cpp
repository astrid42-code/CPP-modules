/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:16:48 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/10 15:43:07 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanB::HumanB()
{
}

HumanB::HumanB(std::string name) : name(name)
{
}

HumanB::~HumanB()
{
}

void	HumanA::attack() const{
    std::string weapon;

	weapon = Weapon::getType();
    std::cout << this->_name << "attacks with their ";
    std::cout << weapon << std::endl;
}