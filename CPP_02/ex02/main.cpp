/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:27:57 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/18 11:06:49 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a; //(constructeur par défaut, a = 0)
//	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const b(Fixed(5.05f));
	
/*	std::cout << std::endl;
	
	std::cout << "INCREMENTATION"<< std::endl;
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << --a << std::endl;
	std::cout << a << std::endl;
	std::cout << a-- << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
//	std::cout << c << std::endl;
*/
	std::cout << std::endl;
	
	std::cout << "ASSIGNATION"<< std::endl;
	a = b;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << std::endl;
	
	std::cout << "COMPARISONS\n" << std::endl;
	std::cout << "a > b : " << (a > b) << std::endl;
	std::cout << "a >= b : " << (a >= b) << std::endl;
	std::cout << "a < b  : " << (a < b) << std::endl;
	std::cout << "a <= b : " << (a <= b) << std::endl;
	std::cout << "a == b : " << (a == b) << std::endl;
	std::cout << "a != b : " << (a != b) << std::endl;
	
	std::cout << std::endl;

	std::cout << "CALCULATION" << std::endl;
	a + b;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	
	a - b;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	
	a * b;
	std::cout << "a = " << a << std::endl;
	std::cout << "a = " << b << std::endl;
	
	a / b;
	std::cout << "a = " << a << std::endl;
	std::cout << "a = " << b << std::endl;
	
	// std::cout << Fixed::min( a, b ) << std::endl;
	// std::cout << Fixed::max( a, b ) << std::endl;

	
	return (0);
}

// pour chaque copy assignment operator il n'y a pas de destructor called > normal car ne detruit pas b
