/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:19:42 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/23 14:16:48 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(){
	_type = "Default cat"; //initialiser au cas ou il ne serait pas utilise
    std::cout << _type << " constructor called" << std::endl;
}

Cat::Cat(std::string const &type){
	_type = type;
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & cat_copy) {
	*this = cat_copy;
    std::cout << "Cat copy called" << std::endl;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;   
}

Cat & Cat::operator=(Cat const & cat_op){
    std::cout << "Cat copy assignment operator called" << std::endl;

	_type = cat_op._type;
	return (*this);
}

void	Cat::setType(std::string type){
    _type = type;
}

std::string	Cat::getType() const{
    return (_type);
}

void	Cat::makeSound() const{
    std::cout << _type << " : meow meow" << std::endl;
}
