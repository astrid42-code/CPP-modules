/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:27:57 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/16 21:56:53 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a; //(constructeur par défaut, a = 0)
//	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const b(Fixed(5.05f));
//	Fixed const c(a);
	
	std::cout << a << std::endl;
/*	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
*/	std::cout << b << std::endl;
//	std::cout << c << std::endl;

	a = b;
	std::cout << a << std::endl;
	std::cout << b << std::endl;

	a += b;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
//	std::cout << c << std::endl;
	
	a -= b;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
//	std::cout << c << std::endl;
	
	a *= b;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
//	std::cout << c << std::endl;
	
	a /= b;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
//	std::cout << c << std::endl;
	
/*	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
*/	
	return (0);
}

// pb1: pour chaque copy assignment operator il n'y a pas de destructor called
// pb2: résultat * chelou
