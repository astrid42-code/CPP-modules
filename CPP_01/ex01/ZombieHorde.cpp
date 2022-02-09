/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:30:22 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/09 12:18:33 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// N = nbr total de zonbies
Zombie* zombieHorde( int N, std::string name ){
	if (N < 0)
		return (NULL);
	Zombie	*zombie_horde = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombie_horde[i].set_name(name);
	return (zombie_horde);
}