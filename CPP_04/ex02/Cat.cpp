/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:19:42 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/26 12:32:20 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)  {
    this->_type = "Cat";
    std::cout << "Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & cat_copy){
	*this = cat_copy;
    std::cout << "Cat copy called" << std::endl;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;   
}

Cat & Cat::operator=(Cat const & cat_op){
    std::cout << "Cat copy assignment operator called" << std::endl;
	this->_type = cat_op.getType();
	return (*this);
}

AAnimal & Cat::operator=(AAnimal const & animal_op){
    std::cout << "AAnimal copy assignment operator for cat called" << std::endl;
	this->_type = animal_op.getType();
	return (*this);
}

void	Cat::makeSound() const{
    std::cout << _type << " : meow meow" << std::endl;
}
