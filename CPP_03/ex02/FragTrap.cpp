/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:49:53 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/19 16:58:41 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void){
	this->_name = "Unknown";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap : " << this->_name << " awakes." << std::endl;
}

FragTrap::FragTrap(std::string name) : _name(name){
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "FragTrap : " << this->_name << " awakes." << std::endl;
}
	
FragTrap::FragTrap(FragTrap const & fragtrap_copy){
	*this = fragtrap_copy;
	std::cout << "FragTrap : " << this->_name << " copy is awake." << std::endl;
}
		
		
FragTrap::~FragTrap(void){
	std::cout << "FragTrap : " << this->_name << " is back in bed" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & fragtrap_op){
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	// initialiser les attributs 
	this->_name = fragtrap_op._name;
	this->_hit_points = fragtrap_op._hit_points;
	this->_energy_points = fragtrap_op._energy_points;
	this->_attack_damage = fragtrap_op._attack_damage;
	return (*this);
}

void FragTrap::attack(const std::string& target){
	if (this->_energy_points <= 0 || this->_hit_points <= 0){
		std::cout << this->_name << " stops attack" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << this->_name << " fights " << target;
	std::cout << ", causing " << this->_attack_damage << " points of damage!" << std::endl;
	this->_energy_points--;
}

void FragTrap::takeDamage(unsigned int amount){
	if (this->_energy_points <= 0 || this->_hit_points <= 0)
		return ;
	this->_hit_points -= amount;
	std::cout << this->_name << " has been damaged by ";
	std::cout << amount << " points." << std::endl;
}

void FragTrap::beRepaired(unsigned int amount){
	if (this->_energy_points <= 0 || this->_hit_points <= 0)
		return ;
	this->_hit_points += amount;
	std::cout << this->_name << " has been healed and gets ";
	std::cout << this->_hit_points << " hit points." << std::endl;
	this->_energy_points--;
}

void FragTrap::highFivesGuys(){
	std::cout << "Hey, my name is " << this->_name << ", let's highfive!" << std::endl;
}