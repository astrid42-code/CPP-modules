/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/12 12:59:39 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/12 20:17:15 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Whatever.hpp"

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
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	return 0;
}