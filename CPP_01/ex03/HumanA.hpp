/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:16:39 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/10 17:28:37 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(void);
		HumanA(std::string name, std::string weapon); // ou Weapon weapon (car on veut récupérer l'objet weapon ou la réf??? et dans ce cas &weapon)
		~HumanA(void);

		void	attack(void) const;
		Weapon	&get_weapon(void) const; // méthode pour récupérer l'objet weapon en réf

	private:
		std::string	_name;
		Weapon		_weaponA;
};



#endif