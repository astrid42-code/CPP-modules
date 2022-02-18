/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/18 16:14:16 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/18 16:31:07 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap(void){
	this->_hit_points = 10;
	this->_energy_points = 10;
	this->_attack_damage = 0;
	std::cout << this->_name << " is born." << std::endl;
}

ClapTrap(std::string name, int hp, int ep, int ad) :
	_name(name), _hit_points(hp), _energy_points(ep), _attack_damage(ad){
		this->_hit_points = 10;
		this->_energy_points = 10;
		this->_attack_damage = 0;
		std::cout << this->_name << " is born." << std::endl;
	}
		
		
ClapTrap(ClapTrap const & claptrap_copy){
	*this = claptrap_copy;
	std::cout << this->name << " copy is born." << std::endl;
}
		
		
~ClapTrap(void){
	std::cout << "I'm so dead" << std::endl;
}

void attack(const std::string& target){
	
}

void takeDamage(unsigned int amount){
	
}

void beRepaired(unsigned int amount){
	
}
