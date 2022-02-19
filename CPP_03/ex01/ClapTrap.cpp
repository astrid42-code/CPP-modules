/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:14:16 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/19 16:35:38 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void){
	this->_name = "Unknown";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << "ClapTrap : " << this->_name << " is born." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _name(name){
		this->_hit_points = 10;
		this->_energy_points = 10;
		this->_attack_damage = 0;
		std::cout << "ClapTrap : " << this->_name << " is born." << std::endl;
}
	
ClapTrap::ClapTrap(ClapTrap const & claptrap_copy){
	*this = claptrap_copy;
	std::cout << "ClapTrap : " << this->_name << " copy is born." << std::endl;
}
		
		
ClapTrap::~ClapTrap(void){
	std::cout << "ClapTrap : " << this->_name << " is so dead" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & claptrap_op){
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	// initialiser les attributs 
	this->_name = claptrap_op._name;
	this->_hit_points = claptrap_op._hit_points;
	this->_energy_points = claptrap_op._energy_points;
	this->_attack_damage = claptrap_op._attack_damage;
	return (*this);
}

void ClapTrap::attack(const std::string& target){
	if (this->_energy_points <= 0 || this->_hit_points <= 0){
		std::cout << this->_name << " can't attack anymore" << std::endl;
		return ;
	}
	std::cout << "Claptrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount){
	if (this->_energy_points <= 0 || this->_hit_points <= 0)
		return ;
	this->_hit_points -= amount;
	std::cout << this->_name << " has taken ";
	std::cout << amount << " damage points." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
	if (this->_energy_points <= 0 || this->_hit_points <= 0)
		return ;
	this->_hit_points += amount;
	std::cout << this->_name << " has been repaired and gets ";
	std::cout << this->_hit_points << " hit points." << std::endl;
	this->_energy_points--;
}
