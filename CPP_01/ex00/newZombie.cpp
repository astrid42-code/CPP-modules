/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/08 11:20:28 by astridgault       #+#    #+#             */
/*   Updated: 2022/02/09 08:26:09 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// fct produisant une instance de classe?
Zombie	*newZombie( std::string name ){
	Zombie	*newZombie = new Zombie(name);
	return (newZombie);
}
