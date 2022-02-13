/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: astridgaultier <astridgaultier@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/09 15:16:39 by asgaulti          #+#    #+#             */
/*   Updated: 2022/02/13 12:35:58 by astridgault      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	public:
		HumanA(void);
		HumanA(std::string name, Weapon &weapon); // Weapon &weapon (car on veut récupérer la réf de l'objet weapon)
		~HumanA(void);

		void	attack(void) const;
		Weapon	&weaponA; // attribut qui récupère la réf &weapon dans le constructeur surchargé
		//(récupère réf de l'objet weaponA dont les méthodes et attributs sont affectés dans la classe Weapon)

	private:
		std::string	_name;
};

#endif