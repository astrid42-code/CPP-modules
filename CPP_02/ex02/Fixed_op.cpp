/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_op.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:20:30 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/17 14:28:36 by astridgault      ###   ########.fr       */
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
	Fixed	fixed(this->toFloat() - fixed_op.toFloat());
	*this = fixed;
	return (*this);
}

Fixed &Fixed::operator-(const Fixed& fixed_op){
	std::cout << "Copy assignment operator - called" << std::endl;
	Fixed	fixed(this->toFloat() - fixed_op.toFloat());
	*this = fixed;
	return (*this);
}

// pb dans le result du *
Fixed &Fixed::operator*(const Fixed& fixed_op){
	std::cout << "Copy assignment operator * called" << std::endl;
	// créer une instance de classe temporaire pour multiplier les valeurs en float
	// (et non avec le fixed qui est en bitshift après le constructeur) 
	Fixed	fixed(this->toFloat() * fixed_op.toFloat());
	*this = fixed;
	return (*this);
}

Fixed &Fixed::operator/(const Fixed& fixed_op){
	std::cout << "Copy assignment operator / called" << std::endl;
	Fixed	fixed(this->toFloat() / fixed_op.toFloat());
	*this = fixed;
	return (*this);
}

std::ostream & operator<<(std::ostream & o, Fixed const & fixed_op){
	o << fixed_op.toFloat(); // bitshift pour mettre en float
	return (o);
}
