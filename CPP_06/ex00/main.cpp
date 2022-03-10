/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:47:48 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/10 14:48:03 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <locale>

int	parse(std::string const &str){
	std::locale loc;
	// si chaine vide return 0
	if (str == "")
		return (1);
	// si char tout seul (str.length() == 1) et isprint(str[0]) ok 
	if (str.length() == 1 && isprint(str[0]))
		return (0);
	// si str == -inff, +inff, nanf -inf, +inf, nan return 0
	// faire une array de strings avec les 6 possibilités et comparer
	std::string ok_str[6] = {"-inff", "+inff", "nanf", "-inf", "+inf", "nan"};
	for (int i = 0; i < 6; i++){
		if (str == ok_str[i])
			return (0);
	}
	// s'il y a uniquement des chiffres OU des chiffres et : un - au départ ou/et un . et un f à la fin : ok
	// = si str[i] n'est pas un chiffre (!isdigit(str[i], loc)) ni un - (en pos str[0]), ni un ., ni un f (en pos finale)
	if (isdigit(str[0], loc) || str[0] == '-'){
		int size = (int)str.size();
		int dot = 0;
		for (int i = 0; i < size - 1; i++){
			if (str[i] == '.'){
				dot++;
				if (dot > 1)
					return (1);
			}
			if (!isdigit(str[i], loc) && str[i] != '.')
				return (1);
		}
		if (!isdigit(str[size - 1], loc) && str[size - 1] != 'f'){
			return (1);
		}
		else
			return (0);
	}
	return (1);
}

int	main(int ac, char *av[]){
	
	if (ac != 2){
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	// fct pour parser l'argument : 
	if (parse(av[1])){
		std::cout << "Wrong input" << std::endl;
		return (1);
	}
	Convert	convert(av[1]);
	convert.checkType();

	// imprimer le résultat
	
	return (0);
}