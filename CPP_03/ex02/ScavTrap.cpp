/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:39:54 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/21 15:20:53 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_name = "Unknown";
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap : " << this->_name << " is here." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	std::cout << "ScavTrap : " << this->_name << " is here." << std::endl;
}
	
ScavTrap::ScavTrap(ScavTrap const & scavtrap_copy) : ClapTrap(scavtrap_copy)
{
	*this = scavtrap_copy;
	std::cout << "ScavTrap : " << this->_name << " copy is here." << std::endl;
}
		
		
ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap : " << this->_name << " is down" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & scavtrap_op){
	std::cout << "ScavTrap copy assignment operator called" << std::endl;

	this->_name = scavtrap_op._name;
	this->_hit_points = scavtrap_op._hit_points;
	this->_energy_points = scavtrap_op._energy_points;
	this->_attack_damage = scavtrap_op._attack_damage;
	return (*this);
}

std::ostream & operator<<(std::ostream & o, ScavTrap const & scavtrap_op){
	o
	<< "ScavTrap:" << std::endl
    << "name: " << scavtrap_op.get_name() << std::endl
	<< "hit points: " << scavtrap_op.get_hit() << std::endl
	<< "energy points: " << scavtrap_op.get_energy() << std::endl
	<< "damage: " << scavtrap_op.get_damage() << std::endl;
	return (o);
}

void ScavTrap::attack(const std::string& target){
	if (this->_energy_points <= 0 || this->_hit_points <= 0){
		std::cout << this->_name << " won't be able to attack anymore" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << this->_name << " is attacking poor " << target;
	std::cout << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_points--;
}

void ScavTrap::takeDamage(unsigned int amount){
	if (this->_energy_points <= 0 || this->_hit_points <= 0)
		return ;
	this->_hit_points -= amount;
	std::cout << this->_name << " has been ravaged by ";
	std::cout << amount << " damage points." << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount){
	if (this->_energy_points <= 0 || this->_hit_points <= 0)
		return ;
	this->_hit_points += amount;
	std::cout << this->_name << " has been healed and gets ";
	std::cout << this->_hit_points << " hit points." << std::endl;
	this->_energy_points--;
}

void ScavTrap::guardGate(){
	std::cout << this->_name << " is in GateKeeper mode." << std::endl;
}
