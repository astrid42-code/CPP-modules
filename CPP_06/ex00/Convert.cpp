/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:48:51 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/10 16:18:39 by astridgault      ###   ########.fr       */
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

Convert::Convert(std::string str) : 
	_str(str), _type(0), _char(0), _int(0), _float(0), _double(0), _flag(0){
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

void	Convert::checkType(){

//	for (int i = 0; i < _str.size(); i++){
		
//	}

	// _type = 1 (char) 2 (int) 3 (float) 4 (double)
}

void	Convert::print(int i){
	
	// pour chacun, vérifier si c'est imprimable / impossible ... 
	// si c'est ok, imprimer la valeur
	// sinon imprimer Non displayable / impossible / ...
	printChar(_char, _flag);
	printInt(_int, _flag);
	printFloat(_float, _flag);
	printDouble(_double, _flag);
	
}

void	Convert::printChar(char _char, int _flag);{
	std::cout << "char : " << _char << std::endl;
	
}

void	Convert::printInt(int _int, int _flag){
	std::cout << "int : " << _int << std::endl;
	
}
	
void	Convert::printFloat(float _float, int _flag){
	std::cout << "float : " << _float << std::endl;
	
}
	
void	Convert::printDouble(double _double, int _flag){
	std::cout << "double : " << _double << std::endl;
	
}