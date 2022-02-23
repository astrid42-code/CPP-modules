/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:50:34 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/23 14:08:38 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(){
	_type = "Default wrongcat"; //initialiser au cas ou il ne serait pas utilise
    std::cout << _type << " constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & wrongcat_copy){
	*this = wrongcat_copy;
    std::cout << "WrongCat copy called" << std::endl;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat destructor called" << std::endl;   
}

WrongCat & WrongCat::operator=(WrongCat const & wrongcat_copy){
    std::cout << "WrongCat copy assignment operator called" << std::endl;

	_type = wrongcat_copy._type;
	return (*this);
}

void	WrongCat::setType(std::string type){
    _type = type;
}

std::string	WrongCat::getType() const{
    return (_type);
}

void	WrongCat::makeSound() const{
    std::cout << _type << " : wrong bla bla" << std::endl;
}
