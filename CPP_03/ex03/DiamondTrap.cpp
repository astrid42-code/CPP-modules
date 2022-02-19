/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 17:01:16 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/19 20:40:13 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamonTrap.hpp"

DiamondTrap::DiamondTrap(void){
	this->_name = "Unknown";
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << "DiamondTrap : " << this->_name << " is born." << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : _name(name){
		this->_hit_points = 10;
		this->_energy_points = 10;
		this->_attack_damage = 0;
		std::cout << "DiamondTrap : " << this->_name << " is born." << std::endl;
}
	
DiamondTrap::DiamondTrap(DiamondTrap const & diamondtrap_copy){
	*this = diamondtrap_copy;
	std::cout << "DiamondTrap : " << this->_name << " copy is born." << std::endl;
}
		
		
DiamondTrap::~DiamondTrap(void){
	std::cout << "DiamondTrap : " << this->_name << " is so dead" << std::endl;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & diamond_op){
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	// initialiser les attributs 
	this->_name = diamond_op._name;
	this->_hit_points = diamond_op._hit_points;
	this->_energy_points = diamond_op._energy_points;
	this->_attack_damage = diamond_op._attack_damage;
	return (*this);
}
// checker qui on appelle (claptrap ou autre)
std::ostream & operator<<(std::ostream & o, DiamondTrap const & claptrap_op){
	o
	<< "ScavTrap:" << std::endl
    << "name: " << claptrap_op.get_name() << std::endl
	<< "hit points: " << claptrap_op.get_hit() << std::endl
	<< "energy points: " << claptrap_op.get_energy() << std::endl
	<< "damage: " << claptrap_op.get_damage() << std::endl;
	return (o);
}
void DiamondTrap::attack(const std::string& target){
	if (this->_energy_points <= 0 || this->_hit_points <= 0){
		std::cout << this->_name << " can't attack anymore" << std::endl;
		return ;
	}
	std::cout << "DiamondTrap " << this->_name << " attacks " << target;
	std::cout << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_points--;
}

void DiamondTrap::takeDamage(unsigned int amount){
	if (this->_energy_points <= 0 || this->_hit_points <= 0)
		return ;
	this->_hit_points -= amount;
	std::cout << this->_name << " has taken ";
	std::cout << amount << " damage points." << std::endl;
}

void DiamondTrap::beRepaired(unsigned int amount){
	if (this->_energy_points <= 0 || this->_hit_points <= 0)
		return ;
	this->_hit_points += amount;
	std::cout << this->_name << " has been repaired and gets ";
	std::cout << this->_hit_points << " hit points." << std::endl;
	this->_energy_points--;
}
