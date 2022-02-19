/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:14:16 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/18 18:58:23 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	this->_name = "";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << "Default is born." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name){
		this->_hit_points = 10;
		this->_energy_points = 10;
		this->_attack_damage = 0;
		std::cout << this->_name << " is born." << std::endl;
}
	
ClapTrap::ClapTrap(ClapTrap const & claptrap_copy){
	*this = claptrap_copy;
	std::cout << this->_name << " copy is born." << std::endl;
}
		
		
ClapTrap::~ClapTrap(void){
	std::cout << "I'm so dead" << std::endl;
}

void ClapTrap::attack(const std::string& target){
	std::cout << "Claptrap" << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_points--;
	this->_hit_points--;
}

void ClapTrap::takeDamage(unsigned int amount){
	this->_attack_damage = amount;
}

void ClapTrap::beRepaired(unsigned int amount){
	(void)amount;
	this->_energy_points--;
	this->_hit_points--;
}
