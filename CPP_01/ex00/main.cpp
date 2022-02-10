/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 11:16:56 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/10 11:32:34 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

//new et delete remplacent malloc et free 
// car sinon ces derniers n'appellent pas respectivement constructeur et destructeur de ma classe
// utiliser new quand on veut faire un tableau de strings 
// ex Zombie *zombie = new Zombie[42] pour créer 42 zombies
// puis (dans main ou destructeur?) delete [] zombie;


// reference = un pointeur constant, ie qui pointe tjrs sur la meme chose
// doit tjrs pointer sur kk chose (initialisation obligatoire)
// correspond à une valeur déréférencée d'un pointeur (la chose sur laquelle mon pointeur pointe)
// permet aussi de changer la valeur à laquelle la référence est attachée
// ex &ref = var1 si après je change la valeur de ref, var1 prend cette valeur
// intéret : complète les ptrs mais ne les remplace pas
// pb : initialisation obligatoire et qui ne chngera jamais (à la diff d'un pointeur où je pourrais modifier)
// donc uniquement si var ne doit jamais changer


// filestream : stream (flux) pour agir sur les fichiers
// ex std::ifstream ifs("numbers") : crée un fichier numbers
// ifs >> dst >> dst2 (remplit fichier ifs avec var dst et dst2)
// ifs.close();
// meme chose avec ofstream pour écrire dans fichier ofs("test.out")

int	main(int ac, char **av){

	Zombie	stack_zombie("Foo");
	Zombie	*heap_zombie = newZombie("Bar");

	if (ac != 1){
		std::cout << "Error in arguments" << std::endl;
		return (1);
	}
	stack_zombie.announce();
	heap_zombie->announce(); // flèche car pointeur
	randomChump("Bob");
	delete heap_zombie;
	
	return (0);
}