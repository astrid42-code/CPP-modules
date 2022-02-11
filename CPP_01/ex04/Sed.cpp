/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:52:03 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/11 12:08:23 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	ft_replace(std::string file_name, std::string s1, std::string s2){
	std::ifstream	input_file; // le fichier de départ
	std::ofstream	output_file; // le fichier .replace à créer pour faire les remplacements
	
	input_file.open(file_name);
	// verifier que l'ouverture est réussie:
	if (!input_file.is_open()){
		std::cout << "Error opening input file" << std::endl;
		return (1);
	}
	output_file.open(file_name + ".replace");
	// verifier que l'ouverture est réussie:
	if (!output_file.is_open()){
		std::cout << "Error opening output file" << std::endl;
		return (1);
	}
	

	input_file.close();
	output_file.close();
	return (0);				
}

// rechercher s1 dans fd.txt (.find)
// si occurrence s1 dans fd.txt > remplacer (substr et ?) s1 par s2