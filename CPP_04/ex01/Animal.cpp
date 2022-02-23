/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:20:10 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/23 18:11:52 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
	_type = "Default animal"; //initialiser au cas ou il ne serait pas utilise
    std::cout << _type << " constructor called" << std::endl;
}

Animal::Animal(std::string type) : _type(type){
    std::cout << _type << " constructor called" << std::endl;
}

Animal::Animal(Animal const & animal_copy){
	*this = animal_copy;
    std::cout << "Animal copy called" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;   
}

Animal & Animal::operator=(Animal const & animal_op){
    std::cout << "Animal copy assignment operator called" << std::endl;

	_type = animal_op._type;
	return (*this);
}

std::string	Animal::getType() const{
    return (_type);
}

void	Animal::makeSound() const{
    std::cout << _type << " : bla bla" << std::endl;
}
