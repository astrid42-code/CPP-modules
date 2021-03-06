/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:17:09 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/13 18:21:33 by astridgault      ###   ########.fr       */
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
		Weapon		*_weaponB; // pointeur car objet different de l'objet envoyé par le main
		// je dois créer un objet pour cette classe, il n'est pas envoyé par le main
		std::string	_name;
};

#endif