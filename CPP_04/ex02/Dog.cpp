/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:20:30 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/26 12:32:50 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
    this->_type  = "Dog";
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

	this->_type = dog_op.getType();
	return (*this);
}
AAnimal & Dog::operator=(AAnimal const & dog_op){
    std::cout << "Dog copy assignment operator called" << std::endl;

	this->_type = dog_op.getType();
	return (*this);
}

void	Dog::makeSound() const{
    std::cout << _type << " : waf waf" << std::endl;
}
