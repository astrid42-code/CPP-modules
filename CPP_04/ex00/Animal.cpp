/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:20:10 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/22 12:14:36 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(Animal const & animal_copy) const{
    std::cout << "Animal copy called" << std::endl;
}

Animal::~Animal(){
    std::cout << "Animal destructor called" << std::endl;   
}

Animal & operator=(Animal const & animal_op){
    
}

void		setType(){
    
}

std::string	getType(){
    return ();
}

void		makeSound(){
    
}
