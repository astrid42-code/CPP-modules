/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:48:51 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/13 15:27:13 by asgaulti         ###   ########.fr       */
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

	if ((int)_str.size() == 1 && isprint(_str[0]) && !isdigit(_str[0])){
		_char = _str[0];
		_int = static_cast<int>(_char);
		_float = static_cast<float>(_char);
		_double = static_cast<double>(_char);
	}
	else if (!checkInt()){
		const char *int_cpy = _str.c_str();
		_int = atof(int_cpy);
		if (_int < 32 || _int > 126)
			_flag = 2;
		// faire de meme pour float et double :
		if (_int <= std::numeric_limits<int>::min() || _int >= std::numeric_limits<int>::max())
			_flag = 4;
		if (_flag == 0)
			_char = static_cast<int>(_int);
		_float = atof(int_cpy);
		_float = static_cast<float>(_float);
		if (_float <= std::numeric_limits<float>::min() || _float >= std::numeric_limits<float>::max())
			_float = static_cast<float>(_float);
		_double = atof(int_cpy);
		_double = static_cast<double>(_double);
		if (_double <= std::numeric_limits<double>::min() || _double >= std::numeric_limits<double>::max())
			_double = static_cast<double>(_double);
	}
	else if (checkFloat()){
		const char *float_cpy = _str.c_str();
		_float = atof(float_cpy);
		if (_float <= std::numeric_limits<float>::min() || _float >= std::numeric_limits<float>::max())
			_float = static_cast<float>(_float);
		_int = atof(float_cpy);
		_int = static_cast<int>(_int);
		if (_int < 32 || _int > 126)
			_flag = 2;
		if (_int <= std::numeric_limits<int>::min() || _int >= std::numeric_limits<int>::max())
			_flag = 4;
		if (_flag == 0){
			_char = atof(float_cpy);
			_char = static_cast<char>(_char);
		}
		_double = atof(float_cpy);
		_double = static_cast<double>(_double);
		if (_double <= std::numeric_limits<double>::min() || _double >= std::numeric_limits<double>::max())
			_double = static_cast<double>(_double);
	}
	else{
		const char *double_cpy = _str.c_str();
		_double = atof(double_cpy);
		if (_double <= std::numeric_limits<double>::min() || _double >= std::numeric_limits<double>::max())
			_double = static_cast<double>(_double);
		_int = atof(double_cpy);
		_int = static_cast<int>(_int);
		if (_int < 32 || _int > 126)
			_flag = 2;
		if (_int <= std::numeric_limits<int>::min() || _int >= std::numeric_limits<int>::max())
			_flag = 4;
		if (_flag == 0){
			_char = atof(double_cpy);
			_char = static_cast<char>(_char);
		_float = atof(double_cpy);
		_float = static_cast<float>(_float);
		if (_float <= std::numeric_limits<float>::min() || _float >= std::numeric_limits<float>::max())
			_float = static_cast<float>(_float);
		}
	}
	print();
}

bool	Convert::checkFloat(){
	int	size = (int)_str.size() - 1;
	if (_str[size] == 'f')
			return (true);
	return (false);
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
	printFloat(_float);
	printDouble(_double);
	
}

	// pour chacun, vérifier si c'est imprimable / impossible ... 
	// si c'est ok, imprimer la valeur
	// sinon imprimer Non displayable / impossible / ...
void	Convert::printChar(char _char, int _flag){
	if (_flag == 0){
		std::cout << "char : '" << _char << "'" << std::endl;
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
	
void	Convert::printFloat(float _float){
	// std::fixed pour ecrire en point fixe et non en ecriture scientifique (affichage setprecision par defaut)
	std::cout << "float : " << std::fixed << std::setprecision(1) << _float << "f" << std::endl;
	
}
	
void	Convert::printDouble(double _double){
	std::cout << "double : " << _double << std::endl;
	
}
