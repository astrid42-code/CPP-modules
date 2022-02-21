/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 15:39:54 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/21 17:31:06 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	// _name = "Unknown";
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	
	_scav_ep = 50;
	
	std::cout << "ScavTrap : " << _name << " is here." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	// le nom hérité de ClapTrap peut etre récupéré directement sous forme
	// : ClapTrap(name)
	_name = name;
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;

	_scav_ep = 50;
	
	std::cout << "ScavTrap : " << _name << " is here." << std::endl;
}
	
ScavTrap::ScavTrap(ScavTrap const & scavtrap_copy) : ClapTrap(scavtrap_copy)
{
	*this = scavtrap_copy;
	_scav_ep = scavtrap_copy._scav_ep;
	
	std::cout << "ScavTrap : " << _name << " copy is here." << std::endl;
}

ScavTrap::~ScavTrap(void){
	std::cout << "ScavTrap : " << _name << " is down" << std::endl;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & scavtrap_op){
	std::cout << "ScavTrap copy assignment operator called" << std::endl;

	_name = scavtrap_op._name;
	_hit_points = scavtrap_op._hit_points;
	_energy_points = scavtrap_op._energy_points;
	_attack_damage = scavtrap_op._attack_damage;

	_scav_ep = scavtrap_op._scav_ep;
	
	return (*this);
}

std::ostream & operator<<(std::ostream & o, ScavTrap const & claptrap_op){
	o
	<< "ScavTrap:" << std::endl
    << "name: " << claptrap_op.get_name() << std::endl
	<< "hit points: " << claptrap_op.get_hit() << std::endl
	<< "energy points: " << claptrap_op.get_energy() << std::endl
	<< "damage: " << claptrap_op.get_damage() << std::endl;
	return (o);
}

void ScavTrap::attack(const std::string& target){
	if (_energy_points <= 0 || _hit_points <= 0){
		std::cout << _name << " won't be able to attack anymore" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " is attacking poor " << target;
	std::cout << ", causing " << _attack_damage << " points of damage!" << std::endl;
	_energy_points--;
}

void ScavTrap::takeDamage(unsigned int amount){
	if (_energy_points <= 0 || _hit_points <= 0)
		return ;
	_hit_points -= amount;
	std::cout << _name << " has been ravaged by ";
	std::cout << amount << " damage points." << std::endl;
}

void ScavTrap::beRepaired(unsigned int amount){
	if (_energy_points <= 0 || _hit_points <= 0)
		return ;
	_hit_points += amount;
	std::cout << _name << " has been healed and gets ";
	std::cout << _hit_points << " hit points." << std::endl;
	_energy_points--;
}

void ScavTrap::guardGate(){
	std::cout << _name << " is in GateKeeper mode." << std::endl;
}
