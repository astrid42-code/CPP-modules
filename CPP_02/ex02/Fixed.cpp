/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:30:06 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/18 14:24:36 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::Fixed(const int n) : _value(n){
	std::cout << "Int constructor called" << std::endl;
	// convertit l'int en int à virgule fixe
	this->_value = n << this->_bits;
	//std::cout << "_value = " << _value << std::endl;
}

Fixed::Fixed(const float f) : _value(f){
	std::cout << "Float constructor called" << std::endl;
	// convertit le float en virgule fixe
	this->_value = roundf(f * (1 << _bits));
}

Fixed::Fixed(const Fixed& fixed_copy){
	std::cout << "Copy constructor called" << std::endl;
	// this->_value = fixed_copy.getRawBits(); // copier la valeur de _value
	*this = fixed_copy; // pour recopier tout en meme temps (pas uniquement la value)
}

Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const{
	return (this->_value);
}

void    Fixed::setRawBits( int const raw ){
	this->_value = raw;
}

float   Fixed::toFloat( void ) const{
	float	f = this->_value / (float)(1 << _bits);
	// calcul inverse du constructeur
	return (f);
}

int Fixed::toInt( void ) const{
	int n;

	n = this->_value;
	return (n >> this->_bits);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b){
	if (a < b)
		return (a);
	return (b);
}

Fixed const	&Fixed::min(Fixed const &a, Fixed const &b){
	if (a < b)
		return (a);
	return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b){
	if (a < b)
		return (b);
	return (a);
}

Fixed const &Fixed::max(Fixed const &a, Fixed const &b){
	if (a < b)
		return (b);
	return (a);
}
