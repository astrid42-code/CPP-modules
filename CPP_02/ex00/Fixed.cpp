/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 20:16:08 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/18 10:55:32 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const Fixed& fixed_copy){
	std::cout << "Copy constructor called" << std::endl;
	this->_value = fixed_copy.getRawBits(); // copier la valeur de _value
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

// peut servir à récupérer la valeur fixed_op 
//(ex : en faisant fixed_op.getRawBits() on récupère _value de l'instance courante)
// puis je peux mettre à jour la _value de mon instance courante 
// en faisant this->_value = fixed_op.getRawBits();
// puis comme je renvoie une référence sur une classe Fixed
// je déréférence mon pointeur this pour récupérer ma référence
Fixed &Fixed::operator=(const Fixed& fixed_op){
	std::cout << "Copy assignment operator called" << std::endl;
	this->_value = fixed_op.getRawBits();
	return (*this);
}

int	Fixed::getRawBits( void ) const{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_value);
}

void Fixed::setRawBits( int const raw ){
	this->_value = raw;
}