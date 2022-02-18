/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 11:37:20 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/18 10:57:04 by astridgault      ###   ########.fr       */
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
    this->_value = n << this->_bits; // bitshift pour décaler la virgule fixe (*2^8 chaque bit)
    //std::cout << "_value = " << _value << std::endl;
}

Fixed::Fixed(const float f) : _value(f){
    std::cout << "Float constructor called" << std::endl;
    // convertit le float en virgule fixe
	this->_value = roundf(f * (1 << _bits)); // * (1 << _bits)) equivalent de * 2 puissance 8
	// bitshift de 8 pour 1 (00000001 > le 1 prend la position 9)
	// et devient le chiffre le plus a droite de la partie entiere 
	
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
