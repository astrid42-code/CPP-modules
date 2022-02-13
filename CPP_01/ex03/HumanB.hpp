/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asgaulti <asgaulti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:17:09 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/13 13:56:32 by asgaulti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();

		void	setWeapon(Weapon &tmp);
		void	attack() const;

	private:
		Weapon		*_weaponB; // pointeur car objet different de l'objet envoye par le main
		std::string	_name;
};

#endif