/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 17:37:45 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/11 14:48:19 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sed.hpp"

//programme va recevoir 3 args 
//1 nom du fd, 2 s1, 3 s2

int	main (int ac, char **av){
	std::string		file_name;
	std::string		s1;
	std::string		s2;
	
	if (ac != 4){
		std::cout << "Error in arguments" << std::endl;
		return (1);
	}
	file_name = av[1];
	s1 = av[2];
	s2 = av[3];
	if (file_name.length() == 0 || s1.length() == 0 || s2.length() == 0){
		std::cout << "Error in arguments" << std::endl;
		return (1);
	}
	if (ft_replace(file_name, s1, s2))
		return (1);
	return (0);
}
//std::ifstream	ifs(av[1]); // lier le flux avec le fichier nommé av[1]
//ifs >> s1; // lecture du flux avec les strings s1 et 2
//std::cout << s1 << " " << s2 << std::endl; // afficher données dans le fichier
//ifs.close(); // fermeture fichier

// pour lire sur un output :
// std::ofstream	ofs("nomdufd");
// ofs << "i love u" << std::endl;
// ofs.close();


