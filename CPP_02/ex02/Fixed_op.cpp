/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_op.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:20:30 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/17 12:22:26 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*
// operateurs de comparaison

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

// Operateur arithmetiques

Fixed &Fixed::operator+(const Fixed& fixed_op){
	std::cout << "Copy assignment operator + called" << std::endl;
	this->_value += fixed_op.getRawBits();
	return (*this);
}

Fixed &Fixed::operator-(const Fixed& fixed_op){
	std::cout << "Copy assignment operator - called" << std::endl;
	this->_value -= fixed_op.getRawBits();
	return (*this);
}

// pb dans le result du *
Fixed &Fixed::operator*(const Fixed& fixed_op){
	std::cout << "Copy assignment operator * called" << std::endl;
	this->_value *= fixed_op.getRawBits();
	return (*this);
}

Fixed &Fixed::operator/(const Fixed& fixed_op){
	std::cout << "Copy assignment operator / called" << std::endl;
	this->_value /= fixed_op.getRawBits();
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const & fixed_op){
	o << fixed_op.toFloat(); // bitshift pour mettre en float
	return (o);
}
