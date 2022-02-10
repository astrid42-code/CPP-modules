/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:29:31 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/09 15:09:52 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main(int ac, char **av){
	int N = 12;
	Zombie	*zombie_horde = zombieHorde(N, "Hoodie");
	
	if (zombie_horde == NULL){
		std::cout << "Error" << std::endl;
		return (1);
	}

	(void)av;
	if (ac != 1){
		std::cout << "Error in arguments" << std::endl;
		return (1);
	}
	for (int i = 0; i < N; i++)
		zombie_horde->announce(); // flèche car pointeur
	delete [] zombie_horde;
	return (0);
}