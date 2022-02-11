/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sed.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 11:52:03 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/11 16:03:02 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

int	ft_replace(std::string file_name, std::string s1, std::string s2){
	std::ifstream	input_file; // le fichier de départ
	std::ofstream	output_file; // le fichier .replace à créer pour faire les remplacements
	std::string		line; // sert de buffer en recopiant l'input du fd
	int				pos; // position gardée à chaque occurrence de s1 dans line

	input_file.open(file_name);
	pos = 0;
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
	while (getline(input_file, line)){  // getline prend l'in du fd (input_file) et le stocke dans line
		for (int i = 0; i < line.length(); i++){
			pos = line.find(s1, pos); // find renvoie -1 si pas d'occurrence, sinon la pos de l'occurrence
			std::cout << pos << " " << line[i] << std::endl;
			if (pos != -1){ 
			// retirer (erase) dans line de la position (pos) à la taille de s1
				line.erase(pos, s1.length());
			// copier s2 dans line à partir de la position 
				line.insert(pos, s2);
				std::cout << line << std::endl;
				pos += s2.length();
			}
		}
		output_file << line;
	}
	input_file.close();
	output_file.close();
	return (0);				
}

// remplace correctement si pas de \n sinon s'arrete après le \n