/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:48:51 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/09 17:27:56 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

/*
1 parser l'argument recu et trouver son type
2 le convertir dans les autres valeurs
3 afficher les 4 valeurs


*/

Convert::Convert(){
	
}

Convert::Convert(std::string str){
	
}

Convert::Convert(const Convert &conv_cp){
	_char = conv_cp._char;
	_int = conv_cp._int;
	_double = conv_cp._double;
	_float = conv_cp._float;
}

Convert::~Convert(){
	
}

Convert	& Convert::operator=(const Convert &conv_op){
	_char = conv_op._char;
	_int = conv_op._int;
	_double = conv_op._double;
	_float = conv_op._float;
	return (*this);
}

void	Convert::print(){
	// pour chacun, vérifier si c'est imprimable / impossible ... 
	// si c'est ok, imprimer la valeur
	// sinon imprimer Non displayable / impossible / ...
	std::cout << "char : " << _char << std::endl;
	std::cout << "int : " << _int << std::endl;
	std::cout << "float : " << _float << std::endl;
	std::cout << "double : " << _double << std::endl;
}