/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:29:31 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/09 12:03:27 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av){

	Zombie	*zombiehorde = zombieHorde(10, "Hoodie");

	(void)av;
	if (ac != 1){
		std::cout << "Error in arguments" << std::endl;
		return (1);
	}
	for (int i = 0; i < 10; i++)
		zombiehorde->announce(); // flèche car pointeur
	delete [] zombiehorde;
	
	return (0);
}