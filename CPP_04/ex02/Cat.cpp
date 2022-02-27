/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:19:42 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/27 15:48:25 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Cat::Cat(void) : Animal("Cat") {
    // this->_type = "Cat";
	// this->_brain_cat = nullptr;
    // std::cout << _type << " default constructor called" << std::endl;
}

Cat::Cat(Cat const & cat_copy) : Animal(cat_copy._type) {
	*this = cat_copy;
    std::cout << "Cat copy called" << std::endl;
}

Cat::~Cat(){
    //delete [] _brain_cat;
    // std::cout << "Cat destructor called" << std::endl;   
}

Cat & Cat::operator=(Cat const & cat_op){
    std::cout << "Cat copy assignment operator called" << std::endl;
	this->_type = cat_op.getType();
	return (*this);
}

// Animal & Cat::operator=(Animal const & animal_op){
//     std::cout << "Animal copy assignment operator for cat called" << std::endl;
// 	this->_type = animal_op.getType();
// 	return (*this);
// }

void	Cat::makeSound() const{
    std::cout << _type << " : meow meow" << std::endl;
}
