/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 12:20:10 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/26 12:29:03 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::~AAnimal(){
    std::cout << "Default animal destructor called" << std::endl;
}
/* //operator absent car abstrait
AAnimal & AAnimal::operator=(AAnimal const & animal_op){
    std::cout << "Animal copy assignment operator called" << std::endl;

	_type = animal_op._type;
	return (*this);
}
*/
const std::string	& AAnimal::getType() const{
    return (this->_type);
}
