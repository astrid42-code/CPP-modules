/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:48:02 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/26 13:01:23 by astridgault      ###   ########.fr       */
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
	Animal *animal[N];
//	Brain *brain;
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
	for (int i = 0; i < N; i++)
	{
		delete animal[i];
	}

	return (0);
}