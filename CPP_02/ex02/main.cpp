/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 16:27:57 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/16 19:51:23 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a(3); // quelle est la valeur de a? (constructeur par défaut non?)
//	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	Fixed const b(5);
	
	std::cout << a << std::endl;
/*	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
*/	std::cout << b << std::endl;

	a += b;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	a -= b;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	a *= b;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
	a /= b;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	
/*	std::cout << Fixed::min( a, b ) << std::endl;
	std::cout << Fixed::max( a, b ) << std::endl;
*/	
	return (0);
}
