/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 16:30:22 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/09 11:50:50 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// N = nbr total de zonbies
Zombie* zombieHorde( int N, std::string name ){
	Zombie	*zombieHorde = new Zombie[N];
	for (int i = 0; i < N; i++)
		zombieHorde[i].set_name(name);
	return (zombieHorde);
}