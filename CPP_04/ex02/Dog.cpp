/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:20:30 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/28 11:18:46 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") {
    // this->_type  = "Dog";
    // std::cout << _type << " default constructor called" << std::endl;
}

Dog::Dog(Dog const & dog_copy) : Animal(dog_copy._type) {
	*this = dog_copy;
    std::cout << "Dog copy called" << std::endl;
}

Dog::~Dog(){
    //delete [] _brain_dog;
    // std::cout << "Dog destructor called" << std::endl;   
}

Dog & Dog::operator=(Dog const & dog_op){
    std::cout << "Dog copy assignment operator called" << std::endl;

	_type = dog_op.getType();
	return (*this);
}
Animal & Dog::operator=(Animal const & dog_op){
    std::cout << "Dog copy assignment operator called" << std::endl;

	_type = dog_op.getType();
	return (*this);
}

void	Dog::makeSound() const{
    std::cout << _type << " : waf waf" << std::endl;
}
