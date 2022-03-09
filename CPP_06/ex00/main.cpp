/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/08 20:47:48 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/09 17:25:12 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int	parse(std::string const &str){
	// si chaine vide return 0
	
	// si str == -inff, +inff, nanf -inf, +inf, nan return 1

	// si char tout seul (str.length() == 1) et isprint(str[0]) ok 

	// for (int i = 0, i < str.length(), i++) si str[i] >= 0 et str[i] <= 9 ok
	// + pareil si ca commence par -
	// + pareil s'il y a un . et un f à la fin
	
	 
}

int	main(int ac, char *av[]){
	
	if (ac != 2){
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	// fct pour parser l'argument : 
	if (!parse(av[1])){
		std::cout << "Wrong input" << std::endl;
		return (1);
	}
	// créer un objet Convert convert(av[1]);
	// imprimer le résultat
	
	return (0);
}