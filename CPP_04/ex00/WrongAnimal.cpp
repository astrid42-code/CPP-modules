/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:44:59 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/23 18:06:42 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    _type = "Default wronganimal";
    std::cout << _type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : _type(type){
    std::cout << _type << " constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & wronganimal_copy){
	*this = wronganimal_copy;
    std::cout << "WrongAnimal copy called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal destructor called" << std::endl;   
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & wronganimal_copy){
    std::cout << "WrongAnimal copy assignment operator called" << std::endl;

	_type = wronganimal_copy._type;
	return (*this);
}

std::string	WrongAnimal::getType() const{
    return (_type);
}

void	WrongAnimal::makeSound() const{
    std::cout << _type << " : wrong bla bla" << std::endl;
}
