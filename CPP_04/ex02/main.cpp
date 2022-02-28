/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:48:02 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/28 16:30:13 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
# include "Cat.hpp"
# include "Dog.hpp"

//shallow copy : par réf, avec la même adresse dans la heap

// deep copy : copie profonde avec une nouvelle allocation mémoire

int main()
{
	Animal*	a = new Cat();
	Animal*	b = new Dog();
//	impossibilité de créer un objet de classe Animal car classe abstraite
// (voir message de compilation)
//	Animal*	c = new	Animal();
	
	a->makeSound();
	b->makeSound();
//	c->makeSound();

	delete a;
	delete b;

	return (0);
}

// si toutes les méthodes sont abstraites alors ça devient une interface
// on peut mettre des attributs dans une classe abstraite mais pas dans une interface
// les attributs d'une classe abstraite ne seront utilisables que dans les enfants
// les méthodes d'une interface sont à utiliser dans les classes concrètes
