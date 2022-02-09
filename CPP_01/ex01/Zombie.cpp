/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:31:25 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/09 11:53:16 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie()  {

	std::cout << "Calling zombie contructor " << this->name << std::endl;
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

std::string	Zombie::set_name(std::string zombie_name) {
	this->name = zombie_name;
	return (this->name);
}