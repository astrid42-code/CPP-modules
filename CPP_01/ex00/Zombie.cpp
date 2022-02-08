/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 11:19:55 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/08 16:21:02 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string zombie_name) : name(zombie_name){
	this->name = zombie_name;
	std::cout << "Calling zombie contructor" << std::endl;
}

Zombie::~Zombie(){
	std::cout << this->name << " has been definitely killed!" << std::endl;
}
		
void	Zombie::announce(void){
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string	Zombie::get_name(void) const{
	return (this->name);
}