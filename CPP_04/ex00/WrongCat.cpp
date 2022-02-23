/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 11:50:34 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/23 18:09:27 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "WrongAnimal.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat"){
    _type = "Default wrongcat";
    std::cout << _type << " constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & wrongcat_copy) : WrongAnimal(wrongcat_copy._type){
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

void	WrongCat::makeSound() const{
    std::cout << _type << " : wrong bla bla" << std::endl;
}
