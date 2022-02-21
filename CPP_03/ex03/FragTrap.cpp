/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/19 16:49:53 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/21 17:31:20 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;

	_frag_hp = 100;
	_frag_ad = 100;
	
	std::cout << "FragTrap : " << this->_name << " awakes." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hit_points = 100;
	_energy_points = 100;
	_attack_damage = 30;

	_frag_hp = 100;
	_frag_ad = 100;
	
	std::cout << "FragTrap : " << this->_name << " awakes." << std::endl;
}
	
FragTrap::FragTrap(FragTrap const & fragtrap_copy) : ClapTrap(fragtrap_copy)
{
	*this = fragtrap_copy;

	_frag_hp = fragtrap_copy._frag_hp;
	_frag_ad = fragtrap_copy._frag_ad;
	
	std::cout << "FragTrap : " << _name << " copy is awake." << std::endl;
}

FragTrap::~FragTrap(void){
	std::cout << "FragTrap : " << _name << " is back in bed" << std::endl;
}

FragTrap & FragTrap::operator=(FragTrap const & fragtrap_op){
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	
	_name = fragtrap_op._name;
	_hit_points = fragtrap_op._hit_points;
	_energy_points = fragtrap_op._energy_points;
	_attack_damage = fragtrap_op._attack_damage;

	_frag_hp = fragtrap_op._frag_hp;
	_frag_ad = fragtrap_op._frag_ad;
	
	return (*this);
}

std::ostream & operator<<(std::ostream & o, FragTrap const & claptrap_op){
	o
	<< "FragTrap:" << std::endl
    << "name: " << claptrap_op.get_name() << std::endl
	<< "hit points: " << claptrap_op.get_hit() << std::endl
	<< "energy points: " << claptrap_op.get_energy() << std::endl
	<< "damage: " << claptrap_op.get_damage() << std::endl;
	return (o);
}

void FragTrap::attack(const std::string& target){
	if (_energy_points <= 0 || _hit_points <= 0){
		std::cout << _name << " stops attack" << std::endl;
		return ;
	}
	std::cout << "FragTrap " << _name << " fights " << target;
	std::cout << ", causing " << _attack_damage << " points of damage!" << std::endl;
	_energy_points--;
}

void FragTrap::takeDamage(unsigned int amount){
	if (_energy_points <= 0 || _hit_points <= 0)
		return ;
	_hit_points -= amount;
	std::cout << _name << " has been damaged by ";
	std::cout << amount << " points." << std::endl;
}

void FragTrap::beRepaired(unsigned int amount){
	if (_energy_points <= 0 || _hit_points <= 0)
		return ;
	_hit_points += amount;
	std::cout << _name << " has been healed and gets ";
	std::cout << _hit_points << " hit points." << std::endl;
	_energy_points--;
}

void FragTrap::highFivesGuys(){
	std::cout << "Hey, my name is " << _name << ", let's highfive!" << std::endl;
}
