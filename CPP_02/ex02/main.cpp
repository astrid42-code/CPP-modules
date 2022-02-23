/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:27:57 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/21 10:07:31 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a; //(constructeur par défaut, a = 0)
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
//	Fixed const b(Fixed(5.05f));
	
	std::cout << std::endl;
	
	std::cout << "INCREMENTATION / DECREMENTATION"<< std::endl;
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
	
	a = 5;
	//Fixed e(3);
	Fixed e;
	e = 8;
	std::cout << "MIN/MAX\n" << std::endl;
	std::cout << "min : " << a.min( e, b ) << std::endl;
	std::cout << "max : " << b.max( a, b ) << std::endl;
	std::cout << "const min : " << Fixed::min( e, b ) << std::endl;
	std::cout << "const max : " << Fixed::max( a, b ) << std::endl;
	
	std::cout << std::endl;

	std::cout << "CALCULATIONS" << std::endl;
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

	return (0);
}

// pour chaque copy assignment operator il n'y a pas de destructor called > normal car ne detruit pas b

// int main( void ) {
// 	Fixed a;
// 	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
// 	std::cout << a << std::endl;
// 	std::cout << ++a << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << a++ << std::endl;
// 	std::cout << a << std::endl;
// 	std::cout << b << std::endl;
// 	std::cout << Fixed::max( a, b ) << std::endl;
// 	return (0);
// }