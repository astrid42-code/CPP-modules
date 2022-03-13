/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 12:59:39 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/13 12:59:07 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Type.hpp"

// templates : syntaxe permettant d'écrire des patrons de morceaux de code
// des "codes à trou" et c'est le compilateur qui va compléter les trous
// en utilisant le types qui nous intéressent

/*
int main(){
	int a = 42;
	int	b = 24;

	std::cout << "Max of " << a << " and " << b << "is : ";
	std::cout << max<int>(a, b) << std::endl; 
	// la fct max, typée int, avec 2 paramètres int = explicit instanciation
	std::cout << "Max of " << a << " and " << b << "is : ";
	std::cout << max(a, b) << std::endl; // = implicit instanciation (sans cast)

	// autres tests à prévoir : avec != types (char, float); avec les différentes fcts demandées (max / min / swap)
	

	return (0);
}
*/

int main( void ) {
	int a = 2;
	int b = 3;

	std::cout << "Test 1 : int" << std::endl;
	std::cout << "before swap : a = " << a << ", b = " << b << std::endl;
	::swap( a, b );
	std::cout << "after swap : a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;

	std::cout << std::endl;
	
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::cout << "Test 2 : string" << std::endl;
	std::cout << "before swap : c = " << c << ", d = " << d << std::endl;
	::swap(c, d);
	std::cout << "after swap : c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	std::cout << std::endl;
	
	float s = 42.6f;
	float t = 42.2f;

	std::cout << "Test 3 : float" << std::endl;
	std::cout << "before swap : s = " << s << ", t = " << t << std::endl;
	::swap( s, t );
	std::cout << "after swap : s = " << s << ", t = " << t << std::endl;
	std::cout << "min( s, t ) = " << ::min( s, t ) << std::endl;
	std::cout << "max( s, t ) = " << ::max( s, t ) << std::endl;

	std::cout << std::endl;

	char i = 'i';
	char j = 'j';

	std::cout << "Test 4 : char" << std::endl;
	std::cout << "before swap : i = " << i << ", j = " << j << std::endl;
	::swap( i, j );
	std::cout << "after swap : i = " << i << ", j = " << j << std::endl;
	std::cout << "min( i, j ) = " << ::min( i, j ) << std::endl;
	std::cout << "max( i, j ) = " << ::max( i, j ) << std::endl;

	std::cout << std::endl;
/*	
	float x = 42.6f;
	int y = 42;

	std::cout << "Test 5 : failure test" << std::endl; // cf msg erreur à la compil
	std::cout << "before swap : x = " << x << ", y = " << y << std::endl;
	::swap( x, y );
	std::cout << "after swap : x = " << x << ", y = " << y << std::endl;
	std::cout << "min( x, y ) = " << ::min( x, y ) << std::endl;
	std::cout << "max( x, y ) = " << ::max( x, y ) << std::endl;

	std::cout << std::endl;
*/	
	return 0;
}