/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:48:51 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/08 21:01:22 by astridgault      ###   ########.fr       */
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

Convert::Convert(std::string arg){
	
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
	
}

void	Convert::print(){
	
}