/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:29:31 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/09 12:20:58 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av){

	Zombie	*zombie_horde = zombieHorde(10, "Hoodie");
	if (zombie_horde == NULL)
		return (1);

	(void)av;
	if (ac != 1){
		std::cout << "Error in arguments" << std::endl;
		return (1);
	}
	for (int i = 0; i < 10; i++)
		zombie_horde->announce(); // flèche car pointeur
	delete [] zombie_horde;
	return (0);
}