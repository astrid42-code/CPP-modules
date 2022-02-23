/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:20:30 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/23 17:50:07 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog"){
	_type = "Default dog"; //initialiser au cas ou il ne serait pas utilise
    std::cout << _type << " constructor called" << std::endl;
}

Dog::Dog(Dog const & dog_copy) : Animal(dog_copy._type) {
	*this = dog_copy;
    std::cout << "Dog copy called" << std::endl;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;   
}

Dog & Dog::operator=(Dog const & dog_op){
    std::cout << "Dog copy assignment operator called" << std::endl;

	_type = dog_op._type;
	return (*this);
}

void	Dog::makeSound() const{
    std::cout << _type << " : waf waf" << std::endl;
}
