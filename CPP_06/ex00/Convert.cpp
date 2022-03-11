/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:48:51 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/11 09:38:48 by astridgault      ###   ########.fr       */
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
	_str(str), _char(0), _int(0), _double(0), _float(0), _flag(0){
}

Convert::Convert(const Convert &conv_cp){
	_str = conv_cp._str;
	_char = conv_cp._char;
	_int = conv_cp._int;
	_double = conv_cp._double;
	_float = conv_cp._float;
	_flag = conv_cp._flag;
}

Convert::~Convert(){
}

Convert	& Convert::operator=(const Convert &conv_op){
	_str = conv_op._str;
	_char = conv_op._char;
	_int = conv_op._int;
	_double = conv_op._double;
	_float = conv_op._float;
	_flag = conv_op._flag;
	return (*this);
}

void	Convert::checkType(){

//	for (int i = 0; i < (int)_str.size(); i++){
		if ((int)_str.size() == 1 && isprint(_str[0]) && !isdigit(_str[0])){
			_char = _str[0];
			_int = static_cast<int>(_char);
			_float = static_cast<float>(_char);
			_double = static_cast<double>(_char);
		}
		else if (!checkInt()){ // si c un int
		// à gérer: les int max et min
		// résultats floats et doubles à vérifier
			const char *int_cpy = _str.c_str();
			_int = atof(int_cpy);
			if (_int <= 0 || _int > 127) // ou plutôt fct c++ printable?
				_flag = 2;
			_char = static_cast<int>(_int);
			_float = static_cast<float>(_int);
			_double = static_cast<double>(_int);
		}
//	}
	print();
			//std::cout << "coucou" << std::endl;
	// _type = 1 (char) 2 (int) 3 (float) 4 (double)
}

bool	Convert::checkInt(){
	for (int i = 0; i < (int)_str.size(); i++){
		if (_str[i] == '.' || _str[i] == 'f')
			return (true);
	}
	return (false);
}



void	Convert::print(){
	// prévoir pour chaque print les flags pour dire si ce sera impossible ou non displayable
	printChar(_char, _flag);
	printInt(_int, _flag);
	printFloat(_float, _flag);
	printDouble(_double, _flag);
	
}

	// pour chacun, vérifier si c'est imprimable / impossible ... 
	// si c'est ok, imprimer la valeur
	// sinon imprimer Non displayable / impossible / ...
void	Convert::printChar(char _char, int _flag){
	if (_flag == 0){
		std::cout << "char : " << _char << std::endl;
	} // flag 1 : char impossible; 4 : char et int impossibles
	else if (_flag == 1 || _flag == 4){
		std::cout << "char : impossible" << std::endl;
	}
	else if (_flag == 2){
		std::cout << "char : Non displayable" << _char << std::endl;
	}
}

void	Convert::printInt(int _int, int _flag){
	// flag 4 : char et int impossibles
	if (_flag == 4){
		std::cout << "int : impossible" << std::endl;
	}
	else
		std::cout << "int : " << _int << std::endl;
	
}
	
void	Convert::printFloat(float _float, int _flag){
	(void)_flag;
	std::cout << "float : " << _float << "f" << std::endl;
	
}
	
void	Convert::printDouble(double _double, int _flag){
	(void)_flag;
	std::cout << "double : " << _double << std::endl;
	
}