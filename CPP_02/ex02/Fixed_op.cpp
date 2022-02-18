/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed_op.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 12:20:30 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/18 13:46:29 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


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

// operateurs de comparaison

// vérifie que variable est strictement supérieure à une valeur
// ex : x > 3 : retourne 1 si x supérieur à 3, sinon 0
bool Fixed::operator>(const Fixed& fixed_op) const{
	//std::cout << "Copy assignment operator > called" << std::endl;
	return (this->_value > fixed_op.getRawBits()); // retourne le résultat de la comparaison (1 ou 0)
}

bool Fixed::operator>=(const Fixed& fixed_op) const{
	//std::cout << "Copy assignment operator >= called" << std::endl;
	return (this->_value >= fixed_op.getRawBits());
}

bool Fixed::operator<(const Fixed& fixed_op) const{
	//std::cout << "Copy assignment operator < called" << std::endl;
	return (this->_value < fixed_op.getRawBits());
}

bool Fixed::operator<=(const Fixed& fixed_op) const{
	//std::cout << "Copy assignment operator <= called" << std::endl;
	return (this->_value <= fixed_op.getRawBits());
}

// compare 2 valeurs et vérifie leur égalité
bool Fixed::operator==(const Fixed& fixed_op) const{
	//std::cout << "Copy assignment operator == called" << std::endl;
	return (this->_value == fixed_op.getRawBits());
}

// vérifie qu'une variable est != d'une valeur
bool Fixed::operator!=(const Fixed & fixed_op) const{
	//std::cout << "Copy assignment operator != called" << std::endl;
	return (this->_value != fixed_op.getRawBits());
}

// Operateurs de calcul

Fixed & Fixed::operator+(const Fixed & fixed_op){
//	std::cout << "Copy assignment operator + called" << std::endl;
	Fixed	fixed(this->toFloat() + fixed_op.toFloat());
	*this = fixed;
	return (*this);
}

Fixed & Fixed::operator-(const Fixed & fixed_op){
//	std::cout << "Copy assignment operator - called" << std::endl;
	Fixed	fixed(this->toFloat() - fixed_op.toFloat());
	*this = fixed; 
	return (*this); 
}

Fixed & Fixed::operator*(const Fixed & fixed_op){
//	std::cout << "Copy assignment operator * called" << std::endl;
	// créer une instance de classe temporaire pour multiplier les valeurs en float
	// (et non avec le fixed qui est en bitshift après le constructeur) 
	Fixed	fixed(this->toFloat() * fixed_op.toFloat());
	*this = fixed;
	return (*this); // renvoie l'objet (this est déréférencé)
}

Fixed & Fixed::operator/(const Fixed & fixed_op){
//	std::cout << "Copy assignment operator / called" << std::endl;
	Fixed	fixed(this->toFloat() / fixed_op.toFloat());
	*this = fixed;
	return (*this);
}

// Opérateurs incrémentation/décrémentation

// ++i
Fixed  Fixed::operator++(void){
	this->_value++;
	return (*this);
}

// i++
Fixed  Fixed::operator++(int){
	Fixed tmp(*this); // copie de mon instance
	this->_value++; // incrementer i
	return (tmp); // renvoyer la copie non incrémentée
}

// --i
Fixed  Fixed::operator--(void){
	this->_value--; // incrémente la valeur et la renvoie
	return (*this);
}

// i--
Fixed  Fixed::operator--(int){
	Fixed tmp(*this); // copie de mon instance 
	this->_value--;
	return (tmp);
}

// ostream opérateur

std::ostream & operator<<(std::ostream & o, Fixed const & fixed_op){
	o << fixed_op.toFloat(); // bitshift pour mettre en float
	return (o);
}
