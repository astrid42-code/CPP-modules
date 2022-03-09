/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:48:51 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/09 13:41:49 by asgaulti         ###   ########.fr       */
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
	
}