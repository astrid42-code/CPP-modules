/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:48:02 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/27 20:07:34 by astridgault      ###   ########.fr       */
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
	Brain	*brain;
	
	int i = 0;
	while (i < N)
	{
		if (i < N / 2)
			animal[i] = new Dog(); // le type animal va être renvoyé mais sous-typé dog
			// grace a virtual c'est la méthode (fct membre virtuelle) makeSound de Dog qui sera choisi à la compilation
		else
			animal[i] = new Cat();
		std::cout << animal[i]->getType() << " fd " << i << std::endl;
		
		i++;
	}
	brain = animal[N]->getBrain(); // pour initialiser l'objet brain
	for (int i = 0; i < N; i++){
		brain->_ideas[0 + i] = "Let's eat, dude";
		brain->_ideas[1 + i] = "I could eat a human";
		brain->_ideas[2 + i] = "What do we have for dinner tonigth ?";
	}
	// comment donner les idées?
	// comment gérer le fait qu'on veut récupérer les brains en fct du type d'animal
	// comment checker la deep copy?
	for (int i = 0; i < N; i++)
	{
		delete animal[i];
	}

	return (0);
}