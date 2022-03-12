/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:48:02 by astridgault       #+#    #+#             */
/*   Updated: 2022/03/11 18:08:34 by astridgault      ###   ########.fr       */
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
	std::cout << std::endl; 
	for (int i = 0; i < N; i++){
		
		std::cout << animal[i]->getType() << i << " thinks : " << animal[i]->getIdeas(i) << std::endl;
	}
	std::cout << std::endl; 
	std::cout << "Deep copy :" << std::endl;
	std::cout << std::endl; 
	std::cout << animal[2]->getType() << " 2 thinks : " << animal[2]->getIdeas(0) << std::endl;
	std::cout << animal[3]->getType() << " 3 thinks : " << animal[3]->getIdeas(0) << std::endl;
	
	animal[2]->setIdeas(0, "blabla");
	*(animal[3]) = *(animal[2]);
	
	std::cout << animal[2]->getType() << " 2 thinks : " << animal[2]->getIdeas(0) << std::endl;
	std::cout << animal[3]->getType() << " 3 thinks : " << animal[3]->getIdeas(0) << std::endl;
	std::cout << animal[0]->getType() << " 0 thinks : " << animal[0]->getIdeas(0) << std::endl;
	std::cout << std::endl;

	std::cout << animal[0]->getType() << " 0 thinks : " << animal[0]->getIdeas(5) << std::endl;
	std::cout << animal[1]->getType() << " 1 thinks : " << animal[1]->getIdeas(5) << std::endl;
	
	animal[0]->setIdeas(5, "lol");
	*(animal[1]) = *(animal[0]);
	
	std::cout << animal[0]->getType() << " 0 thinks : " << animal[0]->getIdeas(5) << std::endl;
	std::cout << animal[1]->getType() << " 1 thinks : " << animal[1]->getIdeas(5) << std::endl;
	std::cout << std::endl;
	
	std::cout << animal[2]->getType() << " 2 thinks : " << animal[2]->getIdeas(1) << std::endl;
	std::cout << animal[0]->getType() << " 0 thinks : " << animal[0]->getIdeas(1) << std::endl;
	
	animal[2]->setIdeas(1, "banana");
	*(animal[0]) = *(animal[2]);
	
	std::cout << animal[2]->getType() << " 2 thinks : " << animal[2]->getIdeas(1) << std::endl;
	std::cout << animal[0]->getType() << " 0 thinks : " << animal[0]->getIdeas(1) << std::endl;
	std::cout << std::endl;
	
	for (int i = 0; i < N; i++)
	{
		delete animal[i];
	}

	return (0);
}