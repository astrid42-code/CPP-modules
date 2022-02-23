/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:20:30 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/23 12:19:46 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(){
	_type = "Default dog"; //initialiser au cas ou il ne serait pas utilise
    std::cout << _type << " constructor called" << std::endl;
}

Dog::Dog(std::string const &type){
	_type = type;
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(Dog const & dog_copy) {
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

void	Dog::setType(std::string sound){
    _sound = sound;
}

std::string	Dog::getType() const{
    return (_sound);
}

void	Dog::makeSound() const{
    std::cout << _type << " : waf waf" << std::endl;
}
