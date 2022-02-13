/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:29:31 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/12 19:58:32 by astridgault      ###   ########.fr       */
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