/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/10 10:56:27 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/17 12:05:52 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();

		Weapon ham = Weapon("ham and cheese sandwich");
		HumanA hoodie("Hoodie", ham);
		hoodie.attack();
		ham.setType("burger bacon");
		hoodie.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();

		Weapon banana = Weapon("banana");
		HumanB simon("Simon");
		simon.setWeapon(banana);
		simon.attack();
		banana.setType("yassa");
		simon.attack();
	}
	return (0);
}