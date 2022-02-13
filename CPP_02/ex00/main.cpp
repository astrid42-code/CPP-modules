/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/13 18:55:41 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/13 21:49:05 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// forme canonique : 
// https://eric.univ-lyon2.fr/~ricco/cours/cours/au_coeur_de_la_prg_objet_cpp.pdf
// 1 nécessité d'un constructeur de recopie :
// ex T::T(const T&)
// = copie l'objet mais après les modifs dans la copie ne touche pas l'objet initial et vice versa?
// à chaque retour d'une fct ou méthode il y aura (en plus de l'objet créé) un objet temporaire créé
// 2 et d'un opérateur d'affectation :
// ex : T& T::operator=(const T&)
//duplique un objet dans un autre

// vidéos CPP:

// polymorphisme (ou surcharge de fct)
// =définir plsrs fcts ayant le meme nom mais prenant des paramètres différents
//

// surcharge d'opérateur


// forme canonique

#include "Fixed.hpp"

int main( void ) {
	Fixed a; // pour le constructeur par défaut
	Fixed b( a ); // pour le constructeur par copie (copie a dans b)
	Fixed c; // pour l'opérateur?

	c = b; 

//	std::cout << a.getRawBits() << std::endl;
//	std::cout << b.getRawBits() << std::endl;
//	std::cout << c.getRawBits() << std::endl;

	return (0);
}