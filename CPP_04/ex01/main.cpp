/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/23 21:48:02 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/24 18:29:52 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
//#include "WrongAnimal.hpp"
//#include "WrongCat.hpp"

int main()
{
    int	N = 4;
	Animal *animal[N];
//	Brain *brain;
	int i = 0;
	while (i < N)
	{
		if (i < N / 2)
			animal[i] = new Cat();
		else
			animal[i] = new Dog();
		std::cout << animal[i]->getType() << " fd " << i << std::endl;
		i++;
	}
	for (int i = 0; i < N; i++)
	{
		delete animal[i];
	}

	return (0);
}