/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:30:06 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/16 21:56:10 by astridgault      ###   ########.fr       */
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

Fixed &Fixed::operator=(const Fixed& fixed_op){
	std::cout << "Copy assignment operator = called" << std::endl;
	this->_value = fixed_op.getRawBits();
	return (*this);
}
/*
Fixed &Fixed::operator>(const Fixed& fixed_op){
	std::cout << "Copy assignment operator > called" << std::endl;
	this->_value = fixed_op.getRawBits();
	return (*this);
}

Fixed &Fixed::operator>=(const Fixed& fixed_op){
	std::cout << "Copy assignment operator >= called" << std::endl;
	this->_value = fixed_op.getRawBits();
	return (*this);
}

Fixed &Fixed::operator<(const Fixed& fixed_op){
	std::cout << "Copy assignment operator < called" << std::endl;
	this->_value = fixed_op.getRawBits();
	return (*this);
}

Fixed &Fixed::operator<=(const Fixed& fixed_op){
	std::cout << "Copy assignment operator <= called" << std::endl;
	this->_value = fixed_op.getRawBits();
	return (*this);
}

Fixed &Fixed::operator==(const Fixed& fixed_op){
	std::cout << "Copy assignment operator == called" << std::endl;
	this->_value = fixed_op.getRawBits();
	return (*this);
}

Fixed &Fixed::operator!=(const Fixed& fixed_op){
	std::cout << "Copy assignment operator != called" << std::endl;
	this->_value = fixed_op.getRawBits();
	return (*this);
}
*/

Fixed &Fixed::operator+=(const Fixed& fixed_op){
	std::cout << "Copy assignment operator += called" << std::endl;
	this->_value += fixed_op.getRawBits();
	return (*this);
}

Fixed &Fixed::operator-=(const Fixed& fixed_op){
	std::cout << "Copy assignment operator -= called" << std::endl;
	this->_value -= fixed_op.getRawBits();
	return (*this);
}

// pb dans le result du *
Fixed &Fixed::operator*=(const Fixed& fixed_op){
	std::cout << "Copy assignment operator *= called" << std::endl;
	this->_value *= fixed_op.getRawBits();
	return (*this);
}

Fixed &Fixed::operator/=(const Fixed& fixed_op){
	std::cout << "Copy assignment operator /= called" << std::endl;
	this->_value /= fixed_op.getRawBits();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const & fixed_op){
	o << fixed_op.toFloat(); // bitshift pour mettre en float
	return (o);
}

int Fixed::getRawBits( void ) const{
	//std::cout << "getRawBits member function called" << std::endl;
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
