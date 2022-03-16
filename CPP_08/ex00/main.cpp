/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/15 13:33:51 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/16 10:22:24 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "EasyFind.hpp"

/*
STL : standard template library
contient :
- les containers templatés (ex list, map, vector, ...)
- les algorithmes permettant de faire des opérations sur les collections contenues dans des containers

ex std::vector<int>::const_interator it; pour 

vector : un tableau contenant ce qu'on veut et dont la taille peut changer sans avoir besoin de réallouer un nouveau tableau
pour l'initialiser : std::vector<int>	v1; (par défaut)
std::vector<int>	v2(42, 100); contient 42 entrées avec le nbre 100 dedans
pour rajouter des éléments : .push_back
points positifs par rapport aux arrays/lists :
- ajouter et retirer en fin de liste sans réallouer
points négatifs par rapport aux arrays/lists : 
-demande + de mémoire; 
-pas d'ajout ni retrait à d'autres endroits que la fin

iterator : 

algorithmes : ens de fcts préimplémentées qui peuvent opérer sur des collections 
ex : for_each pour passer par tous les éléments

*/

int main(){
	std::vector<int>	v1;
	
	srand(time(NULL));
	std::cout << "<<<<< TEST vector >>>>>" << std::endl;
	std::cout << "v1 = ";
	for (int i = 0; i < 10; i++){
		v1.push_back(rand() % 20);
		// comment imprime t on chaque valeur du vecteur?
		std::cout << v1[i] << ", ";
	}
	std::cout << std::endl;
	// initialiser une valeur au hasard
	int value = rand() % 15;
	std::cout << "value = " << value << std::endl;
	
	std::cout << std::endl;
	try{
		easyFind(v1, value);
		std::cout << "Value is in v1" << std::endl;
	} 
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}

	std::cout << "<<<<< TEST list >>>>>" << std::endl;
	std::list<int>	l1;
	std::list<int>::iterator	it;
	srand(time(NULL));
	std::cout << "l1 = ";
	for (int i = 0; i < 10; i++){
		l1.push_back(rand() % 15);
	}
	for (it = l1.begin(); it != l1.end(); ++it){
		std::cout << *it << ", ";
		
	}
	
	std::cout << std::endl;
	// initialiser une valeur au hasard
	int value2 = rand() % 20;
	std::cout << "value2 = " << value2 << std::endl;
	
	std::cout << std::endl;
	try{
		easyFind(l1, value2);
		std::cout << "Value2 is in l1" << std::endl;
	} 
	catch(const std::exception& e){
		std::cerr << e.what() << std::endl;
	}	


	return (0);
}