/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/20 13:22:12 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/24 12:06:20 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* animal = new Animal();
	const Animal* cat = new Cat();
	const Animal* dog = new Dog();
	// + faire une instance par copie !
	const Animal cpy_an(*animal);
	const Animal cpy_cat(*cat);
	const Animal cpy_dog(*dog);
	
	std::cout << std::endl;
	std::cout << cat->getType() << " " << std::endl;
	std::cout << dog->getType() << " " << std::endl;
	std::cout << std::endl;
	
	cat->makeSound();
	dog->makeSound();
	animal->makeSound();
	cpy_an.makeSound();
	cpy_cat.makeSound();
	cpy_dog.makeSound();
	
	std::cout << std::endl;
	
	delete animal;
	delete cat;
	delete dog;

	std::cout << std::endl;
	std::cout << "Wrongclass tests" << std::endl;
	
	const WrongAnimal* w_animal = new WrongAnimal();
	const WrongAnimal* w_cat = new WrongCat();
	
	std::cout << w_cat->getType() << " " << std::endl;
	w_cat->makeSound(); //will output the animal sound!
	w_animal->makeSound();

	delete w_animal;
	delete w_cat;

	return (0);
}
