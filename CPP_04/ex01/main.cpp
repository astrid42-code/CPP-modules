/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:48:02 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/28 11:40:48 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
//#include "WrongAnimal.hpp"
//#include "WrongCat.hpp"


//shallow copy : par réf, avec la même adresse dans la heap

// deep copy : copie profonde avec une nouvelle allocation mémoire

int main()
{
    int	N = 4;
	Animal	*animal[N];
	
	int i = 0;
	while (i < N)
	{
		if (i < N / 2)
			animal[i] = new Dog(); // le type animal va être renvoyé mais sous-typé dog
			// grace a virtual c'est la méthode (fct membre virtuelle) makeSound de Dog qui sera choisi à la compilation
		else
			animal[i] = new Cat();		
		i++;
	}
	
	// brain = animal[i]->getBrain(); // pour initialiser l'objet brain
	// comment donner les idées?
	// comment gérer le fait qu'on veut récupérer les brains en fct du type d'animal
	// comment checker la deep copy?
	for (int i = 0; i < N; i++){
		
		std::cout << animal[i]->getType() << i << " thinks : " << animal[i]->getIdeas(i) << std::endl;
	}
	
	for (int i = 0; i < N; i++)
	{
		delete animal[i];
	}

	return (0);
}